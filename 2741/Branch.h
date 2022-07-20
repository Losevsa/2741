#pragma once
#include <iostream>

class Branch
{
public:
	Branch(class Tree* tree, int index, int midBranchCount);
	~Branch();

	int getMidBrachCount();
	Branch* getBranch(int index);

private:
	Branch** branch = nullptr;
	int middleBranch = 0;
};

