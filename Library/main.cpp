//
//  main.cpp
//  Library
//
//  Created by Богдан Коваль on 23.08.2023.
//
#include "Publication.hpp"
#include <iostream>
#include "Library.hpp"


int main() {
    Publication* harryPotter = new Book ("Harry Potter", "Johan Rowling", 2013, "Summary text...");
    Publication* math2 = new Book ("Geometry 7", "Aleksandr Krijanovsky", 2017, "Summary text...");
    Publication* NY;
    Magazine news1("The New York Times", "Joseph Kahn", 2023);
    
    news1.add("Death of Tina Turner");
    news1.add("War in Ukraine");
    news1.add("Wild enviroment");
    
    Publication* BBC;
    Magazine news2("BBC News", "Sara Pith", 2023);
    news2.add("The mystery of what cause ALS");
    news2.add("War in Ukraine");
    news2.add("The top 7 bar in New York City");
    news2.add("How putin's long freindship awith prigozhin turned ugly");
    
    NY = &news1;
    BBC = &news2;
    Publication* math = new Book ("Geometry 9", "Aleksandr Krijanovsky", 2018, "Summary text...");
    //Library
    Library Congres("The Library Of Congress");
    Congres.add(harryPotter);
    Congres.add(math);
    Congres.add(NY);
    Congres.add(BBC);
    Congres.add(math2);
    
    Congres.show();
    
    cout << "------------Find------------\n";
    cout << "Publication with Name \"BBC News\":\n";
    Congres.find_n("BBC News")->show();
    cout << "--------Sort_by_name--------\n\n";
    Congres.sort_name();
    Congres.show();
    cout << "--------Sort_by_author--------\n\n";
    Congres.sort_author();
    Congres.show();
    cout << "--------Sort_by_date--------\n\n";
    Congres.sort_name();
    Congres.show();
    // EXEPTIONS
    cout << "----------Exeption----------\n\n";
    cout << endl;
    Book bookexeption("", "Yurii Gorlis Gorskyi", 1934, "");
    Book bookexeption2("Cold ravine", "", 1934, "");
    try{
        bookexeption.show();
    }catch(PublicationExeptions* err){
        cout << err->Message();
    }
    try{
        bookexeption2.show();
    }catch(PublicationExeptions* err){
        cout << err->Message();
    }

    try{
        Book YearExeption("Cold ravnine", "Yurii Gorlis Gorskyi", -1934 , "");
    }catch(PublicationExeptions* err){
        cout << err->Message();
    }
    
    return 0;
}
