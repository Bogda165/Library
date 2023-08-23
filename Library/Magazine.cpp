//
//  Magazine.cpp
//  Library
//
//  Created by Богдан Коваль on 23.08.2023.
//

#include "Magazine.hpp"

Magazine::Magazine(){
    
}
Magazine::Magazine(string _name, string _author, int _date):
Publication(_name, _author, _date){
    
}


void Magazine::add(string article){
    articles.push_back(article);
}
void Magazine::del(int index){
    articles.erase(articles.begin() + index);
}
std::vector<string> Magazine::get()const{
    return articles;
}

void Magazine::show()const{
    cout << "----------Magazine----------\n";
    cout << "   Name : " << name << endl;
    cout << "   Author's name : " << author << endl;
    cout << "   Creation year : " << date << endl;
    cout << "   List of articles : " << endl << endl;
    for(int i = 0; i < articles.size(); i++){
        cout << "       Article number " << i + 1 << " :\n";
        cout << "         " << articles[i] << endl;
    }
    cout << endl;
}
