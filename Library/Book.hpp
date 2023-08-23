#pragma once
#include "PUblication.hpp"

class Book: public Publication{
    string summary;
public:
    void setSummary(string _summary);
    string getSummary()const;
    
    virtual void show()const override;
};
