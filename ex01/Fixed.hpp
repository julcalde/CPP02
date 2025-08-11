/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:08:41 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/11 17:32:45 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _fracBits = 8;

	public:
		Fixed();	// Default constructor
		Fixed(const int value);	// int constructor
		Fixed(const float value);	// float constructor
		Fixed(const Fixed& other);	// Copy constructor
		Fixed& operator=(const Fixed& other);	// Copy assignment operator
		~Fixed();	//Destructor

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;	// Converts to float
		int toInt() const;	// Converts to int
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // INSERTION operator

#endif