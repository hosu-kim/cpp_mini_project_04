#include "Animal.hpp"

// 'A'+className means the class is an abstract class which is it cannot make any instance.
Animal::Animal() {
	std::cout << "AAnimal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "AAnimal destructor called" << std::endl;
}
// ========== MEMBER FUNCTIONS ==========
void Animal::makeSound() const {
	std::cout << "\"Shh, there's an animal around...\"" << std::endl;
}

const std::string& Animal::getType() const {
	return type;
}
