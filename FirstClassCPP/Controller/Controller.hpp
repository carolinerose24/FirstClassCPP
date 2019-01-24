//
//  Controller.hpp --> like interface of java--> header file defines hwat you need to put into your code
//  FirstClassCPP
//
//  Created by Jarman, Caroline on 1/24/19.
//  Copyright © 2019 ctec. All rights reserved.
//

//hpp read before cpp
#ifndef Controller_hpp //NO SEMI-COLONS --> read before compiler (linker error)
#define Controller_hpp

#include <iostream> //the c++ import don't use studi.h
using namespace std; //allows access of keywords

class Controller //Classes are ONLY in headers--> header files only gets prototypes/headers for methods, declarations
{//define variables, methods, data members, constructors //#inslude headers
private:
    int specialNumber;
//THEN protected stuff -visible to subclasses
public:
    Controller();
    void start();

};

#endif /* Controller_hpp */

