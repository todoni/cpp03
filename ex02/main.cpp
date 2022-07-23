#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	C;
	ScavTrap	S("sohan");
	FragTrap	F("test");

	C.printStatus();
	S.printStatus();
	F.printStatus();

	C.attack("ScavTrap sohan");
	S.takeDamage(C.getAP());
	
	C.printStatus();
	S.printStatus();
	
	F.attack("ScavTrap sohan");
	S.takeDamage(F.getAP());

	F.printStatus();
	S.printStatus();

	S.attack("ClapTrap Annonymous");
	C.takeDamage(S.getAP());
	
	S.printStatus();
	C.printStatus();

	S.beRepaired(50);
	S.printStatus();

	C = S;
	S = C;
	
	return (0);
}
