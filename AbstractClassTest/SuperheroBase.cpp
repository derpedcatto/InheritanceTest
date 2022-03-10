#include "SuperheroBase.h"

//------------------------------------------------------------------------// CONST-DEST

SuperheroBase::SuperheroBase(std::string name, std::string ability, bool isGood, std::string racename)
{
	SetName(name);
	SetActiveAbility(ability);
	morality.SetMorality(isGood);
	SetRace(racename);
}

SuperheroBase::~SuperheroBase()
{
	if (ability != nullptr) delete ability;
	if (race != nullptr) delete race;
}

//------------------------------------------------------------------------// PRIVATE

/*incase of adding new stuff specifically to a race / ability*/

void SuperheroBase::SetActiveAbility(std::string ability)
{
	if (ability == "Superstrength")
		this->ability = new SuperStrength;

	else if (ability == "Fly")
		this->ability = new Fly;

	else if (ability == "Clone")
		this->ability = new Clone;

	else
		throw "Wrong ability!";
}

void SuperheroBase::SetRace(std::string race)
{
	if (race == "Human")
		this->race = new Human;

	else if (race == "Mutant")
		this->race = new Mutant;

	else if (race == "God")
		this->race = new God;

	else
		throw "Wrong race name!";
}

void SuperheroBase::SetName(std::string name)
{
	hero_name = name;
}

//------------------------------------------------------------------------// PUBLIC

void SuperheroBase::PrintInfo()
{
	std::cout << "Name: " << hero_name << "\n";
	std::cout << "Ability: " << ability->GetAbilityName() << "\n";

	morality.PrintMorality();
	std::cout << "\n";

	std::cout << "Race: " << race->GetRaceName();
}

void SuperheroBase::UseAbility()
{
	ability->Action();
}

std::string SuperheroBase::GetAbilityName()
{
	return ability->GetAbilityName();
}