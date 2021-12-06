#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragtrap);
		~FragTrap();
		FragTrap &operator = (const FragTrap &fragtrap);
		void	highFivesGuys(void);

};
#endif  