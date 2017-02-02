//
//  Controller.cpp
//  Strings
//
//  Created by Kunz, Geran on 2/2/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

Controller :: Controller()
{
    test = "";
    while(test.size()<5){
    cout<<"please enter a string to test that is longer than 5 charecter"<<endl;
        getline(cin,test);}
}
void Controller :: start()
{
    cout<<"testing string "<<test<<endl;
    testSize();
    testAt();
    testEmpty();
    testSubString();
    testCompare();
    testBrakets();
}
void Controller :: testAt()
{
    cout << "at test"<<endl<<"please enter an index to test at at"<<endl;
    int index;
    cin>>index;
    cout << test.at(index)<<endl;
}

void Controller :: testSize()
{
    cout<<"size test"<<endl;
    cout << test.size() << endl;
}
void Controller:: testEmpty()
{
    cout<<"empty test"<<endl;
    cout<<test.empty()<<endl;
}
void Controller :: testSubString()
{
    cout<<"substinrg test"<<endl<<"please enter a index to test"<<endl;
    int index;
    cin>>index;
    cout<<"testing substring at index of"<<index<<endl;
    cout<<test.substr(4)<<endl;
}
void Controller :: testCompare()
{
    cout<<"test compare"<<endl<<"please enter a string to compare against";
    string compare;
    cin>>compare;
    cout<<test.compare(compare)<<endl;
}
void Controller:: testBrakets()
{
    cout<<"testing brakets"<<endl<<"please enter a index to test the brakets at";
    int index;
    cin>>index;
    cout<<test[index]<<endl;
}
