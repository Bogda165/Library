//
//  Library.cpp
//  Library
//
//  Created by Богдан Коваль on 23.08.2023.
//

#include "Library.hpp"

Library::Library(){
    name = "None";
}
Library::Library(string _name){
    name = _name;
}

void Library::add(Publication* obj){
    inventory.push_back(obj);
}

void Library::del(int index){
    inventory.erase(inventory.begin() + index);
}

Publication* Library::find_n(string _name)const{
    for(int i = 0; i < inventory.size(); i++){
        if(_name == inventory[i]->getName()){
            return inventory[i];
        }
    }
    return inventory[0];
}

void Library::sort_name(){
    sort(inventory.begin(), inventory.end(), [](Publication* obj1, Publication* obj2){
        return obj1->getName() > obj2->getName();
    });
}

void Library::sort_date(){
    sort(inventory.begin(), inventory.end(), [](Publication * obj1, Publication* obj2){
        return obj1->getDate() > obj2->getDate();
    });
}

void Library::sort_author(){
    sort(inventory.begin(), inventory.end(), [](Publication* obj1, Publication* obj2){
        return obj1->getAuthro() > obj2->getAuthro();
    });
}


void Library::show()const{
    cout << "----------Library-----------\n";
    cout << "Name : " << name;
    cout << endl;
    for(int i = 0; i < inventory.size(); i++){
        inventory[i]->show();
    }
    cout << endl;
}
