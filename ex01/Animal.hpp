#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
	protected :
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();
		// 0으로 초기화 하는 것이 아니라 이 함수는 구현이 없다는 뜻
		// 순수 가상 함수라고 한다.
		// change: virtual void makeSound() const;
		virtual void makeSound() const = 0;
		const std::string& getType() const;
};

#endif