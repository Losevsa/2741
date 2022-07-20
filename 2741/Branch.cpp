#include "Branch.h"

Branch::Branch(class Tree* tree,int index, int midBranchCount)
{
	middleBranch = midBranchCount;

	branch = new Branch * [middleBranch];
	for (int i = 0; i < middleBranch; i++)
	{
		std::cout << "Make middle branch: " << i + 1 << std::endl;
	}
}

Branch::~Branch()
{
}

int Branch::getMidBrachCount()
{
	return middleBranch;
}

Branch* Branch::getBranch(int index)
{
	return branch[index];
}