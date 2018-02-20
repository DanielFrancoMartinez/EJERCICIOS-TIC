//Lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std

int main(){
    string linea;
    int salir;
    ifstream fichero("miFichero.txt");
    while(fichero){
    getline(fichero,linea);
    cout<<linea<<endl;
    }
    fichero.close();
    return 0;  
                
}
