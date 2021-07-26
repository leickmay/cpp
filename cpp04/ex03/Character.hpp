#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "list.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*_materias[4];
		t_list				*_garbage;
		std::string const	_name;
		Character();
	
	public:
		Character(std::string name);
		Character(Character const& other);
		Character	&operator=(Character const& other);
		~Character();
		std::string const&	getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif