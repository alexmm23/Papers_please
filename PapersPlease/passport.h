#pragma once
#include <iostream>
#include <string>
#include "document.h"
using namespace std;


class Passport : public Document {
private:
    string titulo = "PASAPORTE";
    string nacionalidad;
    string fechaExpedicion;
    int numerodePasaporte = 0;
public:
    string getNacionalidad() { return nacionalidad; }
    string getFexp() { return fechaExpedicion; }
    int getnumPass() { return numerodePasaporte; }
    Passport(string, string, string, string, string, char, string, string, int);
    void ImprimirDocumento();
    friend ostream& operator <<(ostream& os, Passport& document);

};
ostream& operator << (ostream& os, Passport& passport) {
    

    os << "Numero de pasaporte: " << passport.getnumPass() << endl
        << "Nacionalidad: " << passport.getNacionalidad() << endl
        << "Fecha de expedicion: " << passport.getFexp() << endl;
    
    return os;
}
Passport::Passport(string _nombre, string _curp, string _FechaNacimiento, string _fechaVigencia, string _firma, char _sexo, string _nacionalidad, string _fechaExpedicion, int _nPasaporte)
    : Document(_nombre, _curp, _FechaNacimiento, _fechaVigencia, _firma, _sexo) {
    nacionalidad = _nacionalidad;
    fechaExpedicion = _fechaExpedicion;
    numerodePasaporte = _nPasaporte;
}
void Passport::ImprimirDocumento() {
    std::cout << titulo << std::endl;
    Document::ImprimirDocumento();
    std::cout << "Nacionalidad: " << nacionalidad << std::endl;
    std::cout << "Fecha expedicion: " << fechaExpedicion << std::endl;
    std::cout << "Numero pasaporte: " << numerodePasaporte << std::endl;

}