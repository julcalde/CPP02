/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:08:05 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/11 15:57:30 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Default constructor call with initialization of _value to 0
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor initializes _value from another Fixed instance
Fixed::Fixed(const Fixed& other) : _value(other._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator checks for self-assignment and copies _value
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_value = other._value;
	}
	return (*this);
}

// Classic destructor that outputs a message when called
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Member function to get the raw bits and announce itself
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

// Member function to set the _value to raw bits and announce itself
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
