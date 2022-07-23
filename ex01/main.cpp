#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	C;
	ScavTrap	S("sohan");

	C.printStatus();
	S.printStatus();

	C.attack("ScavTrap sohan");
	S.takeDamage(C.getAP());
	
	C.printStatus();
	S.printStatus();

	S.attack("ClapTrap Annonymous");
	C.takeDamage(S.getAP());
	
	S.printStatus();
	C.printStatus();

	S.beRepaired(50);
	S.printStatus();
	
	return (0);
}
