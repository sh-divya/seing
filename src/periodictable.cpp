
#include <string>
#include <iostream>
#include <stdio.h>



#include "periodictable.h"

using namespace std;


PeriodicTable::PeriodicTable() { //Data from https://chem.libretexts.org/Reference/Periodic_Table_of_the_Elements
    //Please use the 1st ionization energy values with caution. Highly recommended to double check values

    nelements = 73;

    elements = new Element[73];

    Element Hydrogen    = {"Hydrogen",   "H",   1, 2.2,   1.00794,  1312.0};  elements[0] = Hydrogen;
    Element Helium      = {"Helium",     "He",  2, 0.0,   4.002602, 2372.3};  elements[1] = Helium;
    Element Lithium     = {"Lithium",    "Li",  3, 0.95,  6.941,     520.2};  elements[2] = Lithium;
    Element Berylium    = {"Berylium",   "Be",  4, 1.57,  9.012182,  899.5};  elements[3] = Berylium;
    Element Boron       = {"Boron",      "B",   5, 2.04, 10.811,     800.6};  elements[4] = Boron;
    Element Carbon      = {"Carbon",     "C",   6, 2.55, 12.01,     1086.5};  elements[5] = Carbon;
    Element Nitrogen    = {"Nitrogen",   "N",   7, 3.04, 14.0067,   1402.3};  elements[6] = Nitrogen;
    Element Oxygen      = {"Oxygen",     "O",   8, 3.44, 15.9994,   1313.9};  elements[7] = Oxygen;
    Element Fluorine    = {"Fluorine",   "F",   9, 3.96, 18.998403, 1651.0};  elements[8] = Fluorine;
    Element Neon        = {"Neon",       "Ne", 10, 0.0,  20.1797,   2080.7};  elements[9] = Neon;
    Element Sodium      = {"Sodium",     "Na", 11, 0.93, 22.98976,   495.8};  elements[10] = Sodium;
    Element Magnesium   = {"Magnesium",  "Mg", 12, 1.31, 24.3050,    737.7};  elements[11] = Magnesium;
    Element Aluminum    = {"Aluminum",   "Al", 13, 1.61, 26.98,      577.5};  elements[12] = Aluminum;
    Element Silicon     = {"Silicon",    "Si", 14, 1.9,  28.0855,    785.5};  elements[13] = Silicon;
    Element Phosphorus  = {"Phosphorus", "P",  15, 2.19, 30.97696,  1011.8};  elements[14] = Phosphorus;
    Element Sulfur      = {"Sulfur",     "S",  16, 2.58, 32.065,     999.6};  elements[15] = Sulfur;
    Element Chlorine    = {"Chlorine",   "Cl", 17, 3.16, 35.453,    1251.2};  elements[16] = Chlorine;
    Element Argon       = {"Argon",      "Ar", 18, 0.0,  39.948,    1520.6};  elements[17] = Argon;
    Element Potassium   = {"Potassium",  "K",  19, 0.82, 39.0983,    418.8};  elements[18] = Potassium;
    Element Calcium     = {"Calcium",    "Ca", 20, 1.00,  40.078,    589.8};  elements[19] = Calcium;
    Element Scandium    = {"Scandium",   "Sc", 21, 1.36,  44.9591,   631.1};  elements[20] = Scandium;
    Element Titanium    = {"Titanium",   "Ti", 22, 1.54,  47.867,    658.8};  elements[21] = Titanium;
    Element Vanadium    = {"Vanadium",   "Va", 23, 1.63,  50.9415,   650.9};  elements[22] = Vanadium;
    Element Chromium    = {"Chromium",   "Cr", 24, 1.54,  47.867,    658.8};  elements[23] = Chromium;
    Element Manganese   = {"Manganese",  "Mn", 25, 1.55, 54.93804,   717.3};  elements[24] = Manganese;
    Element Iron        = {"Iron",       "Fe", 26, 1.83, 55.845,     762.5};  elements[25] = Iron;
    Element Cobalt      = {"Cobalt",     "Co", 27, 1.91, 58.93319,   760.4};  elements[26] = Cobalt;
    Element Nickel      = {"Nickel",     "Ni", 28, 1.88, 58.6934,    737.1};  elements[27] = Nickel;
    Element Copper      = {"Copper",     "Cu", 29, 1.9,  63.546,     745.5};  elements[28] = Copper;
    Element Zinc        = {"Zinc",       "Zn", 30, 1.65, 65.38,      906.4};  elements[29] = Zinc;
    Element Gallium     = {"Gallium",    "Ga", 31, 1.81, 67.723,     578.8};  elements[30] = Gallium;
    Element Germanium   = {"Germanium",  "Ge", 32, 2.01, 72.64,      762.0};  elements[31] = Germanium;
    Element Arsenic     = {"Arsenic",    "As", 33, 2.18, 74.9216,    947.0};  elements[32] = Arsenic;
    Element Selenium     = {"Selenium",  "Se", 34, 2.35, 78.96,      941.0};  elements[33] = Selenium;

    Element Indium      = {"Indium",     "In", 49, 1.78, 114.818,    558.3};  elements[34] = Indium;

    Element Tungsten    = {"Tungsten",   "W",  74, 2.36, 183.84,     770.0};  elements[35] = Tungsten;
    
    // Kit Ao: added in pyseing v0.1.8
    Element Bromine     = {"Bromine",    "Br", 35, 2.96, 79.90,     1139.9};  elements[36] = Bromine;
    Element Krypton     = {"Krypton",    "Kr", 36, 3.0,  83.80,     1350.0};  elements[37] = Krypton;
    Element Rubidium    = {"Rubidium",   "Rb", 37, 0.82, 85.468,     403.0};  elements[38] = Rubidium;
    Element Strontium   = {"Strontium",  "Sr", 38, 0.95, 87.62,      549.5};  elements[39] = Strontium;
    Element Yttrium     = {"Yttrium",    "Y",  39, 1.22, 88.90584,   599.8};  elements[40] = Yttrium;
    Element Zirconium   = {"Zirconium",  "Zr", 40, 1.33, 91.22,      640.1};  elements[41] = Zirconium;
    Element Niobium     = {"Niobium",    "Nb", 41, 1.6,  92.906,     652.1};  elements[42] = Niobium;
    Element Molybdenum  = {"Molybdenum", "Mo", 42, 2.16, 95.95,      684.3};  elements[43] = Molybdenum;
    Element Technetium  = {"Technetium", "Tc", 43, 1.9,  96.906,     702.4};  elements[44] = Technetium;
    Element Ruthenium   = {"Ruthenium",  "Ru", 44, 2.2,  101.1,      710.2};  elements[45] = Ruthenium;
    Element Rhodium     = {"Rhodium",    "Rh", 45, 2.28, 102.91,     719.7};  elements[46] = Rhodium;
    Element Palladium   = {"Palladium",  "Pd", 46, 2.2,  106.42,     804.4};  elements[47] = Palladium;
    Element Silver      = {"Silver",     "Ag", 47, 1.93, 107.87,     731.0};  elements[48] = Silver;
    Element Cadmium     = {"Cadmium",    "Cd", 48, 1.69, 112.41,     867.8};  elements[49] = Cadmium;
    Element Tin         = {"Tin",        "Sn", 50, 1.96, 118.71,     708.6};  elements[50] = Tin;
    Element Antimony    = {"Antimony",   "Sb", 51, 2.05, 121.76,     833.6};  elements[51] = Antimony;
    Element Tellurium   = {"Tellurium",  "Te", 52, 2.1,  127.6,      869.3};  elements[52] = Tellurium;
    Element Iodine      = {"Iodine",     "I",  53, 2.66, 126.9,     1008.4};  elements[53] = Iodine;
    Element Xenon       = {"Xenon",      "Xe", 54, 2.6,  131.29,    1170.4};  elements[54] = Xenon;
    Element Cesium      = {"Cesium",     "Cs", 55, 0.79, 132.91,     375.7};  elements[55] = Cesium;
    Element Barium      = {"Barium",     "Ba", 56, 0.89, 137.33,     502.9};  elements[56] = Barium;
    Element Hafnium     = {"Hafnium",    "Hf", 72, 1.3,  178.49,     658.5};  elements[57] = Hafnium;
    Element Tantalum    = {"Tantalum",   "Ta", 73, 1.5,  180.95,     761.3};  elements[58] = Tantalum;
    Element Rhenium     = {"Rhenium",    "Re", 75, 1.9,  186.21,     760.3};  elements[59] = Rhenium;
    Element Osmium      = {"Osmium",     "Os", 76, 2.2,  190.2,      839.4};  elements[60] = Osmium;
    Element Iridium     = {"Iridium",    "Ir", 77, 2.2,  192.22,     878.0};  elements[61] = Iridium;
    Element Platinum    = {"Platinum",   "Pt", 78, 2.28, 195.08,     870.0};  elements[62] = Platinum;
    Element Gold        = {"Gold",       "Au", 79, 2.54, 197.0,      890.2};  elements[63] = Gold;
    Element Mercury     = {"Mercury",    "Hg", 80, 2.0,  200.59,    1007.1};  elements[64] = Mercury;
    Element Thallium    = {"Thallium",   "Tl", 81, 1.62, 204.38,     589.3};  elements[65] = Thallium;
    Element Lead        = {"Lead",       "Pb", 82, 2.33, 207.0,      715.6};  elements[66] = Lead;
    Element Bismuth     = {"Bismuth",    "Bi", 83, 2.02, 208.98,     703.3};  elements[67] = Bismuth;
    Element Polonium    = {"Polonium",   "Po", 84, 2.0,  208.98,     812.1};  elements[68] = Polonium;
    Element Astatine    = {"Astatine",   "At", 85, 2.2,  209.987,    916.6};  elements[69] = Astatine;
    Element Radon       = {"Radon",      "Rn", 86, 2.2,  222.02,    1036.7};  elements[70] = Radon;
    Element Francium    = {"Francium",   "Fr", 87, 0.7,  223.02,     376.3};  elements[71] = Francium;
    Element Radium      = {"Radium",     "Ra", 88, 0.9,  225.03,     509.3};  elements[72] = Radium;
    // Element Rutherfordium - incomplete data
    // Element Dubnium - incomplete data
    // Element Seaborgium - incomplete data
    // Element Bohrium - incomplete data
    // Element Hassium - incomplete data
    // Element Meitnerium - incomplete data
    // Element Darmstadtium - incomplete data
    // Element Roentgenium - incomplete data
    // Element Cupernicium - incomplete data
    // Element Nihonium - incomplete data
    // Element Flerovium - incomplete data
    // Element Moscovium - incomplete data
    // Element Livermoreium - incomplete data
    // Element Tennessine - incomplete data
    // Element Oganesson - incomplete data
}

PeriodicTable::~PeriodicTable() {

}

vector<string> PeriodicTable::get_element_list() {
    vector<string> element_list;

    for (int i=0; i<nelements; i++) {

            element_list.push_back(elements[i].symbol);
        }
    return element_list;
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

