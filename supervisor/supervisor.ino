#include "alphabot_drivers.h"
#include "line_follower.h"
#include "pervasives.h"
#include "line_follower_types.h"


#define NUM_SENSORS 5
char ch;
int f;
int t0 , t;
int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem _mem;
int senLeft, senRight;

void setup()
{
  
  init_devices();
  Line_follower__main_reset(&_mem);
 forward();   
  Serial.begin(115200);
  pinMode(7, INPUT);
  
  t0 = millis();
}

void loop()
{ 
  delay(0);
  ch = ir_read();
  AnalogRead(sensorValues);
  senLeft = digitalRead(9);
  senRight = digitalRead(8);
  
  if (ch == 'n')
   f=0;
  else if (ch == 'l')
   f =2;
  else if (ch == 'r')
   f =3;
  else
   f=1;

  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], senLeft, senRight, f, &_res, &_mem);
  Serial.print(_res.v_l);
  Serial.print(" ");
  Serial.println(_res.v_r);
  int buttonState = digitalRead(7);  // print out the state of the button:
  Serial.println(buttonState);

  SetSpeed(_res.v_l, _res.v_r);
  // SetSpeed(0,0);
  Serial.print("sensorValues[0] ");
  Serial.println(sensorValues[0]);
  Serial.print("sensorValues[1] ");
  Serial.println(sensorValues[1]);
  Serial.print("sensorValues[2] ");
  Serial.println(sensorValues[2]);
  Serial.print("sensorValues[3] ");
  Serial.println(sensorValues[3]);
  Serial.print("sensorValues[4] ");
  Serial.println(sensorValues[4]);

  Serial.print("_res  ");
  Serial.println(_res.dir);
  Serial.print(_res.v_l);
  Serial.print(" ");
  Serial.println(_res.v_r);

  Serial.println("..................................");
   Serial.print("senLeft ");
  Serial.println(senLeft);
  Serial.print("senRight  ");
  Serial.println(senRight);
  
  Serial.println("..................................");
  Serial.println(ch);



  if(_res.dir == 1) 
  forward();
  else if (_res.dir == 2 )
  forward_left();
  else if(_res.dir == 3)
  forward_right();
  else if(_res.dir == -1)
  backward();
  else if (_res.dir == 31)
  right ();
  else if (_res.dir == 21)
  left();
  else
  stop();
 t=millis();

  

 
 if( _res.dir == 11)
   beep_on();
   else
   beep_off( );

 }
