#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__
#include <iostream>

class ClapTrap
{
	private :
		std::string _name;
		int	_hitpoints;
		int	_energy_pts;
		int	_atk_dmg;

	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();
		ClapTrap &operator = (const ClapTrap &claptrap);
};

#endif  //!__CLAPTRAP__H__