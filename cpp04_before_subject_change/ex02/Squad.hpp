#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

typedef struct	s_list
{
	ISpaceMarine*	data;
	struct s_list*	next;
}				t_list;

class Squad : public ISquad
{
	private:
		t_list			*_list;
		int				_count;

	public:
		Squad();
		virtual ~Squad();
		Squad(Squad const& other);
		Squad	&operator=(Squad const& other);
		int				getCount() const;
		ISpaceMarine*	getUnit(int u) const;
		int				push(ISpaceMarine* s);
};

#endif
