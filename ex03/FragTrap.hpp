#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap();

		void	attack(std::string const & target) const;
		void	highFiveGuys(void) const;

		//ScavTrap &		operator = ( ScavTrap const & rhs );

	private:

};

std::ostream &		operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */
