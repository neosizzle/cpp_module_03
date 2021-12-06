#ifndef __DIAMONDTRAP__H__
#define __DIAMONDTRAP__H__
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &diamondtrap);
		~DiamondTrap();
		DiamondTrap &operator = (const DiamondTrap &diamondtrap);
		void	attack(const std::string &target);
		void	whoAmI(void);

	private:
		std::string _name;
};
#endif  