#include "FastLED.h"

#define NUM_LEDS 103
#define DATA_PIN 7
#define CLOCK_PIN 8
//uint8_t max_bright = 10;
uint8_t max_bright = 64;

int s=0;



//int r=127;

//int g=40;

//int b=183;


int r=75;

int g=0;

int b=130;


  int statusSensor = digitalRead (2);   //define variable of the Sound Sensor status



CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);
FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);
FastLED.setBrightness(max_bright);
}


void loop()

/*////////////////////////////
                                                  //and read value of the Sensor's
 { 
  if (statusSensor == 1)        //When the Sensor detects a signal
  {
    digitalWrite(DATA_PIN, HIGH);    //LED Strip will be active
  }
  
  else                          //If no signal is detected
  {
    digitalWrite(DATA_PIN, LOW);     //The status of the LED strip is deactivated
  }
  /////////////////////////////////////////////////*/


///
{

  s=analogRead(A1);
Serial.println(s);
 

  //if((s>=535)&&(s<=540))//Change Sensitivity
  if(s>=350)//Change Sensitivity

  {

    leds[50]=CRGB (20, 135, 217);

    leds[51]=CRGB (20, 135, 217);

  }

  //else if((s>=530)&&(s<=535))
    else if(s>400)


   {

     leds[50]=CRGB (20, 217, 30);

    leds[51]=CRGB (20, 217, 30);

   }

  else

  {

     leds[50] = CRGB ( r,g,b);

     leds[51] = CRGB ( r,g,b);

  }

    for (int i = 0; i <= 50; i++) 

  {

     leds[i] = leds[i+1];

     leds[102-i] = leds[101-i];

     

  }
//////*/
 FastLED.show();

 delay(30);

}
