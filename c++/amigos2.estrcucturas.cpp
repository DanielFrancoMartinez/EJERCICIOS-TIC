//Este programa trata sobre estructuras
 #include<iostream>
 using namespace std;
 int main(){
   //Declaro un nuevo tipo de dato
   struct persona{
      string nombre;
      string nombr;
      int edad;
      int colorPelo;
      int coluna;
   };
   int cont;
   //declaro una variable de tipo 
   //persona
   persona amigo[3];
   for(cont=0;cont<3;cont++){
     cout<<"DATOS AMIGO "<<cont;                        
     cout<<"Como se llama tu amigo: ";
     cin>>amigo[cont].nombre;
     cout<<"Como se llama tu amigo: ";
     cin>>amigo[cont].nombr;
     cout<<"Cuántos anos tiene: ";
     cin>>amigo[cont].edad;
     cout<<"De que color tiene el peluco: ";
     cin>>amigo[cont].colorPelo; 
     cout<<"De que color tiene el peluco: ";
     cin>>amigo[cont].coluna; 
   }

   
    
     
 }
