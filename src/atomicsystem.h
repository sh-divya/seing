#ifndef ATOMICSYSTEM_H
#define ATOMICSYSTEM_H

#include <string>
#include <vector>

#include "atom.h"

using namespace std;

class AtomicSystem {

    int natoms;
    Atom *atoms;
    double xmin, ymin, zmin;
    double xmax, ymax, zmax;
    double skin;
    bool xpbc, ypbc, zpbc;

    public:
        AtomicSystem(void);
        AtomicSystem(string,bool,bool,bool,double);
        ~AtomicSystem(void);

        void build_from_file(string);
        void set_box_size(double, double, double, double, double, double);

        double get_square_distance(Atom,Atom);
        double get_square_distance(int,int);
        double check_square_distance(Atom A, Atom B); //For debugging only

        vector<string> get_atom_types(); //returns atom types as a list ordered by atomic numbers

        Atom get_atom(int);
        int get_n_atoms();

        double get_xsize();
        double get_ysize();
        double get_zsize();

        double get_xmin();
        double get_ymin();
        double get_zmin();

        double get_xmax();
        double get_ymax();
        double get_zmax();

        double get_xpbc();
        double get_ypbc();
        double get_zpbc();

   
};

#endif