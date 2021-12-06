#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

/*
** Methods
*/
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name : " << _name << ", claptrap_name : " << ClapTrap::_name << ", hp : " <<
	 _hitpoints << ", ep: "<< _energy_pts << ", atk : "<< _atk_dmg <<"\n";
}
/*
** Constructors
*/
DiamondTrap::DiamondTrap()
{
	_name = "";
	ClapTrap::_name = "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energy_pts = ScavTrap::_energy_pts;
	_atk_dmg = FragTrap::_atk_dmg;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energy_pts = ScavTrap::_energy_pts;
	_atk_dmg = FragTrap::_atk_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = diamondtrap;
	std::cout << "diamondtrap copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "diamondtrap destructor called\n";
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap &diamondtrap)
{
	(void) diamondtrap;
	std::cout << "diamondtrap assignment operator called\n";
	return *this;
}