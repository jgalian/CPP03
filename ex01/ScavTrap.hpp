#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void	attack(std::string const & target) const;
		void	guardGate(void) const;

		ScavTrap &		operator = ( ScavTrap const & rhs );

	private:

};

std::ostream &		operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */
