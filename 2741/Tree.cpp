#include "Tree.h"

int Tree::getBigBranchCount()
{
	return bigBranch;
}



Tree::Tree(class Village* village, int bigBr, int midBr)
{
	bigBranch = bigBr;
	middleBranch = midBr;

	branches = new Branch * [bigBranch];
	for (int i = 0; i < bigBranch; i++)
	{
		std::cout << "Big Branch " << i + 1 << std::endl;
		branches[i] = new Branch(this, i, middleBranch);
		//trees[i] = new Tree(this, random(3, 5), random(2, 3));
	}
}

Tree::~Tree()
{
}

Branch* Tree::getBranches(int index)
{
	return branches[index];
}