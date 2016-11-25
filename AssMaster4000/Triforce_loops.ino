void all_snake (){

for(int i = 0; i < LED_COUNT; i++) {   
    leds[i+1] = CHSV(64, 0, 255);
    FastLED.show();    
    leds[i] = CHSV(100, 220, 255);
    delay(10);
    
  } 

for(int i = 0; i < LED_COUNT; i++) {    
    leds[i+1] = CHSV(64, 0, 255);   
    FastLED.show();    
    leds[i] = CHSV(64, 220, 0);
    delay(10);
    
  }

 for(int i = 0; i < LED_COUNT; i++) {   
    leds[i+1] = CHSV(64, 0, 255);
    FastLED.show();    
    leds[i] = CHSV(200, 220, 255);
    delay(10);
    
  } 

for(int i = 0; i < LED_COUNT; i++) {    
    leds[i+1] = CHSV(64, 0, 255);   
    FastLED.show();    
    leds[i] = CHSV(64, 220, 0);
    delay(10);
    
  } 

}

void all_pulse () {
  while (cnt <255) { cnt ++;
for (int i = 0; i< LED_COUNT; i++) {  leds[i] = CHSV (64, 220, cnt);}
LEDS.show();   } // constant_check ();

while (cnt > 30) { cnt --;
for (int i = 0; i< LED_COUNT; i++) {  leds[i] = CHSV (64, 2220, cnt);}
LEDS.show(); } //constant_check (); 

}

void snake_in_n_out () {
 
 //snate_in_n_out_middle triangle
 int hue = 64; int sat = 0; int val = 255;
 int hue1 = 64; int sat1 = 220; int val1 = 255;
 int hue2 = 64; int sat2 = 0; int val2 = 255;
 int hue3 = 64; int sat3 = 255; int val3 = 0;

//snake_in_n_out_outside triange
int hue4 = 64; int sat4 = 0; int val4 = 255;
int hue5 = 64; int sat5 = 220; int val5 = 255;
int hue6 = 64; int sat6 = 0; int val6 = 255;
int hue7 = 64; int sat7 = 0; int val7 = 0;

//delays
int del = 100;
int del1 = 100;

  while (plus <198) { plus = plus +2; pluus = pluus +2; plus1++;
leds [Triforce[plus+1]] = CHSV (hue4, sat4, val4); 
leds [Triforce[pluus+1]] = CHSV (hue4, sat4, val4); 
leds [Middle[plus1+1]] = CHSV (hue, sat, val); 

LEDS.show();
  
 leds[Triforce[plus]] = CHSV(hue5, sat5, val5);
 leds [Triforce[pluus]] = CHSV (hue5, sat5, val5);
  leds[Middle[plus1]] = CHSV(hue1, sat1, val1); 
    LEDS.show();
    delay(10);
  }

plus = -2;
pluus = -1;
plus1 = -1;

//go dark

 while (plus <198) { plus = plus +2; pluus = pluus+2; plus1 ++; 
leds [Triforce[plus+1]] = CHSV (hue6, sat6, val6); 
leds [Triforce[pluus+1]] = CHSV (hue6, sat6, val6); 
leds [Middle[plus1+1]] = CHSV (hue2, sat2, val2); 

LEDS.show();
  
 leds[Triforce[plus]] = CHSV(hue7, sat7, val7);
 leds[Triforce[pluus]] = CHSV(hue7, sat7, val7);
  leds[Middle[plus1]] = CHSV(hue3, sat3, val3); 
    LEDS.show();
    delay(10);

 }
plus = -2;
pluus = -1;
plus1 = -1;
}

void courage_pulse () {


while (cnt <255) { cnt ++;
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (64, 220, cnt); }
LEDS.show();
}
while (cnt > 30) { cnt --;
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (64, 220, cnt); }
LEDS.show();
}

}

void wisdom_pulse () {



while (cnt <255) { cnt ++;
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (64, 220, cnt); }
LEDS.show();
}
while (cnt > 30) { cnt --;
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (64, 220, cnt); }
LEDS.show();
}

}

void power_pulse () {



while (cnt <255) { cnt ++;
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (64, 220, cnt); }
LEDS.show();
}
while (cnt > 30) { cnt --;
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (64, 220, cnt); }
LEDS.show();
}
}

 
void scroll_pulse () {
all_pulse ();
courage_pulse ();
wisdom_pulse ();
power_pulse (); }

void snake_parallel () {

hue01 = hue01 + 32;

while (num <99) { num ++; num1 ++; num2 ++;
leds [Power[num+1]] = CHSV (64, 0, 255); 
leds [Wisdom[num1+1]] = CHSV (64, 0, 255); 
leds[Courage[num2+1]] = CHSV (64, 0, 255); 
LEDS.show();
  
  leds[Power[num]] = CHSV(hue01, 255, 255);
   leds[Wisdom[num1]] = CHSV(hue01, 255, 255); 
    leds[Courage[num2]] = CHSV(hue01, 255, 255);
    delay(10);
    
    
  
  }

num = -1;
num1 = -1;
num2 = -1;

while (num <98) { num ++; num1 ++; num2 ++;
leds [Power[num+1]] = CHSV (64, 0, 255); 
leds [Wisdom[num1+1]] = CHSV (64, 0, 255); 
leds[Courage[num2+1]] = CHSV (64, 0, 255); 
LEDS.show();
  
  leds[Power[num]] = CHSV(hue01, 255, 0);
   leds[Wisdom[num1]] = CHSV(hue01, 255, 0); 
    leds[Courage[num2]] = CHSV(hue01, 255, 0);
    delay(10);
  
  }
  num = -1;
num1 = -1;
num2 = -1;

} 

void triangles () {

for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);

for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);

for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (hue02, 255, 255); }
LEDS.show();
delay (del01);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
LEDS.show();
(del01);
for (int i = 0; i< 99; i++) {
leds[Middle[i]] = CHSV (160, 255, 255); }
LEDS.show();
delay (del01);
for (int i = 0; i< 99; i++) {
leds[Middle[i]] = CHSV (160, 255, 0); }
LEDS.show();
(del01);
hue02 = hue02+10;
} 

void triangles1 () {
hue03++;

for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (hue03, 255, 255); }
LEDS.show();
delay (del02);
for (int i = 0; i< 99; i++){
leds[Wisdom[i]] = CHSV (0, 255, 0); }
LEDS.show();
hue03++;
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (hue03, 255, 255); }
LEDS.show();
delay (del02);
for (int i = 0; i< 99; i++){
leds[Courage[i]] = CHSV (0, 255, 0); }
LEDS.show();
hue03++;
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (hue03, 255, 255); }
LEDS.show();
delay (del02);
for (int i = 0; i< 99; i++){
leds[Power[i]] = CHSV (0, 255, 0); }
LEDS.show();


}
