#include "cargo.h"
Cargo::Cargo(){
    coal = "";
    hay = "";
    weight = 0;
}
Cargo::Cargo(string c, string h, int w){
    coal = c;
    hay = h;
    weight = w;
}
Cargo::Cargo(const Cargo& rhs){
    coal = rhs.coal;
    hay = rhs.hay;
    weight = rhs.weight;
}
int Cargo::operator+(int extra){
    int total;
    weight + extra;
    return total;
}
string Cargo::getCoal(){
    return coal;
}
string Cargo::getHay(){
    return hay;
}
int Cargo::getWeight(){
    return weight;
}

void Cargo::setCoal(string co){
    coal = co;
}
void Cargo::setHay(string ha){
    hay = ha;
}
void Cargo::setWeight(int wgt){
    weight = wgt;
}