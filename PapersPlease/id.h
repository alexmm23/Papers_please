#pragma once
#include <iostream>
#include <string>
using namespace std;


class ID : public Document {
    string titulo = "ID";
    string domicilio;
    string clavedeElector;


public:
    ID(std::string, std::string, std::string, std::string, std::string, char, std::string, std::string);
    friend ostream& operator <<(ostream& os, ID& document);


};
ID::ID(std::string _nombre, std::string _curp, std::string _fechaNacimiento, std::string _fechaVigencia, std::string _firma, char _sexo, std::string _domicilio, std::string _ClaveElector)
    : Document(_nombre, _curp, _fechaNacimiento, _fechaVigencia, _firma, _sexo) {
    domicilio = _domicilio;
    clavedeElector = _ClaveElector;

}
ostream& operator << (ostream& os, ID& document) {
    os << document.titulo << endl
        << "Nombre: " << document.getNombre() << endl
        << "Curp: " << document.getCurp() << endl
        << "Sexo: " << document.getSexo() << endl
        << "Domicilio: " << document.domicilio << endl
        << "Fecha de nacimiento: " << document.getFnac() << endl
        << "Fecha de vigencia: " << document.getFvig() << endl
        << "Firma: " << document.getFirm() << endl
        << "Clave de elector: " << document.clavedeElector << endl;

    return os;
}
