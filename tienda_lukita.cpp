#include <iostream>
#include <string.h>
using namespace std;
class producto
{
private:
public:
    string nombre;
    float precio;
    int cod;
    string disponible;
    int cant;
    float oferta;
    int fecha_venci;
    int fecha_produc;
    string categoria;

 producto (){// un constructor
    
 }
 producto (string nombre, float precio, int cod, string disponible, int cant, float oferta, int fecha_venci, int fecha_produc, string categoria){// sobrecarga de constructores
    this->nombre=nombre;// llamado a una propiedad de la clase
    this->precio=precio;
    this->cod=cod;
    this->disponible=disponible;
    this->cant=cant;
    this->oferta=oferta;
    this->fecha_venci=fecha_venci;
    this->fecha_produc=fecha_produc;
    this->categoria=categoria;
 }
};

//SOLID: