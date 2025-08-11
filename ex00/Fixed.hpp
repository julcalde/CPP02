/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:08:08 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/11 15:18:22 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int _value;
		static const int _fracBits = 8; // number of fractional bits
	
	public:
		Fixed();	// Default constructor
		Fixed(const Fixed& other);	// Copy constructor
		Fixed& operator=(const Fixed& other);	// Copy assignment operator
		~Fixed();	//Destructor

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif