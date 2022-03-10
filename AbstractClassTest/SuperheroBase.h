#pragma once
#include <iostream>
#include "AbilityList.h"
#include "MoralityState.h"
#include "RaceList.h"

class SuperheroBase abstract
{
private:
	std::string hero_name;
	AbilityBase* ability;
	Morality morality;
	RaceBase* race;

	void SetName(std::string name);
	void SetActiveAbility(std::string ability);
	void SetRace(std::string race);

public:
	SuperheroBase(std::string ability, std::string name, bool isGood, std::string racename);
	void PrintInfo();
	void UseAbility();
	std::string GetAbilityName();

	~SuperheroBase();
};