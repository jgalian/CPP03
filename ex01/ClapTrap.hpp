#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void	attack( std::string const & target ) const;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		int 	getHitPoints(void) const;

		ClapTrap &	operator = ( ClapTrap const & rhs );

	protected:

		std::string 	_name;
		unsigned int	_maxHitPoints;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

};

std::ostream &		operator << ( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */
