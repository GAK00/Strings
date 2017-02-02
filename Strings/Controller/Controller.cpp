//
//  Controller.cpp
//  Strings
//
//  Created by Kunz, Geran on 2/2/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>
#include <sstream>

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
    cout<<"testing at at an index of: "<<index<<endl;
    printResult(charToString(test.at(index)));
}

void Controller :: testSize()
{
    cout<<"size test"<<endl;
    cout<<"testing size of: "<<test<<endl;
    printResult(to_string(test.size()));
}
void Controller:: testEmpty()
{
    cout<<"empty test"<<endl;
    cout<<"testing empty on: " << test<<endl;
    string result = "false";
    if(test.empty())
    {
        result = "true";
    }
    printResult(result);
}
void Controller :: testSubString()
{
    cout<<"substinrg test"<<endl;
    int index = getSafeInt("Please enter an index to test substring at");
    cout<<"testing substring at an index of: "<<index<<endl;
    printResult(test.substr(index));
}
void Controller :: testCompare()
{
    cout<<"test compare"<<endl<<"please enter a string to compare against";
    string compare;
    cin>>compare;
    cout<<"testing compare with a string called: "<<compare<<endl;
    printResult(to_string(test.compare(compare)));
}
void Controller:: testBrakets()
{
    cout<<"testing brakets"<<endl;
    int index = getSafeInt("Please enter an index to test brakets at");
    printResult(charToString(test[index]));
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
void Controller::printResult(string result)
{
    cout <<"Result: " <<result<<endl;
}
string Controller::charToString(char charecter)
{
    string target;
    stringstream stream;
    stream << charecter;
    stream>>target;
    
    return target;
}
