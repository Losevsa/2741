#include <iostream>
#include <ctime>
#include <string>
#include "Village.h"


int main()
{
	int trees = 2;
	srand(time(NULL));
	Village* village = new Village(trees);


	for (int i = 0; i < trees; i++)
	{
		std::cout << "Tree " << i + 1 << std::endl;

		for (int j = 0; j < village->getTree(i)->getBigBranchCount(); j++)
		{
			std::cout << "Big branch " << j + 1 << std::endl;

			for (int k = 0; k < village->getTree(i)->getBranches(j)->getMidBrachCount(); k++)
			{
				std::cout << "Mid branch " << k + 1 << std::endl;
				village->getTree(i)->getBranches(k)->setElfName(k);
			}
		}
	}


	//вывод инфы по деревьям
	for (int i = 0; i < trees; i++)
	{
		//Tree* test = village->getTreeNumbers(i);
		std::cout << "Tree: " << i + 1 << ", have " << village->getTree(i)->getBigBranchCount() << "big Branches." << std::endl;
		std::cout << village->getTree(i)->getBranches(i)->getBranch(i)->getElfName(i);
	}
	

	return 0;
}
