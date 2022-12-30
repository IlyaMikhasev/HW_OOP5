#pragma once
#include <iostream>
#include <String>
class Book
{
public:
	Book(const std::string& title);
	const std::string& GetTitle()const;
	void SetTitle(const std::string& title);
	const std::string operator+(Book& other)const;
	const std::string& operator-(const std::string& str);
	int operator*(int number);
	std::string operator/(int number);
	bool operator==(Book& other);
	bool operator!();
	void operator+=(Book& other);
	const std::string& operator<<(Book & other);
	friend std::ostream& operator<<(std::ostream& os, Book& other) {
		os << other.GetTitle();
		return os;
	}

private:
	std::string _title;
};

