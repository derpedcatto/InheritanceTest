#include "MoralityState.h"

void Morality::PrintMorality() const
{
	if (isGood)
		printf("Morality: Good");
	else
		printf("Morality: Bad");
}
void Morality::SetMorality(bool isGood)
{
	this->isGood = isGood;
}
bool Morality::GetMorality() const
{
	return isGood;
}