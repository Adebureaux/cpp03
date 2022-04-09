#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main(void)
{
	/* Ryu VS Sagat */
	FragTrap ryu("Ryu");
	ScavTrap sagat("Sagat");
	
	std::cout << std::endl << ryu << std::endl << sagat << std::endl;

	ryu.beRepaired(20);

	sagat.guardGate();

	ryu.highFivesGuys();

	ryu.attack("Sagat");
	sagat.takeDamage(ryu.getAd());

	sagat.attack("Ryu");
	ryu.takeDamage(sagat.getAd());

	ryu.beRepaired(10);

	std::cout << std::endl << ryu << std::endl << sagat << std::endl;
	/* Ryu VS Sagat End */
}
