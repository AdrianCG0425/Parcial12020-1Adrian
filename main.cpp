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
    float t,t2,t3,r2,r1;             // t = tiempo total que demora el proyectil   t2 tiempo necesario para que no le pegue
    r1=0.05*distancia;
    r2=0.025*distancia;
    x2=distancia;
    if(Ho>Hd)y2=0;
    else if(Ho<Hd)y2=Hd-Ho;
    else y2=0;
    x1=0;
    if(Ho>Hd)y1=Ho-Hd;
    else if(Ho<Hd)y1=0;
    else y1=0;
    // ecuaciones de la bala oponente
    t=x2/vel*cos(an);
    t2=t-2.5;
    //haciendo que la bala choque en el punto mas alto y3=0
    y3=x1+vel*sin(an)*t -4.9*t*t;


}
