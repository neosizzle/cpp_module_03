#include "ScavTrap.hpp"

int	main()
{
	ScavTrap ct("marvin");

	ct.attack("luigi");
	ct.takeDamage(69);
	ct.beRepaired(69);
	ct.guardGate();
	return 0;
}
