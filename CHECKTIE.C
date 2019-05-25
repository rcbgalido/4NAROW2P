#include "4NAROW2P.H"

int checkTie(){
	if(oneColumn<=6||twoColumn<=6||threeColumn<=6||fourColumn<=6||fiveColumn<=6||sixColumn<=6||sevenColumn<=6)
		return 0;
	else
		return 1;
}