//
// Created by Chris Civetta on 10/21/19.
//

#include "Teacher.h"
using namespace std;
string Teacher::getFirst() {
    return first;
}

string Teacher::getLast() {
    return last;
}

int Teacher::getAge() {
    return age;
}

string Teacher::getAdress() {
    return adress;
}

string Teacher::getCity() {
    return city;
}

unsigned int Teacher::getPhone() {
    return phone;
}
Teacher::Teacher(){

}

Teacher::Teacher(string f, string l, int a, string ad, string c, long p) {
    first = f;
    last = l;
    age = a;
    adress = ad;
    city = c;
    phone = p;
}

Teacher::~Teacher() {

}

void Teacher::gradeStudent() {
    cout<<"Student graded"<<endl;
}

void Teacher::sitInClass() {
    cout<<"Sitting in front of the class"<<endl;
}
