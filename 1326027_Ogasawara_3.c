# robosys2015_2c_1326027
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include <string.h>
#include <wiringPi.h>
#include <softTone.h>

#define PIN 17
#define rest 0
#define DO 261.62
#define DOs 277.18
#define RE 293.66
#define REs 311.12
#define MI 329.62
#define FA 349.22
#define FAs 369.99
#define SO 391.99
#define SOs 415.30
#define RA 440.00
#define RAs 466.16
#define SI 493.88
#define DOD 523.25
#define DOsD 554.36
#define RED 587.32
#define REsD 622.25

void main(void)
{       
       wiringPiSetupGpio();
	softToneCreate(PIN);
	
	softToneWrite(PIN,SOs);
	delay(400);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(300);
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,SO);
	delay(400);            
	softToneWrite(PIN,SOs);
	delay(400);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(200);
	softToneWrite(PIN,RAs);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(500);
	softToneWrite(PIN,rest);
	delay(300);
	softToneWrite(PIN,RAs);
	delay(300);
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(200);
	softToneWrite(PIN,RAs);
	delay(300);
	softToneWrite(PIN,RA);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(300);
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,RAs);
	delay(400);            
	softToneWrite(PIN,DOD);
	delay(200);
	softToneWrite(PIN,DOD);
	delay(200);
	softToneWrite(PIN,DOsD);
	delay(200);
	softToneWrite(PIN,DOD);
	delay(300);
	softToneWrite(PIN,DOD);
	delay(100);
	softToneWrite(PIN,REsD);
	delay(400);
	softToneWrite(PIN,SOs);
	delay(800);
	softToneWrite(PIN,rest);
	delay(400);
	softToneWrite(PIN,REsD);
	delay(300);
	softToneWrite(PIN,REsD);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(900);
	softToneWrite(PIN,rest);
	delay(500);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(300);            
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,RAs);
	delay(200);
	softToneWrite(PIN,RAs);
	delay(200);
	softToneWrite(PIN,DOD);
	delay(200);
	softToneWrite(PIN,DOsD);
	delay(400);
	/*softToneWrite(PIN,rest);
	delay(300);*/
	softToneWrite(PIN,DOD);
	delay(300);
	softToneWrite(PIN,rest);
	delay(300);
	softToneWrite(PIN,SOs);
	delay(400);
	/*softToneWrite(PIN,rest);
	delay(300);*/
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(400);
	softToneWrite(PIN,SO);
	delay(300);
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(400);            
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(200);
	softToneWrite(PIN,RAs);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(600);
	softToneWrite(PIN,rest);
	delay(200);
	softToneWrite(PIN,RAs);
	delay(400);
	softToneWrite(PIN,SOs);
	delay(200);
	softToneWrite(PIN,RAs);
	delay(300);
	softToneWrite(PIN,RAs);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(300);
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,RAs);
	delay(400);            
	softToneWrite(PIN,DOD);
	delay(200);
	softToneWrite(PIN,DOD);
	delay(200);
	softToneWrite(PIN,DOsD);
	delay(200);
	softToneWrite(PIN,DOD);
	delay(300);
	softToneWrite(PIN,DOD);
	delay(100);
	softToneWrite(PIN,REsD);
	delay(400);
	softToneWrite(PIN,SOs);
	delay(700);
	softToneWrite(PIN,rest);
	delay(500);
	softToneWrite(PIN,REsD);
	delay(300);
	softToneWrite(PIN,REsD);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(700);
	softToneWrite(PIN,rest);
	delay(600);
	softToneWrite(PIN,FA);
	delay(100);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,FA);
	delay(200);
	softToneWrite(PIN,SO);
	delay(200);
	softToneWrite(PIN,SOs);
	delay(300);           
	softToneWrite(PIN,rest);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(300);
	softToneWrite(PIN,SOs);
	delay(100);
	softToneWrite(PIN,SOs);
	delay(200);
	softToneWrite(PIN,SI);
	delay(400);
	softToneWrite(PIN,RA);
	delay(400);
	softToneWrite(PIN,SO);
	delay(700);
}
