#include <Encoder.h>

Encoder myEnc1(A0, A1);

void setup() {
  Serial.begin(115200);
}

long position1  = -999;
long temppos1 = -999;

void loop() {
  long newPos1 = myEnc1.read();    
    if ((newPos1/4) != position1) {
    position1 = (newPos1/4);
    if (position1 < 0) {
      position1 = 0;
     myEnc1.write(0);
    }
    if (position1 > 100) {// a max limit according to project requirement
      position1 = 100;
     myEnc1.write(100);
  }
  int  position2= 2*position1;
    Serial.print("R;");
    Serial.print(position2);
    Serial.print(" - ");   
    int data= analogRead(A2);// reading button status and storing in data variables.
if(data==1023)//if high (5v) available i.e on button press
{
Serial.println("1");
delay(500);
}
else 
{
  Serial.println("0");
  delay(500);  
}
    //}
   temppos1 = position1;
  }
}
