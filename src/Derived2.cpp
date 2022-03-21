//
// Created by Katherine Valverde on 17/3/2022.
//

#include "Derived2.h"
#include <iostream>
using namespace std;

Derived2::Derived2() {}
Derived2::~Derived2() {}
 void Derived2::do_something() {
     cout << "Derived2!!!" << endl;
}
string Derived2::toString() {
    stringstream ss;
    ss<< "Derivada 2"<<endl;
    return ss.str();

}