/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:08:41 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/11 18:29:27 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _value;							// private variable to hold the fixed-point value
		static const int _fracBits = 8;		// Number of fractional bits

	public:
		Fixed();								// Default constructor
		Fixed(const int value);					// int constructor
		Fixed(const float value);				// float constructor
		Fixed(const Fixed& other);				// Copy constructor
		Fixed& operator=(const Fixed& other);	// Copy assignment operator
		~Fixed();								//Destructor

		bool operator>(const Fixed& other) const;		// Greater than operator
		bool operator<(const Fixed& other) const;		// Less than operator
		bool operator>=(const Fixed& other) const;	// Greater than or equal to operator
		bool operator<=(const Fixed& other) const;	// Less than or equal to operator
		bool operator==(const Fixed& other) const;	// Equality operator
		bool operator!=(const Fixed& other) const;	// Not equal operator

		Fixed operator+(const Fixed& other) const;	// Addition operator
		Fixed operator-(const Fixed& other) const;	// Subtraction operator
		Fixed operator*(const Fixed& other) const;	// Multiplication operator
		Fixed operator/(const Fixed& other) const;	// Division operator

		Fixed& operator++();			// Pre-increment operator
		Fixed& operator++(int);			// Post-increment operator
		Fixed& operator--();			// Pre-decrement operator
		Fixed& operator--(int);			// Post-decrement operator

		static Fixed& min(Fixed& a, Fixed&b);						// Returns the minimum of two Fixed objects
		static const Fixed& min(const Fixed& a, const Fixed&b);		// Returns the minimum of two Fixed objects
		static Fixed& max(Fixed& a, Fixed&b);						// Returns the maximum of two Fixed objects
		static const Fixed& max(const Fixed& a, const Fixed&b);		// Returns the maximum of two Fixed objects

		int getRawBits() const;			// Returns the raw value
		void setRawBits(int const raw);	// Sets the raw value
		float toFloat() const;			// Converts to float
		int toInt() const;				// Converts to int
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // INSERTION operator

#endif