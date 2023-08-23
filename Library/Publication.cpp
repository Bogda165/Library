#include "Publication.hpp"

Publication::Publication(){
    name = "None";
    author = "None";
    date = 2020;
}
Publication::Publication(string _name, string _author, int _date){
    name = _name;
    author = _author;
    date = _date;
}

void Publication::setName(string _name){
    name = _name;
}
void Publication::setAuthor(string _author){
    author = _author;
}
void Publication::setDate(int _date){
    date = _date;
}

string Publication::getName()const{
    return name;
}
string Publication::getAuthro()const{
    return author;
}
int Publication::getDate()const{
    return date;
}
