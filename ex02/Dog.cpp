#include "Dog.hpp"

Dog::Dog(): AAnimal() {
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other): AAnimal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other) {
		delete brain;
		// vvv 부모 클래스의 멤버 변수들도 복사하기 위해 호출
		AAnimal::operator=(other);
		brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "\"Woof!\"" << std::endl;
}
