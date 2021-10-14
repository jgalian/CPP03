#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "Default constructor of FragTrap " << _name << " has been called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	_maxHitPoints = 100;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Constructor of FragTrap " << _name << " has been called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "Copy constructor of FragTrap " << _name << " has been called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap " << _name << " has been called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &		FragTrap::operator = ( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		_maxHitPoints = rhs._maxHitPoints;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

std::ostream &	operator << ( std::ostream & o, FragTrap const & i )
{
	o << i.getHitPoints();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::attack(std::string const & target) const
{
	std::cout << "FragTrap " << _name << " attack " << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFiveGuys(void) const
{
	std::cout << "FragTrap " << _name << " wants to high fives " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
