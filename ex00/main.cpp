/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:08:09 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/11 16:00:26 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	// Create instances of Fixed class to test constructors and assignment operator
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	
	// Output the raw bits of each Fixed instance
	std::cout << "\n" << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits()<< "\n" << std::endl;
	
	// Set new raw bits for each Fixed instance
	a.setRawBits(42);
	b.setRawBits(84);
	c.setRawBits(168);

	// Output the raw bits after setting new values
	std::cout << "\n" << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << "\n" << std::endl;
	
	return (0);
}
