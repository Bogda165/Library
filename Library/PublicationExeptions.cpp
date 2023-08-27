//
//  PublicationExeptions.cpp
//  Library
//
//  Created by Богдан Коваль on 24.08.2023.
//

#include "PublicationExeptions.hpp"

PublicationExeptions::PublicationExeptions(string _name){
    name = _name;
}
BookExeption::BookExeption(string _name):PublicationExeptions(_name){
    
}

string BookExeption::Message()const{
    return string("Name error in publication with name" + name + "\n   BookExeption string lenght = 0\n");
    
}

YearExeption::YearExeption(string _name):PublicationExeptions(_name){
    
}

string YearExeption::Message()const{
    return string("Impossible to create publication - incorrect year of publication <" + name + ">\n");
}
