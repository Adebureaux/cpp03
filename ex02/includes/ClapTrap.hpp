#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	int getHp() const;
	int getEp() const;
	int getAd() const;
	void setHp(unsigned int amount);
	void setEp(unsigned int amount);
	void setAd(unsigned int amount);

	protected:
	std::string name;
	int hp;
	int ep;
	int ad;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &other);

#endif
