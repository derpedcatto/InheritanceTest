#include <iostream>
#include <string>
#include "SuperheroList.h"

int main()
{
	/*Variant 1*/


	Superman superman;
	Hulk hulk;
	DrStrange drstrange;

	superman.PrintInfo();
	printf("\n\n");

	hulk.PrintInfo();
	printf("\n\n");

	drstrange.PrintInfo();
	printf("\n\n");

	/*Variant 2*/

	Superhero newhero("Newhero", "Fly", false, "God");
	newhero.PrintInfo();

	/*Test - who can fly*/
	printf("\n\n\n\n");

	SuperheroBase* testarray[4];
	testarray[0] = &superman;
	testarray[1] = &hulk;
	testarray[2] = &drstrange;
	testarray[3] = &newhero;

	for (int i = 0; i < 4; i++)
	{
		if (testarray[i]->GetAbilityName() == "Fly")
		{
			std::cout << i << " can fly!\n";
		}
	}
}