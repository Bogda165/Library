#pragma once
#include "Book.hpp"
#include "Magazine.hpp"

class Library{
    string name;
    std::vector<Publication*> iventory;
public:
    Library();
    Library(string _name);
    
    void add(Publication* obj);
    void del(int index);
    
    void show()const;
    void find_n(string name)const;
    void sort_name();
    void sort_author();
};
