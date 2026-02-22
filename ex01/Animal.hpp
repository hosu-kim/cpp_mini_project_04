#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected :
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		// 0으로 초기화 하는 것이 아니라 이 함수는 구현이 없다는 뜻
		// 순수 가상 함수라고 한다.
		// change: virtual void makeSound() const;
		virtual void makeSound() const = 0;
		const std::string& getType() const;
};

#endif