
#include <string>
#include <iostream>
#include <stdio.h>



#include "periodictable.h"

using namespace std;


PeriodicTable::PeriodicTable() {

    elements = new Element[4];

    Element Silicon = {"Silicon", "Si", 14, 1.9,  28.0855, 785.5};
    Element Indium  = {"Indium",  "In", 49, 1.78, 114.818, 558.3};
    Element Gallium = {"Gallium", "Ga", 31, 1.81, 67.723,  578.8};
    Element Arsenic = {"Arsenic", "As", 33, 2.18, 74.9216, 947.0};
    Element Aluminum = {"Aluminum", "Al", 13, 1.61, 26.98, 577.5};



    elements[0] = Silicon;
    elements[1] = Indium;
    elements[2] = Gallium;
    elements[3] = Arsenic;

    nelements = 4;

}

PeriodicTable::~PeriodicTable() {

}

int PeriodicTable::get_atomic_number(string symbol) {

    int anumber = -1;
    bool found = false;

    for (int i=0; i<nelements; i++) {

        if (elements[i].symbol == symbol){
            anumber = elements[i].atomic_number;
            found = true;
            break;
        }
    }

    if (!found) cerr<<"ERROR: Element '"<<symbol<<"' not found in periodic table\n";

    return anumber;
}

double PeriodicTable::get_electronegativity(string symbol) {

    double enegativity = -1.0;

    bool found = false;

    for (int i=0; i<nelements; i++) {

        if (elements[i].symbol == symbol){
            enegativity = elements[i].electronegativity;
            found = true;
            break;
        }
    }

    if (!found) cerr<<"ERROR: Element '"<<symbol<<"' not found in periodic table\n";


    return enegativity;
}
