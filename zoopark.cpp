#include "zooparkhead.h"
using namespace std;

zoopark::zoopark(){
    name;
    visitors;
    animal_amount;
    income;
    established;
}

zoopark:: zoopark(string zooparkname, int zooparkvisitors, int zooparkanimal_amount, int zooparkincome, int zooparkestablished){
    name = zooparkname;
    visitors = zooparkvisitors;
    animal_amount = zooparkanimal_amount;
    income = zooparkincome;
    established = zooparkestablished;
}
    string zoopark::getName(){
    return name;
}
    int zoopark::getVisitors(){
    return visitors;
}
    int zoopark::getAnimal_amount() {
    return animal_amount;
}
    int zoopark::getIncome() {
    return income;
}
    int zoopark::getEstablished() {
    return established;
}
    void zoopark::get_inf() {
        cout << "\nYour zoo name is: " <<"\""<<getName() << "\"" << ", amount of visitors is: " << getVisitors() << " million, amount of animals is: " << getAnimal_amount() << " species, income is: " << getIncome() << " million $, established in: " << getEstablished() << " year. \n";
    }
    zoopark::~zoopark() {
    cout <<"Destructed"<< endl;
}
