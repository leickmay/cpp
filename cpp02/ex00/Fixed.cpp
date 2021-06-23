/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:19 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/18 10:17:15 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& other):m_value(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return m_value;
}

void	Fixed::setRawBits(int const raw)
{
	m_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const& other)
{
	std::cout << "Assignation constructor called" << std::endl;
	m_value = other.getRawBits();
	return *this;
}