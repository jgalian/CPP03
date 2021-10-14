#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	tres("Johnny");

	tres.attack("Sisma");
	tres.takeDamage(25);
	tres.beRepaired(15);
	tres.guardGate();
	tres.highFiveGuys();
	tres.whoAmI();

	return (0);
}
