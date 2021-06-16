/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leickmay <leickmay@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:26:50 by leickmay          #+#    #+#             */
/*   Updated: 2021/06/16 11:26:52 by leickmay         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const void *Human::identify()
{
	return this->m_brain.identify();
}

const Brain	&Human::getBrain()
{
	return (this->m_brain);
}