#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CuentaBancaria {
private:
    int numeroCuenta;
    string nombreTitular;
    float saldo = 0;
public:
    CuentaBancaria(int numCuenta, string nameTitular, float saldovich) {
        numeroCuenta = numCuenta;
        nombreTitular = nameTitular;
        saldo = saldovich;
    }
    
    void depositar (float deposito) {
        if(deposito != 0 or deposito < 0) {
            saldo += deposito;
            cout<<"Deposito exitoso, nuevo saldo: " << saldo;
        }
        else {
            cout<<"Invalido";
        }
    }
};



int main()
{
    vector<CuentaBancaria> cuentas;
    
    //ingresion de valores
    for(int i=0; i<3 ; i++) {
        int numeroCuenta;
        string nombreTitular;
        float saldo;
        
        cout<<"Numero: "; 
        cin >> numeroCuenta;
        cin >> nombreTitular;
        cout<<"Saldo: "; 
        cin>>saldo;
        
        cuentas.push_back(CuentaBancaria(numeroCuenta, nombreTitular, saldo));
    }
    
    int opcion;
    cout<<"Seleccione la cuenta: ";
    cin>>opcion;
    
    float deposito;
    cout<<"Cuanto deposita: ";
    cin>>deposito;
    
    switch(opcion) {
        case 1:
        cuentas[opcion - 1].depositar(deposito);
        break;
        
        case 2:
        cuentas[opcion - 1].depositar(deposito);
        break;
        
        case 3:
        cuentas[opcion - 1].depositar(deposito);
        break;
        
        default:
        cout<<"Opcion invalida";
    }

    return 0;
}