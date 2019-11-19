#ifndef LABA4_ZOOPARK_H
#define LABA4_ZOOPARK_H
#include <string>
#include <iostream>
using namespace std;

class zoopark {

private:
    string  name; //назва зоопарку
    int visitors;  //кількість відвідувачів
    int animal_amount; //кількість тварин

protected:
    int income; //дохід
    int established; //рік заснування

public:
    string country; //країна
    int ticket_price; //вартість квитка

    zoopark();

    zoopark(string zooparkname, int zooparkvisitors, int zooparkanimal_amount, int zooparkincome, int zooparkestablished);

    string getName();

    int getVisitors();

    int getAnimal_amount();

    int getIncome();

    int getEstablished();

    void get_inf();

    ~zoopark();
};

#endif
