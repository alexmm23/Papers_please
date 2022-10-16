

#include <iostream>
#include <string>
#include <list>
#include "document.h"
#include "person.h"
#include "id.h"
#include "passport.h"
using namespace std;

void print_list(std::list<Document>& ll) {
    for (std::list<Document>::iterator it = ll.begin(); it != ll.end(); ++it)
        cout << *it << "\n";
        cout << std::endl;
}

void show_people(list<Person>& ll) {
    for (list<Person>::iterator it = ll.begin(); it != ll.end(); it++)
        cout << *it << endl;

}

int main()
{
    list<Person> People;
    
    Person person1("Alex", 19, 'm', true);
    Person person2("Diego", 12, 'm', false);
    Person person3("Carol", 42, 'f', false);
    Person person4("Adrian", 43, 'm', true);

    People.push_front(person1);
    People.push_front(person2);
    People.push_front(person3);
    People.push_front(person4);


    Document* passport1 = new Passport("Alex", "MICURP", "23-01-2003", "25-DIC-2023", "AAMM", 'M', "Mexicana", "25-02-2005", 128947);
    Document* Id1 = new ID("Alex", "micurp", "23-01-2003", "25-dic-2023", "AAMM", 'M', "LAS VICTORIAS", "ASLJKDAOISDJ81W7383");
    Document* passport2 = new Passport("Diego", "SCURP", "06-06-2010", "2030", "DDMM", 'M', "MEXICANA", "25-02-2018", 12131235);
    Document* id2 = new ID("Diego", "SCURP", "06-06-2010", "2030", "DDMM", 'M', "las victorias", "faskjdfhsa744hsd");


    person1.personal_documents.push_front(*passport1);
    person1.personal_documents.push_front(*Id1);
    person2.personal_documents.push_front(*passport2);
    person2.personal_documents.push_front(*id2);

    //char respuesta = ' ';
    ////print_list(person1.personal_documents);
    //cin >> respuesta;

    cout << "Imprimiendo persona..." << endl;
    cout << person1;
    



    system("pause");
    system("cls");

    //print_list(person2.personal_documents);
    //cin >> respuesta;



    delete passport1;
    delete passport2;
    delete Id1;
    delete id2;

    

}

