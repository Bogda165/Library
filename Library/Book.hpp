#pragma once
#include "PUblication.hpp"

class Book: public Publication{
    string summary;
public:
    Book();
    Book(string _name, string _author, int _date, string _summary);
    
    void setSummary(string _summary);
    string getSummary()const;
    
    virtual void show()const override;
};
