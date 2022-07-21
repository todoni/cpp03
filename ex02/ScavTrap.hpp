#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& ref);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& ref);
		void	guardGate(void);
};

#endif
