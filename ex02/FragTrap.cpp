#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	std::cout << "FragTrap " << this->name << " has born." << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap " + this->name + " has born." << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ref)
	: ClapTrap(ref)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " Bye" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << "FragTrap assigment overload called." << std::endl;
	if (this != &ref)
		ClapTrap::operator=(ref);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "hiiighfiiiivvvs yayyyyy!!!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->hitPoint > 0 && this->energyPoint)
	{
		std::cout << "FragTrap " + this->name + " attacks " + target << std::endl;
		--this->energyPoint;
	}
}

