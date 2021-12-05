#include "ScavTrap.hpp"

/*
** Methods
*/
void	ScavTrap::guardGate()
{
	std::cout << "GATEKEEPER MODE ACTIVATE\n";
}

/*
** Constructors
*/
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "scavtrap blank constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "scavtrap string constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)  : ClapTrap()
{
	*this = scavtrap;
	std::cout << "scavtrap copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "scavtrap destructor called\n";
}

ScavTrap & ScavTrap::operator = (const ScavTrap &scavtrap)
{
	(void) scavtrap;
	std::cout << "scavtrap assignment operator called\n";
	return *this;
}