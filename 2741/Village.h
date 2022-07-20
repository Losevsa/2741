#pragma once
#include "Tree.h"


class Village
{
public:
	Village(int treesCount);
	~Village();

	Tree* getTree(int index);

private:
	int treesCountl = 0;
	Tree** trees = nullptr;

};
