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
    list<Document> personal_documents;
    list<Document>::iterator it = personal_documents.begin();
    friend ostream& operator <<(ostream& os, Person& person);
    friend ostream& operator <<(ostream& os, list<Document> ld);
    friend ostream& operator <<(ostream& os, list<Person> lp);
};
ostream& operator << (ostream& os, list<Document> ll) {
    for (list<Document>::iterator it = ll.begin(); it != ll.end(); ++it)
        os << *it << "\n";

    return os;
}
ostream& operator << (ostream& os, Person& person) {
    os << person.personal_documents;

    return os;
}

ostream& operator << (ostream& os, list<Person> ll) {
    for (list<Person>::iterator it = ll.begin(); it != ll.end(); ++it)
        os << *it << "\n";

    return os;
}




Person::Person(string _name, int _age, char _sexo, bool _status) {
    name = _name;
    edad = _age;
    sexo = _sexo;
    status = _status;
}

