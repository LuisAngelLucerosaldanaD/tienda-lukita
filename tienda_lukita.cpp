#include <iostream>
using namespace std;
//init the master class "persona"
class persona{
  private:
  int numeroCuenta;
  public:
  string nombre;
  int DNI;
  int edad;
  string genero;
  persona();
  void setnumeroCuenta(int _numeroCuenta){
    this->numeroCuenta = _numeroCuenta;
  }
};
//init the class trabajador derivate of persona(public way)
class trabajador : public persona {
  private:
  int salario;
  public:
  string tipoDeTrabajador;
  trabajador();
  void setSalario(int _salario){
    this->salario = _salario;
  }
  void registroDeCompra(){
    cout<<"Registrando compra...."<<endl;
  }
  void consultaInventario(){
    cout<<"Consultando inventario...."<<endl;
  }
    void realizarLimpieza(){
    cout<<"Limpiando...."<<endl;
  }
};
//init the class cliente derivate of persona(public way)
class cliente : public persona {
  public:
  void comprar(){
    cout<<"Realizando compra..."<<endl;
  }
  void regatear(){
    cout<<"Regateandooooo..."<<endl;
  }
  void reclamo(){
    cout<<"Realizando reclamo..."<<endl;
  }
};
