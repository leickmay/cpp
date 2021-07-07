/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:21 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/18 10:45:19 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
	Fixed();
	~Fixed();
	Fixed(Fixed const& other);
	Fixed& operator=(Fixed const& other);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int					m_value;
	static const int	m_bits;
};

#endif



