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
 * @brief Demonstrates polymorphism and function overriding.
 * 
 * Creates instances of Animal, Dog, Cat, and WrongCat using base class
 * pointers. It then shows the behavior of virtual vs non-virtual functions
 * by calling getType() and makeSound() on each.
 * 
 * @return int Returns 0 on successful execution.
 */
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* Wrongmeta = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	Wrongmeta->makeSound();

	delete Wrongmeta;
	delete meta;
	delete j;
	delete i;

	return 0;
}
