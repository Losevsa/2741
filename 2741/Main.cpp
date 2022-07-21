#include <iostream>
#include <ctime>
#include <string>
#include "Village.h"


int main()
{
	int trees = 1;
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
				village->getTree(i)->getBranches(j)->getMidBranch(k)->setElfName(k, j);
			}
		}
	}


	//вывод инфы по деревьям
	for (int i = 0; i < trees; i++)
	{
		std::cout << "Tree " << i + 1 << std::endl;

		for (int j = 0; j < village->getTree(i)->getBigBranchCount(); j++)
		{
			std::cout << "Big branch " << j + 1 << std::endl;

			for (int k = 0; k < village->getTree(i)->getBranches(j)->getMidBrachCount(); k++)
			{
				std::cout << "Mid branch " << k + 1 << " ";
				std::cout << village->getTree(i)->getBranches(j)->getMidBranch(k)->getElfName(k) << std::endl;
			}
		}
	}
	
	std::string findName;
	std::cout << "What Elf name you want found: ";
	std::cin >> findName;

	for (int i = 0; i < trees; i++)
	{
		for (int j = 0; j < village->getTree(i)->getBigBranchCount(); j++)
		{
			int neighbourCount = 0;
			bool nameFound = false;
			for (int k = 0; k < village->getTree(i)->getBranches(j)->getMidBrachCount(); k++)
			{
				if ((village->getTree(i)->getBranches(j)->getMidBranch(k)->getElfName(k)) != "None")
				{
					neighbourCount++;
				}				
				if ((village->getTree(i)->getBranches(j)->getMidBranch(k)->getElfName(k)) == findName)
				{
					nameFound = true;
					neighbourCount--;
				}				
			}
			if (nameFound)
			{
				std::cout << "Elf found, with " << neighbourCount << " neighbour." << std::endl;
			}
			
		}
	}

	return 0;
}
