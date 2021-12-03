#include "ClapTrap.hpp"

/*
** Methods
*/

/*
** Constructors
*/
ClapTrap::ClapTrap()
{
	_name = "";
	_hitpoints = 10;
	_energy_pts = 10;
	_atk_dmg = 0;

	std::cout << "blank constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitpoints = 10;
	_energy_pts = 10;
	_atk_dmg = 0;

	std::cout << "string constructor called\n";
}