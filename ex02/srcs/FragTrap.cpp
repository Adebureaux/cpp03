#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap named constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->ad = other.ad;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->ad << " point(s) of damage!" << std::endl;
		this->ep--;
	}
	else
		std::cout << "FragTrap " << this->name << " cannot attack because he is out of health point or energy point..." << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "FragTrap " << this->name << " is asking for a high five" << std::endl;
		this->ep--;
	}
	else
		std::cout << "FragTrap " << this->name << " cannot high five because he is out of health point or energy point..." << std::endl;
}
