int s0hue = 160;
int s0sat = 255;
int s0ran;

int s0del0 = 100;
int s0del1 = 100;

void strike_one () {

strike_blue_cl ();
strike_blue_cr ();
strike_blue_cb ();
strike_blue_wr ();
strike_blue_wl ();
strike_blue_wb ();
strike_blue_pr ();
strike_blue_pl ();
strike_blue_pb ();

}

void strike_two () {
strike_white_cl ();
strike_white_cr ();
strike_white_cb ();
strike_white_wr ();
strike_white_wl ();
strike_white_wb ();
strike_white_pr ();
strike_white_pl ();
strike_white_pb ();
}


void random_strike () {
s0ran = random(0, 18);

switch (s0ran){
    case 0: strike_blue_cl (); break;
    case 1: strike_blue_cr (); break;
    case 2: strike_blue_cb ();break;
    case 3: strike_blue_wr (); break;
    case 4: strike_blue_wl (); break;
     case 5: strike_blue_wb (); break;
    case 6: strike_blue_pr (); break;
    case 7: strike_blue_pl (); break;
    case 8: strike_blue_pb (); break;
    case 9: strike_white_cl (); break;
     case 10: strike_white_cr (); break;
    case 11: strike_white_cb (); break;
    case 12: strike_white_wr (); break;
    case 13: strike_white_wl (); break;
    case 14: strike_white_wb (); break;
     case 15: strike_white_pr (); break;
    case 16: strike_white_pl (); break;
    case 17: strike_white_pb (); break;
    break;
}
  
}

//blue
void strike_blue_cl () {
for (int i = 0; i< 33; i++){
leds[Courage_Left[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Courage_Left[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}


void strike_blue_cr () {
for (int i = 0; i< 33; i++){
leds[Courage_Right[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Courage_Right[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_blue_cb (){
for (int i = 0; i< 33; i++){
leds[Courage_Bottom[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Courage_Bottom[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}


void strike_blue_wr (){
for (int i = 0; i< 33; i++){
leds[Wisdom_Right[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Wisdom_Right[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_blue_wl (){
for (int i = 0; i< 33; i++){
leds[Wisdom_Left[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Wisdom_Left[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_blue_wb (){
for (int i = 0; i< 33; i++){
leds[Wisdom_Bottom[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Wisdom_Bottom[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_blue_pr (){
for (int i = 0; i< 33; i++){
leds[Power_Right[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Power_Right[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_blue_pl (){
for (int i = 0; i< 33; i++){
leds[Power_Left[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Power_Left[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}
void strike_blue_pb (){
for (int i = 0; i< 33; i++){
leds[Power_Bottom[i]] = CHSV (s0hue, s0sat, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Power_Bottom[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1);
}

//white

void strike_white_cl () {
for (int i = 0; i< 33; i++){
leds[Courage_Left[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Courage_Left[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}


void strike_white_cr () {
for (int i = 0; i< 33; i++){
leds[Courage_Right[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Courage_Right[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_white_cb (){
for (int i = 0; i< 33; i++){
leds[Courage_Bottom[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Courage_Bottom[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}


void strike_white_wr (){
for (int i = 0; i< 33; i++){
leds[Wisdom_Right[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Wisdom_Right[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_white_wl (){
for (int i = 0; i< 33; i++){
leds[Wisdom_Left[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Wisdom_Left[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_white_wb (){
for (int i = 0; i< 33; i++){
leds[Wisdom_Bottom[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Wisdom_Bottom[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_white_pr (){
for (int i = 0; i< 33; i++){
leds[Power_Right[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Power_Right[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}

void strike_white_pl (){
for (int i = 0; i< 33; i++){
leds[Power_Left[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Power_Left[i]] = CHSV (s0hue, 0, 0); }
LEDS.show();
  delay (s0del1);
}
void strike_white_pb (){
for (int i = 0; i< 33; i++){
leds[Power_Bottom[i]] = CHSV (s0hue, 0, 255); }
LEDS.show();
delay (s0del0);
for (int i = 0; i< 33; i++){
leds[Power_Bottom[i]] = CHSV (s0hue, s0sat, 0); }
LEDS.show();
  delay (s0del1); }
