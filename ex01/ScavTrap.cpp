#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor of ScavTrap " << _name << " has been called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	_maxHitPoints = 100;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Constructor of ScavTrap " << _name << " has been called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "Copy constructor of ScavTrap " << _name << " has been called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap " << _name << " has been called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ScavTrap &		ScavTrap::operator=( ScavTrap const & rhs )
// {

// 	return *this;
// }

std::ostream &	operator << ( std::ostream & o, ScavTrap const & i )
{
	o << i.getHitPoints();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack(std::string const & target) const
{
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
