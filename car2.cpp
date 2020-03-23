#include "car2.h"
#include <string>
#include <iostream>
using namespace std;
 car :: car()
    {
        cout<<"Встроенный конструктор"<<endl;
        speed = 320;
        Color = "white";
        model = "X5";
        getspeed();
    }
 car :: car(int speed2,string color2,string model2)
    {
     cout<<" Конструктор c параметрами"<<endl;
     speed = speed2;
     Color=color2;
     model=model2;
     getspeed();

    }

void car :: setspeed(int speed2,string model2,string color2)
    {
         cout<<" Метод set "<<endl;
        speed = speed2;
        Color =color2;
        model =model2;

    }
   void car :: printf()
   {
       cout<<"Название модели: "<<model<<endl<<"Максимальная скорость: "<<speed<<endl<<"Цвет : "<<Color<<endl;
   };
   void car :: getspeed()
    {
     printf();
    }
   car :: car(const car &car2)
    {
 cout<<" Конструктор копирования "<<endl;
    speed = car2.speed;
    Color = car2.Color;
    model = car2.model;

    getspeed();

        }
;
