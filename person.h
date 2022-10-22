#pragma once
#include <iostream>
#include <string>
using namespace std;


class Person {
private:
    string name;
    int  edad = 0;
    char sexo = ' ';
    bool status = true;//la razon de por qué no paso el usuario, en caso de que aplique 

public:
    Person(string, int, char, bool);
    Person(bool);
    bool getStatus() { return status; };
    list<Document*> personal_documents;
    list<Document*>::iterator it = personal_documents.begin();
};
ostream& operator <<(ostream& os, Person person1) {

    return os;
}

Person::Person(string _name, int _age, char _sexo, bool _status) {
    name = _name;
    edad = _age;
    sexo = _sexo;
    status = _status;
}

Person::Person(bool _status) {
    status = _status;

}

