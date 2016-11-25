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
void explorer (){


switch (md){
 
 case 0:  { WBR (); randNo = random(3); if (randNo == 0) { md = 12;} if (randNo == 1) { md = 16;} if (randNo == 2) { md = 2;} break; }  //WBR
 case 1:  { WBL (); md = 4; break; }  //WBL
 case 2:  { WRU (); randNo = random(3); if (randNo == 0) { md = 6;} if (randNo == 1) { md = 10;} if (randNo == 2) { md = 5;} break; } //WRU
 case 3:  { WRD (); randNo = random(3); if (randNo == 0) { md = 1;} if (randNo == 1) { md = 12;} if (randNo == 2) { md = 16;} break; } //WRD
 case 4:  { WLU (); randNo = random(3); if (randNo == 0) { md = 3;} if (randNo == 1) { md = 6;} if (randNo == 2) { md = 10;} break; } //WLU
 case 5:  { WLD (); md = 0; break; } //WLD
 case 6:  { PBR(); randNo = random(3); if (randNo == 0) { md = 17;} if (randNo == 1) { md = 15;} if (randNo == 2) { md = 8;} break; } //PBR
 case 7:  { PBL(); randNo = random(3); if (randNo == 0) { md = 10;} if (randNo == 1) { md = 5;} if (randNo == 2) { md = 3;} break; } //PBL
 case 8:  { PRU (); md = 11; break; } //PRU
 case 9:  { PRD (); randNo = random(3); if (randNo == 0) { md = 7;} if (randNo == 1) { md = 17;} if (randNo == 2) { md = 15;} break;} //PRD
 case 10:  { PLU(); md = 9; break; } //PLU
 case 11:  { PLD(); randNo = random(3); if (randNo == 0) { md = 5;} if (randNo == 1) { md = 3;} if (randNo == 2) {md=6;} break; } //PLD
 case 12:  { CBR(); md = 14; break; } //CBR
 case 13:  { CBL(); randNo = random(3); if (randNo == 0) { md = 16;} if (randNo == 1) { md = 2;} if (randNo == 2) {md=1;} break; } //CBL
 case 14:  { CRU(); randNo = random(3); if (randNo == 0) { md = 8;} if (randNo == 1) { md = 7;} if (randNo == 2) { md=17;} break; } //CRU
 case 15:  { CRD(); md = 13; break; } //CRD
 case 16:  { CLU(); randNo = random(3); if (randNo == 0) { md = 15;} if (randNo == 1) { md = 8;} if (randNo == 2) { md=7;}break; } //CLU
 case 17:  { CLD(); randNo = random(3); if (randNo == 0) { md = 2;} if (randNo == 1) { md = 1;} if (randNo == 2) { md=12;} break; } //CLD
 
 break;
 }
}


//triange, side, direction
void CBR () { //case12

for(int i = 32; i >= 0; i--) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 

for(int i = 32; i >= 0; i--) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show();  
    leds[Courage_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  }  
}

void CRU () {
  for(int i = 32; i >= 0; i--) {
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 

for(int i = 32; i >= 0; i--) { 
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
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
   
for(int i = 0; i < 33; i++) { 
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}     
  }
void PBL(){ 
  for(int i = 32; i >= 0; i--) {
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 

for(int i = 32; i >= 0; i--) { 
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  }}
void CLD(){
for(int i = 32; i >= 0; i--) {
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);
  } 

for(int i = 32; i >= 0; i--) { 
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  }}

void PLD (){ for(int i = 0; i < 33; i++) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 0; i < 33; i++) { 
    leds[Power_Left[i]] = CHSV(hue, sat, val);
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
   
for(int i = 0; i < 33; i++) { 
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
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
   
for(int i = 0; i < 33; i++) { 
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} }
 
 void PLU (){
  for(int i = 32; i >= 0; i--) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 32; i >= 0; i--) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  }

 void PRD() {
  for(int i = 32; i >= 0; i--) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 32; i >= 0; i--) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  }

 void CBL () { for(int i = 0; i < 33; i++) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 0; i < 33; i++) { 
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}

void CLU (){
  for(int i = 0; i < 33; i++) {
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 0; i < 33; i++) { 
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}

void WRU (){ for(int i = 0; i < 33; i++) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 0; i < 33; i++) { 
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}
  }
void WBL (){
    for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);} }
    
void WLU (){
  for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  }
    
void WLD (){
   for(int i = 0; i < 33; i++) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 0; i < 33; i++) { 
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}

void WBR () {
  for(int i = 0; i < 33; i++) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 0; i < 33; i++) { 
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);}}   
void WRD (){  
  for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);}
   
for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  } 

   */
