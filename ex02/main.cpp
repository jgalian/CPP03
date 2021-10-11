#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap uno("Toby");
	FragTrap dos("Mike");

	uno.attack("Marvin");
	uno.takeDamage(4);
	uno.beRepaired(2);
	uno.guardGate();

	dos.attack("Santana");
	dos.takeDamage(30);
	dos.beRepaired(20);
	dos.highFiveGuys();
}
