#pragma once
#include <string>
#include <iostream>
#include "PublicationExeptions.hpp"

using std::cout;
using std::endl;
using std::string;

class Publication{
protected:
    string name;
    string author;
    int date;
    
public:
    Publication();
    Publication(string _name, string _author, int _date);
    
    void setName(string _name);
    void setAuthor(string _author);
    void setDate(int _date);
    
    string getName()const;
    string getAuthro()const;
    int getDate()const;
    
    virtual string getType()const{
        return "Publication";
    }
    
    virtual void show()const = 0;
    
};
