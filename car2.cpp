#include "car2.h"
#include <string>
#include <iostream>
using namespace std;
 car :: car()
    {
        cout<<"���������� �����������"<<endl;
        speed = 320;
        Color = "white";
        model = "X5";
        getspeed();
    }
 car :: car(int speed2,string color2,string model2)
    {
     cout<<" ����������� c �����������"<<endl;
     speed = speed2;
     Color=color2;
     model=model2;
     getspeed();

    }

void car :: setspeed(int speed2,string model2,string color2)
    {
         cout<<" ����� set "<<endl;
        speed = speed2;
        Color =color2;
        model =model2;

    }
   void car :: printf()
   {
       cout<<"�������� ������: "<<model<<endl<<"������������ ��������: "<<speed<<endl<<"���� : "<<Color<<endl;
   };
   void car :: getspeed()
    {
     printf();
    }
   car :: car(const car &car2)
    {
 cout<<" ����������� ����������� "<<endl;
    speed = car2.speed;
    Color = car2.Color;
    model = car2.model;

    getspeed();

        }
;
