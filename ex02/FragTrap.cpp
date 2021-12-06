#include "FragTrap.hpp"

/*
** Methods
*/
void	FragTrap::highFivesGuys()
{
	std::cout << "Hi5guys??\n";
}

/*
** Constructors
*/
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "fragtrap blank constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
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