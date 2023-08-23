//
//  Book.cpp
//  Library
//
//  Created by Богдан Коваль on 23.08.2023.
//

#include "Book.hpp"

Book::Book(){
    summary = "None";
}

Book::Book(string _name, string _author, int _date, string _summary):
    Publication(_name, _author, _date){
        summary = _summary;
}

void Book::setSummary(string _summary){
    summary = _summary;
}
string Book::getSummary()const{
    return summary;
}

void Book::show()const{
    cout << "------------Book------------\n";
    cout << "   Name : " << name << endl;
    cout << "   Author's name : " << author << endl;
    cout << "   Creation year : " << date << endl;
    cout << endl;
}
