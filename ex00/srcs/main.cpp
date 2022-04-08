#include "../includes/ClapTrap.hpp"

int	main(void)
{
	/* Ryu VS Sagat */
	ClapTrap ryu("Ryu");
	ClapTrap sagat("Sagat");

	ryu.setHp(25);
	ryu.setEp(5);
	ryu.setAd(3);

	sagat.setHp(17);
	sagat.setEp(8);
	sagat.setAd(25);
	
	std::cout << std::endl << ryu << std::endl;
	std::cout << sagat << std::endl;

	ryu.attack("Sagat");
	sagat.takeDamage(ryu.getAd());

	sagat.beRepaired(2);

	ryu.attack("Sagat");
	sagat.takeDamage(ryu.getAd());

	sagat.attack("Ryu");
	ryu.takeDamage(sagat.getAd());

	ryu.beRepaired(25);

	std::cout << std::endl << ryu << std::endl;
	std::cout << sagat << std::endl;
	/* Ryu VS Sagat End */
	
	std::cout << std::endl << std::endl;

	/* Akuma VS Akuma cloned */
	ClapTrap akuma("Akuma");
	akuma.setHp(125);
	akuma.setEp(1);
	akuma.setAd(15);
	ClapTrap akuma_clone(akuma);
	
	std::cout << std::endl << akuma << std::endl;
	std::cout << akuma_clone << std::endl;
	akuma.attack("Akuma");
	akuma_clone.takeDamage(akuma.getAd());

	akuma.beRepaired(100);

	std::cout << std::endl << akuma << std::endl;
	std::cout << akuma_clone << std::endl;
}
