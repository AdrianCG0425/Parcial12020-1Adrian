#include <iostream>
# include <math.h>

using namespace std;
void ataques(float distancia,float Ho,float Hd,float an,float vel);
int main()
{
    float Ho,Hd,distancia,an,vel;
    int mayor;
    cout << "ingrese la altura a la que esta el primer tanque(Oponente)" << endl;
    cin>>Ho;
    cout << "ingrese la altura a la que esta el segundo tanque(Defensa)" << endl;
    cin>>Hd;
    cout << "ingrese la distancia que hay entre ambos tanques" << endl;
    cin>>distancia;
    cout<<"Ingrese el angulo del tanque oponente"<<endl;
    cin>>an;
    cout<<"Ingrese la velocidad inicial del tanque openente"<<endl;
    cin>>vel;


    return 0;
}
void ataques(float distancia,float Ho,float Hd,float an,float vel){
    float x1,y1,x2,y2,x3,y3; //  (x1,y1) tanque1  , (x2,y2) tanque2  , (x3, y3) donde deben estar las balas

}
