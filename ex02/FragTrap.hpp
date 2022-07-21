#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& ref);
		~FragTrap();
		FragTrap& operator=(const FragTrap& ref);
		void	highFivesGuys(void);
};

#endif
