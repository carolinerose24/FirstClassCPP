//
//  Controller.cpp
//  FirstClassCPP
//
//  Created by Jarman, Caroline on 1/24/19.
//  Copyright © 2019 ctec. All rights reserved.
//

//COMMAND SHIFT K --> product, clean build folder

#include "Controller.hpp"


Controller :: Controller()
{//class name, scope res, constructor
    this->specialNumber = 3495545; //use the THIS selector to talk to the current object USES A POINTER (java - called a reference to the current object)
}

void Controller :: start()
{//return type class name, scope res, method name
    cout << "This is the start method." << endl;//END L --> end the line after this
    cout << "banananananananananananana " ; //THIS WILL NOT MAKE A NEW LINE
    cout << "Here is the class number: " << specialNumber << ". Why are things the way they are?" << endl;
    
    string input;
    cout << "Type your name" << endl;
 //   cin >> input; //CIN ONLY GRABS THE first WORD
    
    //to get a whole line
    getline(cin,input);
    cout << input << endl;
    
    cout << "Program exit code comes before the input stream--> slow down methods" << endl;
    
    cout << "Type in a number" << endl;
    cin >> specialNumber;
    cout << "Here is the number your typed: " << specialNumber << endl;
    
    //JAVA-- String[]myArray = new String [7];
    //C++ -- string myArray [7]; //--NEED to say how big it is, cannot resize --> string arrays don't know where they end
                        ///no index out of bounds exception
        //C++ no primitives/objects --> just ALL TYPES
    
    //Create a template called Node -->( inside TYPE, get, set ) that can talk to another node w/ pointer called Next(for all of them)
                        //nllptr = null pointer (exception) --> means you are done, don't touch it though HOW YOU STOP
}
