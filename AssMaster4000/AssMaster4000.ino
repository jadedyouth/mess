
#include <FastLED.h>
#include <LiquidCrystal.h>


#define LED_COUNT 297  
LiquidCrystal lcd(3, 5, 6, 9, 10 , 11);
#include <elapsedMillis.h>
elapsedMillis te;
struct CRGB leds[299];
/*
//switches
int md = 0; //mode
int mdsw;
int dmd;
int lr = 0; 
int lrsw; //leftright
int snd = 0;//automanual
int sndsw;
int df = 0; //defaults
int dfsw = 0; //defaultswitch
int cl;
int clsw;

*/
//counters
int cnt;
int num;
int num1;
int num2;
int plus = -2;
int pluus = -1;
int plus1 = -1;
/*
//defaults
int dhue;
int dsat;
int dval;
int ddel;
int dpil;
int dhue1;
int dsat1;
int dval1;
int ddel1;
int dpil1;

//writes
int wmd;
int whue;
int wsat;
int wval;
int wdel;
int wpil;
int whue1;
int wsat1;
int wval1;
int wdel1;
int wpil1;


//Pots
int del = 10;
int del1 = 50;
int hue = 0;
int sat = 255;
int val = 255;
int hue1 = 255;
int sat1 = 255;
int val1 = 255;
int pil = 100;
int pil1 = 100;

*/


//hues
int hue01 = 180;
int hue02 = 0;
int hue03 = 92;

int del01 = 350;
int del02 = 200;

       
//each side is 33, each triangle is 99
int Power[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 
52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
95, 96, 97, 98};

int Wisdom[] = {99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 
161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186,
187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197};

int Courage[] = {198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 
253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270,
271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297};

int Middle[] = {99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
95, 96, 97, 98, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198};


//198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230

//198 pixels in Triforce
int Triforce [] = {165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 297, 
296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 
270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256, 255, 254, 253, 252, 251, 250, 249, 248, 247, 246, 245, 244, 
243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 233,
232, 231, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 
52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 132, 133, 134, 135, 136, 137, 138, 139, 
140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 
161, 162, 163, 164};




int Power_Right[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

int Power_Left[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 
52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65};

int Power_Bottom[] = {66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
95, 96, 97, 98};


int Wisdom_Right[] = {99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131};

int Wisdom_Left[] = {132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 
161, 162, 163, 164};

int Wisdom_Bottom[] = {165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186,
187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197};


int Courage_Left[] = {198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230};

int Courage_Right[] = {231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 
253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263};

int Courage_Bottom[] = {264, 265, 266, 267, 268, 269, 270,
271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297};

int Middle_Left[] = {99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131};

int Middle_Top[] = {66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
95, 96, 97, 98};

int Middle_Right[] = {198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230};


int Triforce_Bottom [] = {165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186,
187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 264, 265, 266, 267, 268, 269, 270,
271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 
282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297};

int Triforce_Right [] = {231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 
253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};

int Triforce_Left [] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 
52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 132, 133, 134, 135, 136, 137, 138, 139, 
140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 
161, 162, 163, 164};







void setup() { 

  
  FastLED.addLeds<APA102,2,22,BGR>(leds, 297, 299);
 
  pinMode(13, INPUT);
  lcd.begin(16, 2); //(collumns, rows)
//startup (); // in 'Startup'
 Serial.begin(9600);
 FastLED.addLeds<APA102,49,48,BGR>(leds, 99); 
FastLED.addLeds<APA102,52,53,BGR>(leds, 99, 198); 
FastLED.addLeds<APA102,50,51,BGR>(leds, 198, LED_COUNT); 
clear_all (); 
randomSeed(analogRead(4));  
     
}

void loop() {


//checkPots (); 
//LCD_Display ();
//allswitches (); 


if (te > 0 && te <= 180000) { scroll_pulse ();}
if (te > 180000 && te <= 360000) { all_snake ();}
if (te > 360000 && te <= 540000) { snake_parallel (); }
if (te > 540000 && te <= 720000) { triangles ();}
if (te > 720000 && te <= 1260000) { explorer3 ();}
if (te > 1260000 && te <= 1440000) { triangles1 ();}
if (te > 1440000 && te <= 1620000) { random_strike ();}
if (te > 1620000) { clear_all (); te =0;}

/*






clear_all (); 

clear_all (); 
*/

//
//

//explorer ();
//explorer2 ();
//


/*
 
switch (md){
 case 0:  { all_snake (); break; } 
 case 1:  { all_pulse ();  break; } 
 case 2:  { snake_in_n_out ();  break; }
 case 3:  {   break; }
 case 4:  {   break; }
 case 5:  {  break; }
 break;
 }
*/

}