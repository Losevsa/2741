#include "Village.h"

int random(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

Tree* Village::getTree(int index)
{
	return trees[index];
}

Village::Village(int treesCount)
{
	trees = new Tree * [treesCount];
	for (int i = 0; i < treesCount; i++)
	{
		std::cout << "Tree: " << i + 1 << std::endl;
		trees[i] = new Tree(this, random(3, 5), random(2, 3));
	}
}

Village::~Village()
{
	delete[] trees;
}
