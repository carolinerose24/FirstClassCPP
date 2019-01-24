//
//  Runner.cpp
//  FirstClassCPP
//
//  Created by Jarman, Caroline on 1/24/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Controller.hpp"

int main()
{               //Regular format
//    Controller myFirstController;
//    myFirstController.start();  //do not use new when creating a local object/instance (use only with pointers (*))

    //Pointer version of ^^^ --This is how you use a pointer (it can exist outside the stack-current line/line/line)
            //heap: want to keep things off the stack all the time w/o throwing away
    //allocate memory of the heap by using NEW: pointer = a reference
    Controller * myPointer = new Controller();
    myPointer->start();
    
    
    return 0;
}




//Stack --refreshed a lot -- a data structure
    //Line by line, use then DONE
    //leaves/not relevent after the squiggles --must remove toop line to get ot line below it
        //includes variables inside loops, methods, constructors
//Heap ->gets NEW, should have a DELETE
    //Dynamic Allocation
    //Available until destroyed (by calling delete)
        //Don't delete-> data loss, corruption, memory leak

