#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor of ClapTrap " << _name << " has been called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :
	_name(name),
	_maxHitPoints(10),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Constructor of ClapTrap " << _name << " has been called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor has been called on ClapTrap " << _name << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap " << _name << " has been called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &		ClapTrap::operator = ( ClapTrap const & rhs )
{
	std::cout << "Asignation operator overload has been called on " << _name << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &	operator << ( std::ostream & o, ClapTrap const & i )
{
	o << i.getHitPoints();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing "
		<< _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " is attacked and takes " << amount << " points of damage! ";
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "Now it has " << _hitPoints << " hitpoints." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " is repaired and recovers " << amount << " points of damage! ";
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "Now it has " << _hitPoints << " hitpoints." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int 	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

/* ************************************************************************** */
