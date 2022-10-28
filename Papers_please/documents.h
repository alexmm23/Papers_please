#pragma once
#include <iostream>
#include <string>
using namespace std;



//CREANDO Y DEFINIENDO LA CLASE DOCUMENTO

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
    //bool operator == (const Document&);
};
//bool operator==(const Document& doc1, const Document& doc2) {
//    return(doc1 == doc2);
//
//}

void Document::ImprimirDocumento() {
    cout << "Nombre: " << nombre << endl;
    cout << "Curp: " << curp << endl;
    cout << "Fecha de nacimiento: " << FechadeNacimiento << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Firma: " << firma << endl;

}



Document::Document(string _nombre, string _curp, string _fechaNacimiento, string _fechaVigencia, string _firma, char _sexo) {
    nombre = _nombre;
    curp = _curp;
    FechadeNacimiento = _fechaNacimiento;
    fechaVigencia = _fechaVigencia;
    firma = _firma;
    sexo = _sexo;
}


//DEFINIENDO LA CLASE PASAPORTE QUE HEREDA DE DOCUMENTO

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
    os << "PASAPORTE" << endl
        << "Nombre: " << passport.getNombre() << endl
        << "Fecha de nacimiento: " << passport.getFnac() << endl
        << "CURP: " << passport.getCurp() << endl
        << "Firma: " << passport.getFirm() << endl
        << "Sexo: " << passport.getSexo() << endl
        << "Fecha de vigencia: " << passport.getFvig() << endl
        << "Numero de pasaporte: " << passport.getnumPass() << endl
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
    cout << titulo << std::endl;
    Document::ImprimirDocumento();
    cout << "Nacionalidad: " << nacionalidad << endl;
    cout << "Fecha expedicion: " << fechaExpedicion << endl;
    cout << "Numero pasaporte: " << numerodePasaporte << endl;

}



//DEFINIENDO LA CLASE IDENTIFICACION QUE HEREDA DE LA CLASE DOCUMENTO

class ID : public Document {
    string titulo = "ID";
    string domicilio;
    string clavedeElector;


public:
    ID(std::string, std::string, std::string, std::string, std::string, char, std::string, std::string);
    friend ostream& operator <<(ostream& os, ID& document);
    void ImprimirDocumento();

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
void ID::ImprimirDocumento() {
    cout << titulo << endl;
    Document::ImprimirDocumento();
    cout << "Domicilio: " << domicilio << endl;
    cout << "Clave de elector: " << clavedeElector << endl;

}