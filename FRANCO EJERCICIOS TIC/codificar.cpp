#include<iostream>

int main (){
    /*este programa sirve para leer tres numeros enteros y devolver el mayor*/
    int n1,n2,n3;
    int mayor;
    int salir;
    std::cout<<"escribe el primer numero: ";
    std::cin>>n1;
    std::cout<<"escribe el segundo numero: ";
    std::cin>>n2;
    std::cout<<"escribe el tercer numero: ";
    std::cin>>n3;
    if(n1>n2){
         if(n1>n3){
            mayor=n1;
         }else{
            mayor=n3;       
         }
    }
    else{  
      if(n2>n3){     
         mayor=n2;
      }
      else{                              
        mayor=n3;
      }
    }
     std::cout<<"el mayor es "<<mayor;
     std::cout<<"toca cualquier tecla: ";
     std::cin>>salir;
     return 0;                
}
