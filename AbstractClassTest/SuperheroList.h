#pragma once
#include <iostream>
#include "SuperheroBase.h"
#include "RaceList.h"

//---------------------------------------------------------------------------// Variant 1

class Superman : public SuperheroBase
{
public:
	Superman() : SuperheroBase("Superman", "Fly", true, "Human") {};
};

class Hulk : public SuperheroBase
{
public:
	Hulk() : SuperheroBase("Hulk", "Superstrength", true, "Mutant") {};
};

class DrStrange : public SuperheroBase
{
public:
	DrStrange() : SuperheroBase("Dr Strange", "Clone", false, "God") {};
};

//---------------------------------------------------------------------------// Variant 2

class Superhero : public SuperheroBase
{
public:
	Superhero(std::string name, std::string ability, bool isGood, std::string racename) : SuperheroBase(name, ability, isGood, racename) {};
};