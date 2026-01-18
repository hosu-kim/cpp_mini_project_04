#include "Cat.hpp"

Cat::Cat(): AAnimal() {
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other): AAnimal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other) {
		delete brain;
		AAnimal::operator=(other);
		brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "\"meow...❤️\"" << std::endl;
}
