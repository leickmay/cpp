#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type):_hitPoints(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const& other):_hitPoints(other._hitPoints), _type(other._type)
{
}

Enemy&	Enemy::operator=(Enemy const& other)
{
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_type = other._type;
	}
	return *this;
}

std::string	const	Enemy::getType() const
{
	return _type;
}

int	Enemy::getHP() const
{
	return _hitPoints;
}

void	Enemy::takeDamage(int amount)
{
	if (_hitPoints - amount <= 0)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}