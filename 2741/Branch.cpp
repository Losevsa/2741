#include "Branch.h"

Branch::Branch(class Tree* tree,int index, int midBranchCount)
{
	middleBranch = midBranchCount;

	branch = new Branch * [middleBranch];
	for (int i = 0; i < middleBranch; i++)
	{
		branch[i] = new Branch(this, i);
	}
}
Branch::Branch(class Branch* bran, int index)
{
	//setElfName(index);
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

std::string Branch::getElfName(int index)
{
	return name;
}

void Branch::setElfName(int index)
{
	std::cout << "Enter Elf name: ";
	std::cin >> name;
}