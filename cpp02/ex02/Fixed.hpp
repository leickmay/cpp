/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:21 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/18 10:17:41 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	~Fixed();
	Fixed(Fixed const& other);
	Fixed& operator=(Fixed const& other);
	Fixed&	operator++();
	float	operator++(int);
	Fixed&	operator--();
	float	operator--(int);
	float	toFLoat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int value);
	bool	isSup(Fixed const& other) const;
	bool	isLess(Fixed const& other) const;
	bool	isEgal(Fixed const& other) const;
	static Fixed&	max(Fixed& a, Fixed& b);
	static Fixed&	min(Fixed& a, Fixed& b);


	private:
	int					m_value;
	static const int	m_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed &src);

bool operator>(Fixed const& a, Fixed const& b);
bool operator<(Fixed const& a, Fixed const& b);
bool operator>=(Fixed const& a, Fixed const& b);
bool operator<=(Fixed const& a, Fixed const& b);
bool operator==(Fixed const& a, Fixed const& b);
bool operator!=(Fixed const& a, Fixed const& b);
Fixed	operator+(Fixed const& a, Fixed const& b);
Fixed	operator*(Fixed const& a, Fixed const& b);
Fixed	operator-(Fixed const& a, Fixed const& b);
Fixed	operator/(Fixed const& a, Fixed const& b);
const Fixed&	operator<<(Fixed const& a, Fixed const& b);
const Fixed&	operator>>(Fixed const& a, Fixed const& b);


#endif


