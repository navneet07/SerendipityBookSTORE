#pragma once
#include <string>
using namespace std;

class Book
{
private:
	string isbn;
	string title;
	string author;
	string publisher;
	string date;
	int quantity;
	double cost;
	double price;
public:
	Book();
	Book(string, string, string, string, string, int, double, double);
	void setISBN(string);
	void setTitle(string);
	void setAuthor(string);
	void setPublisher(string);
	void setDate(string);
	void setQuantity(int);
	void setCost(double);
	void setPrice(double);
	string getISBN() const;
	string getTitle() const;
	string getAuthor() const;
	string getPublisher() const;
	string getDate() const;
	int getQuantity() const;
	double getCost() const;
	double getPrice() const;
	void display() const;
	void operator += (int);
	void operator -= (int);
};


