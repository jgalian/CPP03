#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// ScavTrap uno("Toby");
	// FragTrap dos("Mike");
	DiamondTrap	tres("Johnny");

	// uno.attack("Marvin");
	// uno.takeDamage(4);
	// uno.beRepaired(2);
	// uno.guardGate();

	// dos.attack("Santana");
	// dos.takeDamage(30);
	// dos.beRepaired(20);
	// dos.highFiveGuys();

	tres.attack("Sisma");
	tres.takeDamage(25);
	tres.beRepaired(15);
	tres.guardGate();
	tres.highFiveGuys();
	tres.whoAmI();

	return (0);
}
