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
}

Fixed::Fixed(int const value)
{
	m_value = value << m_bits;
}

Fixed::Fixed(float const value)
{
	m_value = roundf(value * (1 << m_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const& other):m_value(other.getRawBits())
{
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

//Comparisons methodes
bool	Fixed::isSup(Fixed const& other) const
{
	return(m_value > other.m_value);
}

bool	Fixed::isLess(Fixed const& other) const
{
	return(m_value < other.m_value);
}

bool	Fixed::isEgal(Fixed const& other) const
{
	return(m_value == other.m_value);
}

//Increment
Fixed	&Fixed::operator++()
{
	m_value++;
	return *this;
}

float	Fixed::operator++(int)
{
	float ret = this->toFLoat();
	m_value++;
	return ret;
}

//Decrement
Fixed	&Fixed::operator--()
{
	m_value--;
	return *this;
}

float	Fixed::operator--(int)
{
	float ret = this->toFLoat();
	m_value--;
	return ret;
}


Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::operator=(Fixed const& other)
{
	m_value = other.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed &src)
{
	out << src.toFLoat();
	return out;
}

//Comparisons
bool operator>(Fixed const& a, Fixed const& b)
{
	return (a.isSup(b));
}

bool operator<(Fixed const& a, Fixed const& b)
{
	return (a.isLess(b));
}

bool operator>=(Fixed const& a, Fixed const& b)
{
	return (a.isSup(b) || a.isEgal(b));
}

bool operator<=(Fixed const& a, Fixed const& b)
{
	return (a.isLess(b) || a.isEgal(b));
}

bool operator==(Fixed const& a, Fixed const& b)
{
	return (a.isEgal(b));
}

bool operator!=(Fixed const& a, Fixed const& b)
{
	return (!a.isEgal(b));
}

//Operations
Fixed	operator+(Fixed const& a, Fixed const& b)
{
	Fixed Result;
	Result.setRawBits(a.getRawBits() + b.getRawBits());
	return Result;
}

Fixed	operator*(Fixed const& a, Fixed const& b)
{
	float	operation;

	operation = a.toFLoat() * b.toFLoat();
	Fixed Result(operation);
	return Result;
}

Fixed	operator-(Fixed const& a, Fixed const& b)
{
	Fixed Result;
	Result.setRawBits(a.getRawBits() - b.getRawBits());
	return Result;
}

Fixed	operator/(Fixed const& a, Fixed const& b)
{
	float	operation;

	operation = a.toFLoat() / b.toFLoat();
	Fixed Result(operation);
	return Result;
}

const Fixed&	operator<<(Fixed const& a, Fixed const& b)
{
	if (a > b)
		return b;
	else
		return a;
}

const Fixed&	operator>>(Fixed const& a, Fixed const& b)
{
	if (a < b)
		return b;
	else
		return a;
}