#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	std::cout << "FragTrap with no name has born." << std::endl;
}

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap " + name + " has born." << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref)
	: ClapTrap(ref)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Bye" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << "FragTrap assigment overload called." << std::endl;
	ClapTrap::operator=(ref);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "hiiiiiiighFiiiiiive!!!!!" << std::endl;
}
