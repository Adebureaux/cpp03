#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Anonymous"), hp(10), ep(10), ad(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), ad(0)
{
	std::cout << "Named constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->ad = other.ad;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " point(s) of damage!" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot attack because he is out of health point or energy point..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " took " << amount << " point(s) of damage!" << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << "ClapTrap " << this->name << " gets repaired, going from " << this->hp << " health point(s) to " << this->hp + amount << " health point(s)!" << std::endl;
		this->ep--;
		this->hp += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot repair because he is out of health point or energy point..." << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHp() const
{
	return (this->hp);
}

int ClapTrap::getEp() const
{
	return (this->ep);
}

int ClapTrap::getAd() const
{
	return (this->ad);
}

void ClapTrap::setHp(unsigned int amount)
{
	this->hp = amount;
}

void ClapTrap::setEp(unsigned int amount)
{
	this->ep = amount;
}

void ClapTrap::setAd(unsigned int amount)
{
	this->ad = amount;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &other)
{
	o << other.getName() << " properties : " << std::endl <<
	"Health point(s)  : " << other.getHp() << std::endl <<
	"Energy point(s)  : " << other.getEp() << std::endl <<
	"Attack damage    : " << other.getAd() << std::endl;
	return (o);
}
