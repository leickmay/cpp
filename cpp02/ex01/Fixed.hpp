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
	Fixed& operator<<(Fixed const& other);
	float	toFLoat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int value);

	private:
	int					m_value;
	static const int	m_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed &src);


#endif


