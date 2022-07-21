#pragma once
#include <iostream>
#include <string>

class Branch
{
public:
	Branch(class Tree* tree, int index, int midBranchCount);
	Branch(class Branch* bran, int index);
	~Branch();

	int getMidBrachCount();
	Branch* getBranch(int index);
	Branch* getMidBranch(int index);
	std::string getElfName(int index);
	void setElfName(int index, int address);

private:
	Branch** branch = nullptr;
	int middleBranch = 0;
	std::string name = "";
	int address = 0;
};

