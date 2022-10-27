

#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include "documents.h"
#include "person.h"
#include "players.h"
using namespace std;

//Crear una lista grande de personas
//Usar una función para seleccionar 5 personas al azar de esa lista de personas
//Con base en las 5 personas seleccionadas, llenar sus documentos.



int main()
{
    char respuesta = 'y';
    bool _aStatus;
    int _seJuega = 1;
    Player player1(0);
    list<Person*> listPeople;

    Document* passport1 = new Passport("ADRIAN ALEJANDRO MONTES MENDOZA", "MOMA030123HJCNNDA3", "23-01-2003", "25-DIC-2023", "AAMM", 'M', "Mexicana", "25-02-2005", 128947);
    Document* id1 = new ID("ARMANDO ALEJANDRO MONTES MENDEZ", "MOME030123HJCNNDA3", "23-01-2003", "25-dic-2023", "AAMM", 'M', "LAS VICTORIAS", "ASLJKDAOISDJ81W7383");
    Document* passport2 = new Passport("DIEGO MIGUEL JIMENEZ JIMENEZ", "JIJI060610JFHDKDN2", "06-06-2010", "2030", "DDMM", 'M', "MEXICANA", "25-02-2018", 12131235);
    Document* id2 = new ID("DIEGO MIGUEL JIMENEZ JIMENEZ", "JIJI060610JFHDKDN2", "06-06-2010", "2030", "DDMM", 'M', "las victorias", "GASYIEUEND783H38");
    Document* passport3 = new Passport("JIMENA REYES CAMPOS", "JIRE061003JFDAK3N2", "06-10-2003", "2030", "JIRE", 'F', "MEXICANA", "25-02-2018", 17283947);
    Document* id3 = new ID("JIMENA REYES CAMPOS", "JIRE061003JFDAK3N2", "06-10-2003", "2030", "JIRE", 'F', "ZAPOPAN", "DASHDYEJEI38992");

    Person* Firstperson = new Person(false, passport1, id1);
    Person* Secondperson = new Person(true, passport2, id2);
    Person* Thirdperson = new Person(true,  passport3, id3);
    /*Person* Fourthperson = new Person(false);
    Person* Fifthperson = new Person(true);*/

    listPeople.push_back(Firstperson);
    listPeople.push_back(Secondperson);
    listPeople.push_back(Thirdperson);

    //if (id3 == passport3) {
    //    cout << "Son iguales" << endl;
    //}
    //else {
    //    cout << "No son iguales" << endl;
    //}
    system("pause");

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
                cout << endl;
                cout << "Presiona 1 para comenzar a jugar..." << endl;
                cout << "Presiona 2 para salir..." << endl;
                cin >> _seJuega;

                if (_seJuega != 1) {
                    break;
                }

                system("cls");
                for (auto element= listPeople.begin(); element != listPeople.end(); ++element) {
                    Person* p1 = *element;
                    for (auto elemen2 = p1->personal_documents.begin(); elemen2 != p1->personal_documents.end(); ++elemen2)
                    {
                        cout << **elemen2;                   
                        cout << endl;

                    }
                    cout << "----------------------------" << endl;
                    cout << "DEJAR PASAR [Y] - DETENER[N]" << endl;
                    cin >> respuesta;
                    if (respuesta == 'y' || respuesta == 'Y')
                        _aStatus = true; else _aStatus = false;

                    if (_aStatus == p1->getStatus()) 
                        ++player1;
                    else --player1;
                    
                    system("cls");
                }

                cout << "Puntuacion final..." << endl;
                cout << player1.getScore() << endl;
                system("pause");
                system("cls");

                player1.setScore(0);

            }


    }

    delete Firstperson;
    delete Secondperson;
    delete Thirdperson;
   /* delete Fourthperson;
    delete Fifthperson;
   */ delete passport1;
    delete id1;
    delete passport2;
    delete id2;
    delete passport3;
    delete id3;
}


