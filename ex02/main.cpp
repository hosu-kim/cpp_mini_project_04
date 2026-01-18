#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// TEST 1 from the doc
// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }

// TEST 2
int main() {
	const int N = 4;
	AAnimal* zoo[N];

	for (int i = 0; i < N; ++i) {
		if (i < N/2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	// TEST: makeSound()
	for (int i = 0; i < N; ++i)
		zoo[i]->makeSound();

	// memory free with delete
	for (int i = 0; i < N; ++i)
		delete zoo[i];
}

// vvv Memory leak test
// valgrind --leak-check=full --show-leak-kinds=all ./zoo
// definitely lost = 0
// and All heap blocks were freed -- no leaks are possible