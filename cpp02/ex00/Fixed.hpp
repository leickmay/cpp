/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:32:21 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 16:48:55 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


class Fixed
{
	public:
	Fixed();
	~Fixed();
	//constructeur par copie
	Fixed(Fixed const& other);
	//overload d'operateur d'assignation
	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int					m_point;
	static const int	m_bits;
};

#endif