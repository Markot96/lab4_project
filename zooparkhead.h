#ifndef LABA4_ZOOPARK_H
#define LABA4_ZOOPARK_H
#include <string>
#include <iostream>
using namespace std;

class zoopark {

private:
    string  name; //����� ��������
    int visitors;  //������� ����������
    int animal_amount; //������� ������

protected:
    int income; //�����
    int established; //�� ����������

public:
    string country; //�����
    int ticket_price; //������� ������

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
