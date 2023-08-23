#pragma once
#include "Book.hpp"
#include "Magazine.hpp"
#include <algorithm>

class Library{
    string name;
    std::vector<Publication*> inventory;
public:
    Library();
    Library(string _name);
    
    void add(Publication* obj);
    void del(int index);
    
    void show()const;
    Publication* find_n(string _name)const;
    void sort_name();
    void sort_author();
    void sort_date();
};
