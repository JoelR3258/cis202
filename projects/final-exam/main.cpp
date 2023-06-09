/*
//
// File: main.cpp
// Description: A program that will give mountain details which will included the following: name, country, elevation in ft and meters.
// Created: June 8, 2023
// Author: Joel Renteria
// mail: joelr3258@student.vvc.edu
//
*/

#include<iostream>
#include<iomanip>
#include "Mountain.h"
using namespace std;

int main(){
    Mountain mountains[7];
    mountains[0] =  Mountain("Chimborazo", "Ecudador", 20549);
    mountains[1] =  Mountain("Matterhorn", "Switzeland", 14692);
    mountains[2] =  Mountain("Olympus", "Geece", 9573);
    mountains[3] =  Mountain("Everest", "Nepal", 290929);
    mountains[4] =  Mountain("Adirondacks", " United States", 5344);
    mountains[5] =  Mountain("Blue Ridge", " United States", 6684);
    mountains[6] =  Mountain("Zugpitze", "Switzerland", 9719);
    cout << setw(13) << "Mountain Name" << setw(13) << "Country" << setw(20) << "Elevation (ft)" << setw(20) << "Elevation (meters)" << endl;
    cout << endl;
    for (Mountain mountain : mountains){
        cout<<setw(13)<<mountain.getName()<<setw(13) << mountain.getCountry()<<setw(20)<<mountain.getElevation()<<setw(20)<<mountain.toMeters(mountain.getElevation())<<endl;
    }
    int smallest = minElevation(mountains); 
    cout << endl;
    cout<<("smallest elevation: ");
    cout<<"Name:"<< mountains[smallest].getName();
    cout<<" Country: "<< mountains[smallest].getCountry();
    cout<<" Elevation (ft): "<< mountains[smallest].getElevation();
}