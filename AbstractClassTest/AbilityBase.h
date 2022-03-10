#pragma once
#include <iostream>
#include <string>

class AbilityBase abstract
{
private:
	std::string abilityname;

public:
	virtual void Action() = 0;
	void SetAbilityName(std::string abilityname)
	{
		this->abilityname = abilityname;
	}
	std::string GetAbilityName()
	{
		return abilityname;
	}
};