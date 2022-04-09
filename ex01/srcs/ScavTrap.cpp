#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hp = 100;
	this->ep = 50;
	this->ad = 30;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 50;
	this->ad = 30;
	std::cout << "ScavTrap named constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->ad = other.ad;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->ad << " point(s) of damage!" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ScavTrap " << this->name << " cannot attack because he is out of health point or energy point..." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->name << " took " << amount << " point(s) of damage!" << std::endl;
	this->hp -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "ScavTrap " << this->name << " gets repaired, going from " << this->hp << " health point(s) to " << this->hp + amount << " health point(s)!" << std::endl;
		this->ep--;
		this->hp += amount;
	}
	else
		std::cout << "ScavTrap " << this->name << " cannot repair because he is out of health point or energy point..." << std::endl;
}

void ScavTrap::guardGate()
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ScavTrap " << this->name << " cannot guard the gate because he is out of health point or energy point..." << std::endl;
}
