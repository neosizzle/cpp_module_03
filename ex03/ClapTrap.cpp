#include "ClapTrap.hpp"

/*
** Methods
*/
void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name <<" attack "<< target <<", causing "<< _atk_dmg << " points of damage! \n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name <<" took "<< amount << " points of damage! \n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name <<" repaired "<< amount << " points of hit points! \n";
}
/*
** Constructors
*/
ClapTrap::ClapTrap()
{
	_name = "";
	_hitpoints = 10;
	_energy_pts = 10;
	_atk_dmg = 0;

	std::cout << "claptrap blank constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitpoints = 10;
	_energy_pts = 10;
	_atk_dmg = 0;

	std::cout << "claptrap string constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	std::cout << "claptrap copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "claptrap destructor called\n";
}

ClapTrap & ClapTrap::operator = (const ClapTrap &claptrap)
{
	(void) claptrap;
	std::cout << "claptrap assignment operator called\n";
	return *this;
}