#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	A;
	ClapTrap	B("sohan");
	ClapTrap	C(A);
	ClapTrap	D(B);

	A.printStatus();
	B.printStatus();
	C.printStatus();
	D.printStatus();

	A.attack("somebody");
	B.attack("somebody");

	A.printStatus();
	B.printStatus();

	C.beRepaired(100);
	B.beRepaired(50);
	
	A.printStatus();
	B.printStatus();
	C.printStatus();
	D.printStatus();

	ScavTrap	S;
	ScavTrap	SS("test");
	S.attack("sohan");
	S.guardGate();

	S.printStatus();
	S = SS;
	S.printStatus();
	
	return (0);
}
