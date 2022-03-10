#pragma once
#include <iostream>
#include <string>
#include "AbilityBase.h"

class Fly : public AbilityBase
{
public:
	Fly();
	void Action();
	std::string GetAbilityName();
};

class SuperStrength : public AbilityBase
{
public:
	SuperStrength();
	void Action();
	std::string GetAbilityName();
};

class Clone : public AbilityBase
{
public:
	Clone();
	void Action();
	std::string GetAbilityName();
};