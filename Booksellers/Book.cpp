#include "Book.h"


Book::Book()
{
}

Book::Book()
{
  
}

void Book::setISBN(string i)
{
  isbn=i;
}

void Book::setTitle(string t)
{
  title=t;
}

void Book::setAuthor(string a)
{
  author=a;
}

void Book::setPublisher(string p)
{
  publisher=p;
}

void Book::setDate(string d)
{
  date=d;
}

void Book::setQuantity(string q)
{
  quantity=q;
}

void Book::setCost(string c)
{
  cost=c;
}

void Book::setPrice(string p)
{
  price=p;
}

string Book:: getISBN() const
{
  return isbn;
}

string Book:: getTitle() const
{
  return title;
}

string Book:: getAuthor() const
{
  return author;
}

string Book:: getPublisher() const
{
  return publisher;
}

string Book:: getDate() const
{
  return date;
}

int Book:: getQuantity() const
{
  return quantity;
}

double Book:: getCost() const
{
  return cost;
}

double Book:: getPrice() const
{
  return price;
}


void Book:: display()
{
  //The display function
}

//operator +=
//operator -=


Book::~Book()
{
}

