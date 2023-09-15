#include "people.h"
People::People(){
    name = "bob";
    height = 6;
}
People::People(string n, int h){
    name = n;
    height = h;
}
People::People(const People& rhs){
    name = rhs.name;
    height = rhs.height;

}
int People::operator>(const People& extra){
    return height > extra.height;
}
string People::getName(){
    return name;
}
int People::getHeight(){
    return height;
}
void People::setName(string na){
    name = na;
}
void People::setHeight(int hgt){
    height = hgt;
}