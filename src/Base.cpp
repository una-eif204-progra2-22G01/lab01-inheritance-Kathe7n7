//
// Created by Katherine Valverde on 20/3/2022.
//

#include "Base.h"

Base::~Base() {
    cout<<"Destructor Class Base"<<endl;

}



string Base::toString(){
    stringstream ss;
    ss<<"Esta es la base"<<endl;

    return ss.str();

}

void Base::do_something(){
    cout<<"Base!!!" <<endl;
}

Base::Base() {}

