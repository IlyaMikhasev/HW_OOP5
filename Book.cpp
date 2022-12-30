#include "Book.h"

Book::Book(const std::string& title):_title(title) {}

const std::string& Book::GetTitle() const{
	return _title;
}

void Book::SetTitle(const std::string& title){
	_title = title;
}

const std::string Book::operator+(Book& other)const{
	std::string str;
	str = _title + other.GetTitle();
	return str;
}

const std::string& Book::operator-(const std::string& str){
	if (_title.size() < str.size()) {
		return this->GetTitle();
	}
	else {
		int ind = _title.rfind(str);
		return _title.substr(0,(_title.size()-str.size()));
	}
}

int Book::operator*(int number){
	return _title.size() * number;
}

std::string Book::operator/(int number){
	int in = _title.size() / number;
	return _title.substr(0,in);
}

bool Book::operator==(Book& other){
	return _title == other.GetTitle();
}

bool Book::operator!(){
	if (_title == "")
		return true;
	else
		return false;
}

void Book::operator+=(Book& other){
	_title += other.GetTitle();
}

const std::string& Book::operator<<(Book& other){
	_title = other.GetTitle();
	return _title;
}
