#pragma once
#include <iostream>
#include <string>
using namespace std;


class Person {
private:
    int index = 0;
    string name;
    int  edad = 0;
    char sexo = ' ';
    bool status = true;
    string message = "";

public:
    Person(string, int, char, bool);
    Person(bool, Document*, Document*);
    bool getStatus() { return status; };
    void setIndex(int index) { this->index = index; };
    void setMessage(string message) { this->message = message; };
    string getMessage() { return message; }
    int getIndex() { return index; };
    list<Document*> personal_documents;
    list<Document*>::iterator it = personal_documents.begin();



};
void operator <<(ostream& os, Document& doc1) {
    doc1.ImprimirDocumento();
}
void operator <<(ostream& os, Person& person) {
    for(auto element = person.personal_documents.begin();element != person.personal_documents.end(); ++element)
    os << **element;
}
Person::Person(string name, int age, char sexo, bool status) {
    this->name = name;
    this->edad = age;
    this->sexo = sexo;
    this->status = status;
 
}

Person::Person(bool _status, Document* passport, Document* id) {
    status = _status;
    personal_documents.push_back(passport);
    personal_documents.push_back(id);

}


