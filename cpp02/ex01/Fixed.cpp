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

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	m_value = value << m_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	m_value = roundf(value * (1 << m_bits));
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
	return m_value;
}

void	Fixed::setRawBits(int value)
{
	m_value = value;
}

float	Fixed::toFLoat(void) const
{
	return (m_value / (float)(1 << m_bits));
}

int		Fixed::toInt(void) const
{
	return(m_value >> m_bits);
}

Fixed &Fixed::operator=(Fixed const& other)
{
	std::cout << "Assignation constructor called" << std::endl;
	m_value = other.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed &src)
{
	out << src.toFLoat();
	return out;
}