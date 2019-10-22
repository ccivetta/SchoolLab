//
// Created by Chris Civetta on 10/21/19.
//
#include <iostream>
#ifndef SCHOOLLAB_STUDENT_H
#define SCHOOLLAB_STUDENT_H
using namespace std;

class Student {
private:
    string first;
    string last;
    int age;
    string adress;
    string city;
    long phone;
public:
    string getFirst();
    string getLast();
    int getAge();
    string getAdress();
    string getCity();
    unsigned int getPhone();
    Student();
    Student(string, string, int, string, string, long);
    void sitInClass();
};


#endif //SCHOOLLAB_STUDENT_H
