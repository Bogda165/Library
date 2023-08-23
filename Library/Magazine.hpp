#pragma once
#include "Publication.hpp"
#include <vector>

class Magazine:public Publication{
    std::vector<string> articles;
public:
    Magazine();
    Magazine(string _name, string _author, int date);
    
    void add(string article);
    void del(int index);
    
    std::vector<string> get()const;
    
    virtual void show()const override;
};
