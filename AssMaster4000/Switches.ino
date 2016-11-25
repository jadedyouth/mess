/*
void allswitches () {
  automanual ();
  execute ();
  mode ();
  leftright ();
  cuelive();
}


void cuelive() {
 clsw = digitalRead(4);
 if (clsw == LOW){
 cl = 1; }
 if (clsw == HIGH) {
   cl = 0;} 

  Serial.println (whue);
}

void automanual (){ //replaced by last mode just cycling through. now controls whether pots are engaged or not
   dfsw = digitalRead(13);
 if (dfsw == LOW){
 df = 1; }
 if (dfsw == HIGH) {
   df = 0;} 
   
  } 

void execute () {
   sndsw = digitalRead(7);
 if (sndsw == LOW){
 
wmd = md;  
whue = hue;
wsat = sat;
wval = val;
wdel = del;
wpil = pil;
whue1 = hue1;
wsat1 = sat1;
wval1 = val1;
wdel1 = del1;
wpil1 = pil1;
  
  }
  
   
  }

void mode (){
  mdsw = digitalRead(8);
 if (mdsw == LOW){   
md = md+1;

 delay (150);
 }
 switch (dmd){
 case 0:  { dhue = 64; dsat = 220; dval = 255; ddel = 5; dpil = 0; dhue1 = 64; dsat1 = 255; dval1 = 0; ddel1 = 5; dpil1 = 255;  break; } 
 case 1:  {  dhue = 10; dsat = 10; dval = 10; ddel = 10; dpil = 10; dhue1 = 0; dsat1 = 255; dval1 = 255; ddel1 = 100; dpil1 = 100;  break; } 
 case 2:  {   break; }
 case 3:  {   break; }
 case 4:  {   break; }
 case 5:  { md = 0;  break; }
 break;
 } 
 
   }  

void leftright (){
  lrsw = digitalRead(12);
 if (lrsw == LOW){
 lr = 0; }
 else {
   lr = 1;} 
  }
  


*/
