//
// Created by Katherine Valverde on 17/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include <iostream>
using namespace std;

#include "Base.h"


class Derived1{

public:
    Derived1();
    ~Derived1();
    virtual void do_something();


    virtual string toString();


};

#endif //LAB01_INHERITANCE_DERIVED1_H
