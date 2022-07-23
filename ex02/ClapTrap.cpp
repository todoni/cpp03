#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:name(DEFAULT_NAME), hitPoint(DEFAULT_HP), energyPoint(DEFAULT_EP), attackDamage(DEFAULT_AP)
{
	std::cout << "ClapTrap " + this->name + " has born"	<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:name(name), hitPoint(DEFAULT_HP), energyPoint(DEFAULT_EP), attackDamage(DEFAULT_AP)
{
	std::cout << "ClapTrap " + this->name + " has born"	<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	(*this) = ref;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "ClapTrap assigment overload called." << std::endl;
	if (this != &ref)
	{
		this->name = ref.name;
		this->hitPoint = ref.hitPoint;
		this->energyPoint = ref.energyPoint;
		this->attackDamage = ref.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name + " : Bye Bye" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		std::cout << "ClapTrap " + this->name + " attacks " + target + " causing " << this->attackDamage << " points of damage!" << std::endl;
		--this->energyPoint;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[SYSTEM] " + this->name + " HP -" << amount << std::endl;
	this->hitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		std::cout << "[SYSTEM] " + this->name + " HP +" << amount << std::endl;
		this->hitPoint += amount;
		--this->energyPoint;
	}
}

void	ClapTrap::printStatus(void)
{
	std::cout << "[" + this->name + "]" << std::endl;
	std::cout << this->hitPoint << std::endl;
	std::cout << this->energyPoint << std::endl;
	std::cout << this->attackDamage << std::endl;
	std::cout << std::endl;
}

unsigned int	ClapTrap::getAP(void)
{
	return (this->attackDamage);
}
