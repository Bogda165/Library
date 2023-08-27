#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class PublicationExeptions{
protected:
    string name;
public:
    PublicationExeptions(string _name);
    virtual string Message()const = 0;
};


class BookExeption:public PublicationExeptions{
public:
    BookExeption(string _name);
    virtual string Message()const;
};

class YearExeption:public PublicationExeptions{
public:
    YearExeption(string _name);
    virtual string Message()const;
};
