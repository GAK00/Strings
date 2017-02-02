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
    addLine();
    testSize();
    addLine();
    testAt();
    addLine();
    testEmpty();
    addLine();
    testSubString();
    addLine();
    testCompare();
    addLine();
    testBrakets();
}
void Controller :: testAt()
{
    cout << "at test"<<endl;
    int index = getSafeInt("Pleas enter an index to test at at");
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
    cout<<"substinrg test"<<endl;
    int index = getSafeInt("Please enter an index to test substring at");
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
    cout<<"testing brakets"<<endl;
    int index = getSafeInt("Please enter an index to test brakets at");
    cout<<test[index]<<endl;
}
bool Controller::testInt(int toTest)
{
    return toTest>=test.size();
}
int Controller::getSafeInt(string question)
{
    int index;
    cout <<question<<endl;
    cin>>index;
    while(testInt(index)){
        cout << "Please make sure your number is less than the string size"<<endl;
        cin>>index;}
    return index;
}
void Controller::addLine()
{
    cout<<endl;
}
