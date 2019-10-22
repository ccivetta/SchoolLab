//
// Created by Chris Civetta on 10/21/19.
//

#include "Student.h"
using namespace std;
string Student::getFirst() {
    return first;
}

string Student::getLast() {
    return last;
}

int Student::getAge() {
    return age;
}

string Student::getAdress() {
    return adress;
}

string Student::getCity() {
    return city;
}

unsigned int Student::getPhone() {
    return phone;
}

Student::Student() {

}

Student::Student(string f, string l, int a, string ad, string c, long p) {
first = f;
last = l;
age = a;
adress = ad;
city = c;
phone = p;
}

void Student::sitInClass() {
    cout<<"Sitting in theatre"<<endl;
}
