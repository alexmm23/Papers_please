#pragma once
#include <iostream>
#include <string>
using namespace std;


class Document {
private:
    string nombre;
    string curp;
    string FechadeNacimiento;
    string fechaVigencia;
    string firma;
    char sexo;

public:
    string getNombre() { return nombre; }
    string getCurp() { return curp; }
    string getFnac() { return FechadeNacimiento; }
    string getFvig() { return fechaVigencia; }
    string getFirm() { return firma; }
    char getSexo() { return sexo; }
    Document(string, string, string, string, string, char);
    virtual void ImprimirDocumento();
    friend ostream& operator <<(ostream& os, Document& document);
};
ostream& operator << (ostream& os, Document& document) {
    os << "Nombre: " << document.getNombre() << endl 
       << "Curp: " << document.getCurp() << endl 
       << "Fecha de nacimiento: " << document.getFnac() << endl
       << "Fecha de vigencia: " << document.getFvig() << endl 
       << "Firma: " << document.getFirm() << endl 
       << "Sexo: " << document.getSexo() << endl;
    return os;
}
Document::Document(string _nombre, string _curp, string _fechaNacimiento, string _fechaVigencia, string _firma, char _sexo) {
    nombre = _nombre;
    curp = _curp;
    FechadeNacimiento = _fechaNacimiento;
    fechaVigencia = _fechaVigencia;
    firma = _firma;
    sexo = _sexo;
}
void Document::ImprimirDocumento() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Curp: " << curp << std::endl;
    std::cout << "Fecha de nacimiento: " << FechadeNacimiento << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
    std::cout << "Firma: " << firma << std::endl;

}

