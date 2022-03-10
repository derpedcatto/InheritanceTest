#include "RaceBase.h"

void RaceBase::SetRaceName(std::string name)
{
	racename = name;
}
std::string RaceBase::GetRaceName() const
{
	return racename;
}