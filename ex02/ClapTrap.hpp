#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define DEFAULT_NAME "Annonymous"
# define DEFAULT_HP 100
# define DEFAULT_EP 50
# define DEFAULT_AP 20

class	ClapTrap
{
	private:
		std::string	name;
		int	hitPoint;
		int	energyPoint;
		int	attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& ref);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& ref);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printStatus(void);
};

#endif
