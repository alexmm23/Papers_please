

#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include "documents.h"
#include "person.h"
#include "players.h"
#include <conio.h>
using namespace std;


int main()
{
    char respuesta = 'y';
    bool _answerStatus;
    char _seJuega = '1';
    Player player1(0);
    list<Person*> listPeople;

    Document* passport1 = new Passport("ADRIAN ALEJANDRO MONTES MENDOZA", "MOMA030123HJCNNDA3", "23-01-2003", "25-DIC-2023", "AAMM", 'M', "Mexicana", "25-02-2005", 128947);
    Document* id1 = new ID("ARMANDO ALEJANDRO MONTES MENDEZ", "MOME030123HJCNNDA3", "23-01-2003", "25-dic-2023", "AAMM", 'M', "LAS VICTORIAS", "ASLJKDAOISDJ81W7383");
    Document* passport2 = new Passport("DIEGO MIGUEL JIMENEZ JIMENEZ", "JIJI060610JFHDKDN2", "06-06-2010", "2030", "DDMM", 'M', "MEXICANA", "25-02-2018", 12131235);
    Document* id2 = new ID("DIEGO MIGUEL JIMENEZ JIMENEZ", "JIJI060610JFHDKDN2", "06-06-2010", "2030", "DDMM", 'M', "las victorias", "GASYIEUEND783H38");
    Document* passport3 = new Passport("JIMENA REYES CAMPOS", "JIRE061003JFDAK3N2", "06-10-2003", "2030", "JIRE", 'F', "MEXICANA", "25-02-2018", 17283947);
    Document* id3 = new ID("JIMENA REYES CAMPOS", "JIRE061003JFDAK3N2", "06-10-2003", "2030", "JIRE", 'F', "ZAPOPAN", "DASHDYEJEI38992"); 
    Document* passport4 = new Passport("JAMES MORALES", "-", "06-10-1995", "2022", "JJAMESSS", 'M', "AMERICAN", "25-02-2005", 17283947);
    Document* id4 = new ID("JAMES MORALES", "-", "06-10-1995", "2025", "JJAMESSS", 'M', "LAS VEGAS", "FSAFASF9GF-92");   
    Document* passport5 = new Passport("CRISTIANO RONALDO", "CRSIUUUUU7", "05-02-1985", "2026", "CR7", 'M', "PORTUGAL", "22-02-2010", 17283947);
    Document* id5 = new ID("CRISTIANO RONALDO", "-", "06-10-1995", "2025", "CR7", 'M', "FUNCHAL", "FSAFASF9GF-92");

    Person* Firstperson = new Person(false, passport1, id1); Firstperson->setMessage("Si no me dejas pasar mueres... *LE APUNTA CON UNA PISTOLA");
    Person* Secondperson = new Person(true, passport2, id2); Secondperson->setMessage("Buenas!");
    Person* Thirdperson = new Person(true, passport3, id3); Thirdperson->setMessage("*Se mira nerviosa");
    Person* Fourthperson = new Person(false, passport4, id4); Fourthperson->setMessage("Hi mate!");
    Person* Fifthperson = new Person(false, passport5, id5); Fifthperson->setMessage("Ayudame soy el bicho, necesito dinero y entrar a tu pais de verda mira: SIUUUUUUUU");

    listPeople.push_back(Firstperson);
    listPeople.push_back(Secondperson);
    listPeople.push_back(Thirdperson);
    listPeople.push_back(Fourthperson);
    listPeople.push_back(Fifthperson);




    system("pause");
    while (true) {

        if (_seJuega != '1') { break; }


            while (_seJuega == '1') {


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

                cout << "Presiona 1 para comenzar a jugar..." << endl;
                cout << "Presiona 2 para salir..." << endl;
                _seJuega = _getch();
                //cin >> _seJuega;

                if (_seJuega != '1') {
                    break;
                }

                system("cls");

                cout << "Te pagaremos 100 pesos por acierto, un error..." << endl;
                cout << "... mejor no te equivoques :)" << endl;

                system("pause");
                system("cls");


                for (auto xiterator= listPeople.begin(); xiterator != listPeople.end(); ++xiterator) {
                    Person* p1 = *xiterator;

                    cout << "Solo puedes admitir a aquellos que tengan sus documentos en regla" << endl;
                    cout << "Cualquier discrepancia debera ser sancionada" << endl;
                    cout << "---------------Hoy solo pueden pasar Mexicanos-----------------" << endl;
                    cout << endl;

                    for (auto yiterator = p1->personal_documents.begin(); yiterator != p1->personal_documents.end(); ++yiterator)
                    {
                        cout << **yiterator;
                        cout << endl;
                    }

                    cout << p1->getMessage() << endl;
                    cout << "----------------------------" << endl;
                    cout << "APROBAR ENTRADA [Y] - DENEGAR ENTRADA[N]" << endl;
                    respuesta = _getch();
                  
                    if (respuesta == 'y' || respuesta == 'Y')
                        _answerStatus = true; 
                    else 
                        _answerStatus = false;

                    if (_answerStatus == p1->getStatus()) 
                        ++player1;
                    else 
                        --player1;
                    
                    system("cls");
                }

                if (player1.getScore() <= 0) {

                    cout << "Tienes cuentas pendientes que pagar y nos debes..." << endl;
                    cout << "Mientras tanto, tenemos a un miembro de tu familia como garantia" << endl;
                    cout << "Este es tu saldo" << endl;
                    cout << player1.getScore() << endl;

                }
                else {
                    cout << "Hoy ganaste..." << endl;
                    cout << player1.getScore() << endl;

                }
                system("pause");
                system("cls");
                player1.setScore(0);

            }


    }

    delete Firstperson;
    delete Secondperson;
    delete Thirdperson;
    delete Fourthperson;
    delete Fifthperson;
    delete passport1;
    delete id1;
    delete passport2;
    delete id2;
    delete passport3;
    delete id3;
    delete passport4;
    delete id4;
    delete passport5;
    delete id5;
}


