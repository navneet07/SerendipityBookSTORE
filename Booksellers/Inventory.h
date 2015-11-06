#pragma once
#include <vector>
#include <fstream>
#include "Book.h"
using namespace std;

class Inventory
{
private:
	fstream inventoryFile;
	vector<Book> books;
public:
	Inventory(string);
	~Inventory();

};

