#pragma once
#include <iostream>

class Morality
{
private:
	bool isGood;

public:
	void PrintMorality() const;
	void SetMorality(bool isGood);
	bool GetMorality() const;
};