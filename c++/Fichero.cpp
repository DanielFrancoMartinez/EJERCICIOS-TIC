//FICHEROS
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //Abrimos el fichero
    int salir;
    ofstream fichero ("miFichero.txt");
    fichero<<"En un lugar de la Mancha"<<endl;
    fichero<<"de cuyo nombre no quiero...";
    fichero.close();
    cout<<"Ya esta.Fichero cerrado";      
    cin>>salir;
    return 0;
}
