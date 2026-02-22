/* This exercise is about implementing a class `Animal`.
   It has a protected attribute `std::string type;`
   And two class `Dog` and `Cat` inherit from `Animal`:
     These two classes must set thier `type` depending on their name.
     The `Dog`'s type is initialized to `Dog`,
     The `Cat`s type is initialized to `Cat`.
     The type of the `Animal` can be left empty or set to a value
   Every animal must be able to use the mem func:
     makeSound() that prints an appropriate sound.
*/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// 'A'+className means the class is an abstract class which is it cannot make any instance.
// * look at `virtual` keyword.
class Animal {
	// private members cannot be inherited to child class. Use protected.
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		// if `virtual` is not used even if you modifired the member function from parent,
		// parent's function is executed. use virtual so that modified functions are executed.
		virtual ~Animal();
		// const: read-only; to protect the status of instance
		virtual void makeSound() const;
		const std::string& getType() const;
};

#endif
