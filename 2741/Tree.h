#pragma once
#include <iostream>
#include "Branch.h"


class Tree
{
public:
	Tree(class Village* village, int bigBr, int midBr);
	~Tree();
	int getBigBranchCount();
	Branch* getBranches(int index);

private:
	int bigBranch = 0;
	int middleBranch = 0;
	Branch** branches = nullptr;
};

