#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "ScavTrap with no name has born." << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap " + name + " has born." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
	: ClapTrap(ref)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Bye" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << "ScavTrap assigment overload called." << std::endl;
	ClapTrap::operator=(ref);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now on Gate keeper mode." << std::endl;
}
