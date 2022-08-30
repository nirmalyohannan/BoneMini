// Include the Servo library 
#include <Servo.h> 


int LFx = 0;
int LFy = 0;
int RFx = 0;
int RFy = 0;
int LBx = 0;
int LBy = 0;
int RBx = 0;
int RBy = 0;

int servoPinLF = 2; 
int servoPinRF = 3;
int servoPinLB = 4;
int servoPinRB = 5;

int servoPinLF1 = 6;
int servoPinRF1 = 7;
int servoPinLB1 = 8;
int servoPinRB1 = 9;

Servo ServoLF;
Servo ServoRF;
Servo ServoLB;
Servo ServoRB;

Servo ServoLF1;
Servo ServoRF1;
Servo ServoLB1;
Servo ServoRB1;







 void anglesetLF(int angleLF, int angleLF1)
   {
  if(angleLF>LFx){
    for(LFx=LFx;LFx<=angleLF;LFx++){
   ServoLF.write(LFx);  
   for(LFy=LFy;LFy<=angleLF1;LFy++){
   ServoLF1.write(LFy);
   }  
   delay(50);
  }
  }
  
  else {
     for(LFx=LFx;LFx>=angleLF;LFx--){
   ServoLF.write(LFx);  
   for(LFy=LFy;LFy>=angleLF1;LFy--){
   ServoLF1.write(LFy);
   }  
   delay(50);
  }
  }
   }




    void anglesetRF(int angleRF, int angleRF1)
   {
  if(angleRF>RFx){
    for(RFx=LFx;RFx<=angleRF;RFx++){
   ServoRF.write(RFx);  
   for(RFy=RFy;RFy<=angleRF1;RFy++){
   ServoRF1.write(RFy);
   }  
   delay(50);
  }
  }
  
  else {
     for(RFx=RFx;RFx>=angleRF;RFx--){
   ServoRF.write(RFx);  
   for(RFy=RFy;RFy>=angleRF1;RFy--){
   ServoRF1.write(RFy);
   }  
   delay(50);
  }
  }
   }



    void anglesetLB(int angleLB, int angleLB1)
   {
  if(angleLB>LBx){
    for(LBx=LBx;LBx<=angleLB;LBx++){
   ServoLB.write(LBx);  
   for(LBy=LBy;LBy<=angleLB1;LBy++){
   ServoLB1.write(LBy);
   }  
   delay(50);
  }
  }
  
  else {
     for(LBx=LBx;LBx>=angleLB;LBx--){
   ServoLB.write(LBx);  
   for(LBy=LBy;LBy>=angleLB1;LBy--){
   ServoLB1.write(LBy);
   }  
   delay(50);
  }
  }
   }
  

  void anglesetRB(int angleRB, int angleRB1)
   {
  if(angleRB>RBx){
    for(RBx=LBx;RBx<=angleRB;RBx++){
   ServoRB.write(RBx);  
   for(RBy=RBy;RBy<=angleRB1;RBy++){
   ServoRB1.write(RBy);
   }  
   delay(50);
  }
  }
  
  else {
     for(RBx=RBx;RBx>=angleRB;RBx--){
   ServoRB.write(RBx);  
   for(RBy=RBy;RBy>=angleRB1;RBy--){
   ServoRB1.write(RBy);
   }  
   delay(50);
  }
  }
   }







void setup() { 

   // We need to attach the servo to the used pin number 
   ServoLF.attach(servoPinLF); 
   ServoRF.attach(servoPinRF);
   ServoLB.attach(servoPinLB);
   ServoRB.attach(servoPinRB);

   ServoLF1.attach(servoPinLF1);
   ServoRF1.attach(servoPinRF1);
   ServoLB1.attach(servoPinRB1);
   ServoRB1.attach(servoPinLB1);


}

void loop(){ 

anglesetLF(120, 60);
delay(400);
anglesetLF(80, 30);
delay(300000);




}
