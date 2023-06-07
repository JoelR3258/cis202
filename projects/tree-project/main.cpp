/*
//
// File: main.cpp
// Description: Rearrange the lines of code from the image called code_to_add.png to create a recursive print function which prints the data of all of the nodes.  Put this function in tree.cpp and declare it in tree.h
// Created: June 6, 2023
// Author: Joel Renteria
// mail: joelr3258@student.vvc.edu
//
*/


#include <iostream>
#include <string>
#include "tree.h"


int main()
{
   Tree t1("Anne");
   Tree t2("Peter");
   t1.add_subtree(t2);
   Tree t3("Zara");
   t1.add_subtree(t3);
   Tree t4("Savannah");
   t2.add_subtree(t4);
   std::cout << "Size: " << t1.size() << std::endl;
   t1.print();   

   return 0;
}