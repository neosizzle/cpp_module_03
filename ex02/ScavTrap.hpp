#ifndef __SCAVTRAP__H__
#define __SCAVTRAP__H__
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		~ScavTrap();
		ScavTrap &operator = (const ScavTrap &scavtrap);

		void	guardGate(void);
		void	attack(std::string const & target);
};

#endif 