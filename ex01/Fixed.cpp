/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:08:43 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/11 17:32:15 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Default constructor call with initialization of _value to 0
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Int constructor shifts the integer value to the left by _fracBits
Fixed::Fixed(const int value) : _value(value << _fracBits)
{
	std::cout << "Int constructor called" << std::endl;
}

// Float constructor converts the float value to fixed-point representation
// by multiplying by (1 << _fracBits) and rounding it to the nearest integer
Fixed::Fixed(const float value) : _value(static_cast <int>(roundf(value * (1 << _fracBits))))
{
	std::cout << "Float constructor called" << std::endl;
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

// Converts the fixed-point representation to a float
// by dividing _value by (1 << _fracBits)
float Fixed::toFloat() const
{
	return (static_cast<float>(_value) / (1 << _fracBits));
}

// Converts the fixed-point representation to an integer
// by right-shifting _value by _fracBits
int Fixed::toInt() const
{
	return (_value >> _fracBits);
}

// Overloaded insertion operator to output the float representation of Fixed
// by calling toFloat() and inserting it into the output stream
// @return the output stream with the float value of Fixed
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
