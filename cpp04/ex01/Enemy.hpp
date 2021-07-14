#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		Enemy();

	protected:
		int	_hitPoints;
		std::string	_type;
	
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const& other);
		Enemy	&operator=(Enemy const& other);
		~Enemy();
		std::string const getType() const;
		int	getHP() const;

		virtual void	takeDamage(int amount);
};

#endif