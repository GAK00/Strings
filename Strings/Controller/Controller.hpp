//
//  Controller.hpp
//  Strings
//
//  Created by Kunz, Geran on 2/2/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include <string>

using namespace std;
using std::string;
class Controller{
private:
    string test;
    void testSize();
    void testAt();
    void testEmpty();
    void testSubString();
    void testCompare();
    void testBrakets();
    bool testInt(int test);
    int getSafeInt(string question);
    void addLine();
    
public:
    void start();
    Controller();
};
#endif /* Controller_hpp */
