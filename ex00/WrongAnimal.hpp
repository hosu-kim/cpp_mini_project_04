#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected :
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		// the difference between AAnimal and WrongAnimal is:
		// WrongAnimal doesn't have virtual keyword in its destructor and makeSound()
		~WrongAnimal();
		void makeSound() const;
		const std::string& getType() const;
};

#endif