#include "FragTrap.hpp"

/*
** Methods
*/
void	FragTrap::highFivesGuys()
{
	std::cout << "Hi5guys??\n";
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << _name <<" attack "<< target <<", causing "<< _atk_dmg << " points of damage! \n";
}

/*
** Constructors
*/
FragTrap::FragTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energy_pts = 50;
	_atk_dmg = 20;
	std::cout << "fragtrap blank constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_pts = 50;
	_atk_dmg = 20;
	std::cout << "fragtrap string constructor called\n";
}

FragTrap::FragTrap(const FragTrap &fragtrap)  : ClapTrap()
{
	*this = fragtrap;
	std::cout << "fragtrap copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "fragtrap destructor called\n";
}

FragTrap & FragTrap::operator = (const FragTrap &fragtrap)
{
	(void) fragtrap;
	std::cout << "fragtrap assignment operator called\n";
	return *this;
}