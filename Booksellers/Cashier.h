#pragma once
#include <vector>
#include "Book.h"
class Cashier
{
private:
	Inventory bookInventory;
	vector<Book> booksPurchased;
	double subtotal;
	double taxRate;
public:
	Cashier();
	~Cashier();
};

