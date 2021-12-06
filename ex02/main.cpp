#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap ct("marvin");

	ct.attack("luigi");
	ct.takeDamage(69);
	ct.beRepaired(69);
	ct.highFivesGuys();
	return 0;
}
