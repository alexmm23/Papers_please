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
    Person(bool, Document*, Document*);
    bool getStatus() { return status; };
    list<Document*> personal_documents;
    list<Document*>::iterator it = personal_documents.begin();
    //void setDocuments(Document* passport, Document* id);
};

Person::Person(string _name, int _age, char _sexo, bool _status) {
    name = _name;
    edad = _age;
    sexo = _sexo;
    status = _status;
}

Person::Person(bool _status, Document* passport, Document* id) {
    status = _status;
    personal_documents.push_back(passport);
    personal_documents.push_back(id);

}
//
//void Person::setDocuments(Document* passport, Document* id) {
//    personal_documents.push_back(passport);
//    personal_documents.push_back(id);
//
//}

