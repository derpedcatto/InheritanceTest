#pragma once
#include "RaceBase.h"

class Human : public RaceBase
{
public:
	Human()
	{
		SetRaceName("Human");
	}
};

class Mutant : public RaceBase
{
public:
	Mutant()
	{
		SetRaceName("Mutant");
	}
};

class God : public RaceBase
{
public:
	God()
	{
		SetRaceName("God");
	}
};