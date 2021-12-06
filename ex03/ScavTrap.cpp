#include "ScavTrap.hpp"

/*
** Methods
*/
void	ScavTrap::guardGate()
{
	std::cout << "GATEKEEPER MODE ACTIVATE\n";
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name <<" attack "<< target <<", causing "<< _atk_dmg << " points of damage! \n";
}


/*
** Constructors
*/
ScavTrap::ScavTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energy_pts = 50;
	_atk_dmg = 20;
	std::cout << "scavtrap blank constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_pts = 50;
	_atk_dmg = 20;
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