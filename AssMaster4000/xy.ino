/*
int del = 10;
int hue = 64;
int sat = 0;
int val = 255;
int hue1 = 164;
int sat1 = 255;
int val1 = 255;
int hue2 = 64;
int sat2 = 255;
int val2 = 0;
long randNo;
int md = 12;

int WBRx;
int WBLx;
int WRUx;
int WRDx;
int WLUx;
int WLDx;
int PBRx;
int PBLx;
int PRUx;
int PRDx;
int PLUx;
int PLDx;
int CBRx;
int CBLx;
int CRUx;
int CRDx;
int CLUx;
int CLDx;

void explorer2 (){


switch (md){
 
 case 0:  { WBR (); if (WLDx == 1) {WLDtail(); WLDx = 0; } randNo = random(3); if (randNo == 0) { md = 12;} if (randNo == 1) { md = 16;} if (randNo == 2) { md = 2;} break; }  //WBR
 case 1:  { WBL (); if (WRDx == 1) {WRDtail(); WRDx = 0; } if (CLDx == 1) {CLDtail(); CLDx = 0; } if (CBLx == 1) {CBLtail(); CBLx = 0; } md = 4; break; }  //WBL
 case 2:  { WRU (); if (WBRx == 1) {WBRtail(); WBRx = 0; } if (CLDx == 1) {CLDtail(); CLDx = 0; } if (CBLx == 1) {CBLtail(); CBLx = 0; } randNo = random(3); if (randNo == 0) { md = 6;} if (randNo == 1) { md = 10;} if (randNo == 2) { md = 5;} break; } //WRU
 case 3:  { WRD (); if (WLUx == 1) {WLUtail(); WLUx = 0; } if (PBLx == 1) {PBLtail(); PBLx = 0; } if (PLDx == 1) {PLDtail(); PLDx = 0; } randNo = random(3); if (randNo == 0) { md = 1;} if (randNo == 1) { md = 12;} if (randNo == 2) { md = 16;} break; } //WRD
 case 4:  { WLU (); if (WBLx == 1) {WBLtail(); WBLx = 0; } randNo = random(3); if (randNo == 0) { md = 3;} if (randNo == 1) { md = 6;} if (randNo == 2) { md = 10;} break; } //WLU
 case 5:  { WLD (); if (WRUx == 1) {WRUtail(); WRUx = 0; } if (PBLx == 1) {PBLtail(); PBLx = 0; } if (PLDx == 1) {PLDtail(); PLDx = 0; } md = 0; break; } //WLD
 case 6:  { PBR();  if (WLUx == 1) {WLUtail(); WLUx = 0; } if (WRUx == 1) {WRUtail(); WRUx = 0; } if (PLDx == 1) {PLDtail(); PLDx = 0; } randNo = random(3); if (randNo == 0) { md = 17;} if (randNo == 1) { md = 15;} if (randNo == 2) { md = 8;} break; } //PBR
 case 7:  { PBL();  if (CRUx == 1) {CRUtail(); CRUx = 0; } if (PRDx == 1) {PRDtail(); PRDx = 0; } if (CLUx == 1) {CLUtail(); CLUx = 0; } randNo = random(3); if (randNo == 0) { md = 10;} if (randNo == 1) { md = 5;} if (randNo == 2) { md = 3;} break; } //PBL
 case 8:  { PRU (); if (CRUx == 1) {CRUtail(); CRUx = 0; } if (PBRx == 1) {PBRtail(); PBRx = 0; }md = 11; break; } //PRU
 case 9:  { PRD (); if (PLUx == 1) {PLUtail(); PLUx = 0; } randNo = random(3); if (randNo == 0) { md = 7;} if (randNo == 1) { md = 17;} if (randNo == 2) { md = 15;} break;} //PRD
 case 10:  { PLU(); if (WLUx == 1) {WLUtail(); WLUx = 0; } if (WRUx == 1) {WRUtail(); WRUx = 0; } if (PBLx == 1) {PBLtail(); PBLx = 0; }md = 9; break; } //PLU
 case 11:  { PLD(); if (PRUx == 1) {PRUtail(); PRUx = 0; } randNo = random(3); if (randNo == 0) if (CLUx == 1) {CLUtail(); CLUx = 0; } { md = 5;} if (randNo == 1) { md = 3;} if (randNo == 2) {md=6;} break; } //PLD
 case 12:  { CBR(); if (WRDx == 1) {WRDtail(); WRDx = 0; } if (WBRx == 1) {WBRtail(); WBRx = 0; } if (CLDx == 1) {CLDtail(); CLDx = 0; } md = 14; break; } //CBR
 case 13:  { CBL(); if (CRDx == 1) {CRDtail(); CRDx = 0; } randNo = random(3); if (randNo == 0) { md = 16;} if (randNo == 1) { md = 2;} if (randNo == 2) {md=1;} break; } //CBL
 case 14:  { CRU(); if (CBRx == 1) {CBRtail(); CBRx = 0; } randNo = random(3); if (randNo == 0) { md = 8;} if (randNo == 1) { md = 7;} if (randNo == 2) { md=17;} break; } //CRU
 case 15:  { CRD(); if (PBRx == 1) {PBRtail(); PBRx = 0; } if (PRDx == 1) {PRDtail(); PRDx = 0; } if (CLUx == 1) {CLUtail(); CLUx = 0; } md = 13; break; } //CRD
 case 16:  { CLU(); if (WRDx == 1) {WRDtail(); WRDx = 0; } if (WBRx == 1) {WBRtail(); WBRx = 0; } if (CBLx == 1) {CBLtail(); CBLx = 0; } randNo = random(3); if (randNo == 0) { md = 15;} if (randNo == 1) { md = 8;} if (randNo == 2) { md=7;}break; } //CLU
 case 17:  { CLD(); if (CRUx == 1) {CRUtail(); CRUx = 0; } if (PBRx == 1) {PBRtail(); PBRx = 0; } if (PRDx == 1) {PRDtail(); PRDx = 0; } randNo = random(3); if (randNo == 0) { md = 2;} if (randNo == 1) { md = 1;} if (randNo == 2) { md=12;} break; } //CLD
 
 break;
 }
}

//if (WRDx == 1) {WRDtail(); WRDx = 0; }

//triange, side, direction
void CBR () { //case12

for(int i = 32; i >= 0; i--) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 

 CBRx = 1;
}

void CBRtail () {
  for(int i = 32; i >= 0; i--) {
    
    FastLED.show();  
    leds[Courage_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  } }

void CRU () {
  for(int i = 32; i >= 0; i--) {
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 

CRUx = 1;
}

void CRUtail () {
for(int i = 32; i >= 0; i--) { 
    
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  } 
}

void PRU(){
   for(int i = 0; i < 33; i++) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   PRUx = 1;
  
  }
void PRUtail (){
 for(int i = 0; i < 33; i++) { 
   
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  } 
     
void PBL(){ 
  for(int i = 32; i >= 0; i--) {
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 
PBLx = 1;
  }

void PBLtail () {
  for(int i = 32; i >= 0; i--) { 
   
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  }
}
  
void CLD(){
for(int i = 32; i >= 0; i--) {
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 
CLDx = 1;

}

void CLDtail(){
  for(int i = 32; i >= 0; i--) { 
    
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  }
}

void PLD (){ for(int i = 0; i < 33; i++) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
PLDx = 1; 
}

void PLDtail(){
  for(int i = 0; i < 33; i++) { 
   
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);} 
}

void PBR(){
  for(int i = 0; i < 33; i++) {
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
PBRx = 1; 
}

void PBRtail (){
for(int i = 0; i < 33; i++) { 
   
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);}   
}

 void CRD (){
  for(int i = 0; i < 33; i++) {
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}

   CRDx = 1;
}

void CRDtail (){
for(int i = 0; i < 33; i++) { 
   
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} }
 
 void PLU (){
  for(int i = 32; i >= 0; i--) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   PLUx = 1;
}

void PLUtail(){
for(int i = 32; i >= 0; i--) {
  
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  }

 void PRD() {
  for(int i = 32; i >= 0; i--) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   PRDx = 1;
 }

void PRDtail(){
for(int i = 32; i >= 0; i--) {
   
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} }

void CBL () { for(int i = 0; i < 33; i++) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   CBLx = 1;
}

void CBLtail (){
  for(int i = 0; i < 33; i++) { 
    
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);}
}

void CLU (){
  for(int i = 0; i < 33; i++) {
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   CLUx = 1;
}

void CLUtail (){
for(int i = 0; i < 33; i++) { 
    
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}
}

void WRU (){ for(int i = 0; i < 33; i++) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
WRUx = 1;
  }

void WRUtail (){ for(int i = 0; i < 33; i++) { 
    
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}
  
void WBL (){
    for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   WBLx = 1;
 }

void WBLtail () { for(int i = 32; i >= 0; i--) {
   
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}
    
void WLU (){
  for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   WLUx = 1;
 }

void WLUtail (){
 for(int i = 32; i >= 0; i--) {
   
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);} }
    
void WLD (){
   for(int i = 0; i < 33; i++) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   WLDx = 1;
}

void WLDtail (){ 
  for(int i = 0; i < 33; i++) { 
    
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}

void WBR () {
  for(int i = 0; i < 33; i++) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   WBRx = 1;
}   

void WBRtail () {
for(int i = 0; i < 33; i++) { 
   
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);} }

void WRD (){  
  for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   WRDx = 1;
 }

void WRDtail(){
  for(int i = 32; i >= 0; i--) {
    
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} } */
