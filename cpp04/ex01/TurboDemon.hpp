#ifndef TURBODEMON_HPP
# define TURBODEMON_HPP

# include "Enemy.hpp"

class TurboDemon : public Enemy
{
	public:
		TurboDemon();
		TurboDemon(TurboDemon const& other);
		TurboDemon	&operator=(TurboDemon const& other);
		virtual ~TurboDemon();
};

#endif