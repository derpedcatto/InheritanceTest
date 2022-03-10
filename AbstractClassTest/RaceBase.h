#pragma once
#include <iostream>
#include <string>

class RaceBase
{
private:
	std::string racename;

public:
	void SetRaceName(std::string name);
	std::string GetRaceName() const;

};