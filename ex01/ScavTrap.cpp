#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "ScavTrap " << this->name << " has born." << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap " + this->name + " has born." << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
	: ClapTrap(ref)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " Bye" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << "ScavTrap assigment overload called." << std::endl;
	if (this != &ref)
		ClapTrap::operator=(ref);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now on Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap attacks " + target << std::endl;
}
