/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:43 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:45 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	m_weight = 8.54;
	m_size = 55.12;
	m_nbNeurones = 2347483647;
}

const void	*Brain::identify() const
{
	return this;
}