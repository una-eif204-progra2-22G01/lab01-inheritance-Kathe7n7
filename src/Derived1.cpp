//
// Created by Nuevo on 17/3/2022.
//

#include "Derived1.h"


Derived1::Derived1() {

}



void Derived1::do_something() {
    cout << "Derived1!!!" << endl;

}

string Derived1::toString() {
    stringstream ss;
    ss<< "Derivada 1"<<endl;

    return ss.str();
}

Derived1::~Derived1() {

}

