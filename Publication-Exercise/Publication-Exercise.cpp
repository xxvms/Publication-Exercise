// Publication-Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

class Publication
{
	std::string title;
	double price;
	double sales[3];


public:
	Publication() : title("n/a"), price(0.0), sales{0}
	{}

	void getData()
	{
		std::cout << "Please provide title: ";
		std::cin >> title;
		std::cout << "Please provide $$: ";
		std::cin >> price;
		std::cout << "Sales in 1st Month: ";
		std::cin >> sales[0];
		std::cout << "Sales in 2nd Month: ";
		std::cin >> sales[1];
		std::cout << "Sales in 3rd Month: ";
		std::cin >> sales[2];
	}
	void putData()
	{
		std::cout << "Book title: " << title << " Book cost: $" << price << std::endl;
		std::cout << "sales in month 1,2 and 3: " << sales[0] << ", " << sales[1] << ", " << sales[2] << std::endl;
	}
};
class Book : public Publication
{
	int pageCount;

public:
	Book() : pageCount(0)
	{}
	void getData()
	{
		std::cout << "Please provide page count: ";
		std::cin >> pageCount;
	}
	void putData()
	{
		std::cout << "Number of pages: " << pageCount << std::endl;
	}
};
class Tape : public Publication
{
	double tapeTime;
public:
	Tape() : tapeTime(0.0)
	{}
	void getData()
	{
		std::cout << "How long is the tape in minutes: ";
		std::cin >> tapeTime;
	}
	void putData()
	{
		std::cout << "Lenght of the tape in minutes: " << tapeTime << std::endl;
	}
};


int main()
{

	std::cout << "Please provide" << std::endl;
	Book bk1;
	Tape tp1;

	std::cout << "Book: " << std::endl;
	bk1.Publication::getData();
	bk1.getData();

	std::cout << "Tape: " << std::endl;
	tp1.Publication::getData();
	tp1.getData();

	std::cout << "This is what you have done!!" << std::endl;

	std::cout << "For book " << std::endl;
	bk1.Publication::putData();
	bk1.putData();

	std::cout << "For tape " << std::endl;

	tp1.Publication::putData();
	tp1.putData();


	system("pause");
    return 0;
}

