#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor of DiamondTrap " << _name << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "clap_name"), ScavTrap(name), FragTrap(name)
{
	_maxHitPoints = FragTrap::_maxHitPoints;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Constructor of DiamondTrap " << _name << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "Copy constructor of DiamondTrap " << _name << " has been called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap " << _name << " has been called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// DiamondTrap &		DiamondTrap::operator = ( DiamondTrap const & rhs )
// {

// 	return *this;
// }

std::ostream &		operator << ( std::ostream & o, DiamondTrap const & i )
{
	o << i.getHitPoints();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::attack(std::string const & target) const
{
	this->ScavTrap::attack( target );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
