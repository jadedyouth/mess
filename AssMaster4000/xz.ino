int del = 10;
int hue = 64;
int sat = 0;
int val = 255;
int hue1 = 96;
int sat1 = 255;
int val1 = 255;
int hue2 = 64;
int sat2 = 255;
int val2 = 0;
long randNo;
int md = 12;
int fig;
int fig1;
int rbtrg =0;

int WBz;
int WRz;
int WLz;
int PBz;
int PRz;
int PLz;
int CBz;
int CRz;
int CLz;

void explorer3 (){
fig1++;
if (fig1 <1000){ fig ++; }
if (fig == 100) {clear_all (); WBz =0; WRz=0; WLz=0; PBz=0; PRz=0; PLz=0; CBz=0; CRz=0; CLz=0; randNo = random(255); hue1 = randNo; fig = 0;}

if (fig1 >1000) {rbtrg = 1; WBz =0; WRz=0; WLz=0; PBz=0; PRz=0; PLz=0; CBz=0; CRz=0; CLz=0;} else if (fig1 > 1200) {rbtrg = 0; fig1 = 0;}

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
if (CBz == 0) {

for(int i = 32; i >= 0; i--) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);
    if (rbtrg == 1) { hue1++; }
  } CBz = 1; }

else if (CBz == 1) {
for(int i = 32; i >= 0; i--) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show();  
    leds[Courage_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  } CBz = 0; }
}

void CRU () { 

  if (CRz ==0) {
  for(int i = 32; i >= 0; i--) {
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);
    if (rbtrg == 1) { hue1++; }
  } CRz = 1;}

else if (CRz ==1) {
for(int i = 32; i >= 0; i--) { 
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  } CRz = 0;}
}

void PRU(){
  
  if (PRz == 0) {
   for(int i = 0; i < 33; i++) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);
    if (rbtrg == 1) { hue1++; }
    } PRz = 1;}
   
   else if (PRz == 1) {
for(int i = 0; i < 33; i++) { 
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  PRz = 0;}    
  }
void PBL(){ 
  if (PBz ==0){
  for(int i = 32; i >= 0; i--) {
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del); if (rbtrg == 1) { hue1++; } PBz = 1; }
  } 
else if (PBz ==1) {
for(int i = 32; i >= 0; i--) { 
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  } PBz = 0;}}
  
void CLD(){
  if (CLz == 0) {
for(int i = 32; i >= 0; i--) {
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del); if (rbtrg == 1) { hue1++; }
  } CLz = 1; }

else if (CLz == 1) { 
for(int i = 32; i >= 0; i--) { 
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);
  }CLz = 0;} }

void PLD (){ 
  if (PLz == 0) {
  for(int i = 0; i < 33; i++) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del); if (rbtrg == 1) { hue1++; }} PLz = 1;}
    
  else if (PLz == 1) {
for(int i = 0; i < 33; i++) { 
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  PLz = 0;}
}
void PBR(){
  if (PBz == 0){
  for(int i = 0; i < 33; i++) {
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del); if (rbtrg == 1) { hue1++; }} PBz = 1;}
   else if (PBz == 1){
for(int i = 0; i < 33; i++) { 
    leds[Power_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  PBz = 0;}
}

 void CRD (){
  if (CRz == 0) {
  for(int i = 0; i < 33; i++) {
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del); if (rbtrg == 1) { hue1++; }} CRz = 1;}
   else if (CRz ==1) {
for(int i = 0; i < 33; i++) { 
    leds[Courage_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} CRz = 0; } }
 
 void PLU (){
  if (PLz == 0) {
  for(int i = 32; i >= 0; i--) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} PLz = 1;}
   else if (PLz == 1){
for(int i = 32; i >= 0; i--) {
    leds[Power_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del); } PLz = 0; }}

 void PRD() {
  if (PRz ==0) {
  for(int i = 32; i >= 0; i--) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} PRz = 1;}
   else if (PRz = 1) {
for(int i = 32; i >= 0; i--) {
    leds[Power_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Power_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  PRz = 0; }}

 void CBL () { 
  if (CBz ==0) {
  for(int i = 0; i < 33; i++) {
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} CBz = 1;}
   else if (CBz == 1){
for(int i = 0; i < 33; i++) { 
    leds[Courage_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);} CBz = 0;}}

void CLU (){
  if (CLz == 0){ 
  for(int i = 0; i < 33; i++) {
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} CLz =1;}
   else if (CLz ==1) {
for(int i = 0; i < 33; i++) { 
    leds[Courage_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Courage_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);} CLz = 0;}}

void WRU (){
  if (WRz == 0) {
  for(int i = 0; i < 33; i++) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} WRz =1;}
   else if (WRz == 1){
for(int i = 0; i < 33; i++) { 
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} WRz =0;}
  }
void WBL (){
  if (WBz ==0) {
    for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} WBz =1;}

  else if (WBz == 1) {
     for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);} WBz = 0;} }
    
void WLU (){
  if (WLz ==0){
  for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} WLz = 1;}
   else if (WLz == 1){
for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);}  WLz = 0;}}
    
void WLD (){
  if (WLz == 0){
   for(int i = 0; i < 33; i++) {
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} WLz =1;}
   else if (WLz ==1) {
for(int i = 0; i < 33; i++) { 
    leds[Wisdom_Left[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Left[i]] = CHSV(hue2, sat2, val2);
    delay(del);} WLz = 0;}}

void WBR () {
  if (WBz == 0) {
  for(int i = 0; i < 33; i++) {
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }} WBz = 1;}
   else if (WBz == 1){
for(int i = 0; i < 33; i++) { 
    leds[Wisdom_Bottom[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Bottom[i]] = CHSV(hue2, sat2, val2);
    delay(del);} WBz = 0;}}   

void WRD (){  
  if (WRz == 0) {
  for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue1, sat1, val1);
    delay(del);if (rbtrg == 1) { hue1++; }}WRz = 1;}
   else if (WRz == 1) {
for(int i = 32; i >= 0; i--) {
    leds[Wisdom_Right[i]] = CHSV(hue, sat, val);
    FastLED.show(); 
    leds[Wisdom_Right[i]] = CHSV(hue2, sat2, val2);
    delay(del);} WRz = 0; }}
