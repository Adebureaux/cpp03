#include "../includes/ScavTrap.hpp"

int	main(void)
{
	/* Ryu VS Sagat */
	ClapTrap ryu("Ryu");
	ScavTrap sagat("Sagat");

	ryu.setAd(15);
	
	std::cout << std::endl << ryu << std::endl << sagat << std::endl;

	ryu.beRepaired(20);

	sagat.guardGate();

	ryu.attack("Sagat");
	sagat.takeDamage(ryu.getAd());

	sagat.attack("Ryu");
	ryu.takeDamage(sagat.getAd());

	ryu.beRepaired(10);

	std::cout << std::endl << ryu << std::endl << sagat << std::endl;
	/* Ryu VS Sagat End */

	/* ScavTrap copy and equal*/
	ScavTrap sagat_copy(sagat);
	std::cout << std::endl << sagat_copy << std::endl;

	sagat_copy.setAd(35);

	ScavTrap sagat_equal = sagat_copy;
	std::cout << std::endl << sagat_equal << std::endl;
}
