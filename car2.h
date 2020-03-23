#ifndef CAR2_H_INCLUDED
#define CAR2_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class car
{
private:
int speed;
   string  Color;
   string  model;
public:
car();
car(int speed2 , string color2 , string model2);
car(const car &car2);
void setspeed(int speed2,string model2,string color2);
void printf();
void getspeed();



};


#endif // CAR2_H_INCLUDED
