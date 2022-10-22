

#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include "documents.h"
#include "person.h"
#include "players.h"
using namespace std;

void printlistpeople(list<Person*>& listper) {
    for (list<Person*>::iterator itper = listper.begin(); itper != listper.end(); ++itper) {
        Person* p1 = *itper;
        for (list<Document*>::iterator it = p1->personal_documents.begin(); it != p1->personal_documents.end(); ++it)
        {
            cout << **it;
            cout << endl;
        }
    }


}

int main()
{
    char respuesta = 'y';
    bool _aStatus;
    int _seJuega = 1;
    Player player1(0);

    Document* passport1 = new Passport("ADRIAN ALEJANDRO MONTES MENDOZA", "MOMA030123HJCNNDA3", "23-01-2003", "25-DIC-2023", "AAMM", 'M', "Mexicana", "25-02-2005", 128947);
    Document* id1 = new ID("ALEX", "micurp", "23-01-2003", "25-dic-2023", "AAMM", 'M', "LAS VICTORIAS", "ASLJKDAOISDJ81W7383");
    Document* passport2 = new Passport("Diego", "SCURP", "06-06-2010", "2030", "DDMM", 'M', "MEXICANA", "25-02-2018", 12131235);
    Document* id2 = new ID("Diego", "SCURP", "06-06-2010", "2030", "DDMM", 'M', "las victorias", "faskjdfhsa744hsd");
    while (true) {

        if (_seJuega != 1) { break; }


            while (_seJuega == 1) {


                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "----------------------PAPERS PLEASE----------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "--------------------BIENVENIDO AGENTE--------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "---------------------------------------------------------" << endl;
                system("pause");
                system("cls");
                cout << endl << endl << endl << endl;
                cout << "Presiona 1 para comenzar a jugar..." << endl;
                cout << "Presiona 2 para salir..." << endl;
                cin >> _seJuega;

                if (_seJuega != 1) {
                    break;
                }

                system("cls");

                list<Person*> listPeople;
                Person* fp = new Person(true);
                Person* sp = new Person(false);

                listPeople.push_back(fp);
                listPeople.push_back(sp);

                fp->personal_documents.push_back(passport1);
                fp->personal_documents.push_back(id1);
                sp->personal_documents.push_back(passport2);
                sp->personal_documents.push_back(id2);
               
                for (list<Person*>::iterator itper = listPeople.begin(); itper != listPeople.end(); ++itper) {
                    Person* p1 = *itper;
                    for (list<Document*>::iterator it = p1->personal_documents.begin(); it != p1->personal_documents.end(); ++it)
                    {
                        cout << **it;                   
                        cout << endl;

                    }
                    cout << "DEJAR PASAR [Y] - DETENER[N]" << endl;
                    cin >> respuesta;
                    if (respuesta == 'y' || respuesta == 'Y')
                        _aStatus = true; else _aStatus = false;

                    if (_aStatus == p1->getStatus()) ++player1; else --player1;
                    system("cls");
                }

                cout << "Puntuacion final..." << endl;
                cout << player1.getScore() << endl;
                system("pause");
                system("cls");

                delete fp;
                delete sp;
                player1.setScore(0);

            }


    }
    delete passport1;
    delete id1;
    delete passport2;
    delete id2;
}


