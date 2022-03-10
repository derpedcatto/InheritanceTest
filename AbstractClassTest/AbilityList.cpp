#include "AbilityList.h"

Fly::Fly()
{
	SetAbilityName("Fly");
}
void Fly::Action()
{
	std::cout << "\nFly used!\n";
}
std::string Fly::GetAbilityName()
{
	return AbilityBase::GetAbilityName();
}

SuperStrength::SuperStrength()
{
	SetAbilityName("Super Strength");
}
void SuperStrength::Action()
{
	std::cout << "\nSuper Strength used!\n";
}
std::string SuperStrength::GetAbilityName()
{
	return AbilityBase::GetAbilityName();
}

Clone::Clone()
{
	SetAbilityName("Clone");
}
void Clone::Action()
{
	std::cout << "\nClone used!\n";
}
std::string Clone::GetAbilityName()
{
	return AbilityBase::GetAbilityName();
}