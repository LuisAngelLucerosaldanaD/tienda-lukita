#include<iostream>
#include<string.h>

using namespace std;

class tienda
{
private:
    float caja_fuerte;
public:
    string nombre;
    string producto; //falta el producto maria ctm
    int estantes;
    int numero_trabajadores;
    int sucursales;
    int almacenes;
    float precio_final;

    tienda(){} //hacemos los constructores
    tienda(string nombre,string producto,int estan_prod,int numero_trabajadores,int sucursales,int almacenes,float precio_final){
        this->nombre=nombre;
        this->producto=producto;
        this->estantes=estantes;
        this->numero_trabajadores=numero_trabajadores;
        this->sucursales=sucursales;
        this->almacenes=almacenes;
        this->precio_final=precio_final;
    }
    void agregarProducto(){
        
    }
    
};

tienda::tienda()
{

}

tienda::~tienda()
{
}
