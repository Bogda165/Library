#pragma once
#include "Publication.hpp"

class Book: public Publication{
    string summary;
public:
    Book();
    Book(string _name, string _author, int _date, string _summary);
    
    void setSummary(string _summary);
    string getSummary()const;
    virtual string getType()const override{
        return "Publication";
    }
    
    virtual void show()const override;
};
