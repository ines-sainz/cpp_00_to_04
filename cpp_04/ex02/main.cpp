/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:36:30 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/10 10:36:31 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/**
 * @brief Entry point demonstrating polymorphism and deep copy in Animal hierarchy.
 *
 * Creates instances of Dog and Cat using base class pointers to test polymorphic
 * behavior and correct destructor invocation. Also tests deep copying and memory
 * management with dynamic arrays of Animal pointers and Brain idea copying.
 * The Animal class is abstract so it can`t be instantiated.
 *
 * @return int Exit status.
 */
int main()
{
	/*Animal animal1;
	Animal	*animal2 = new Animal();

	(void)animal2;*/

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n";

	delete j;//should not create a leak
	delete i;

	std::cout << "\n";

	size_t n_animals = 3;
	Animal* array[n_animals];

	for (size_t i = 0; i < n_animals; i++)
	{
		if (i < n_animals / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	std::cout << "\n";

	for (size_t i = 0; i < n_animals; i++)
	{
		delete array[i];
	}

	std::cout << "\n";

	Cat cat;
	Cat new_cat = cat;

	cat.printIdeas();

	new_cat.setIdeas("new idea");

	new_cat.printIdeas();
	return 0;
}
