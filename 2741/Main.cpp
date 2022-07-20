#include <iostream>
#include <ctime>
#include <string>
#include "Village.h"


int main()
{
	srand(time(NULL));
	Village* village = new Village(5);


	
	//вывод инфы по деревьям
	for (int i = 0; i < 5; i++)
	{
		//Tree* test = village->getTreeNumbers(i);
		std::cout << "Tree: " << i + 1 << ", have " << village->getTree(i)->getBigBranchCount() << "big Branches." << std::endl;
		std::cout << village->getTree(i)->getBranches(i)->getBranch(i) << std::endl;
	}
	

	return 0;
}
