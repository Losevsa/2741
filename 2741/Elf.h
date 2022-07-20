#pragma once
#include <iostream>

class Elf
{
public:
	Elf();
	~Elf();

private:
	std::string name = "";
	int treeIndex = 0;
	int bigBranchIndex = 0;
	int middleBranchIndex = 0;
};

