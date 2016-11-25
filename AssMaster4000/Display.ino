/*
void LCD_Display () {



 //keep this, you can copy the display conditions below into each mode and remove displays that can't be changed in that mode
 switch (md){
  case 0: {break; }
  case 1: {break; } 
  case 2: {break; }
  case 3: {break; }
  case 4: {break; }
  case 5: { break; }
  case 6: { break; }
  case 7: { break; }
  case 8: { break; }
  case 9: { break; }
  case 10: { break; }
  case 11: { break; }

 } 

 switch (lr){ 
  case 0: {lcd.setCursor(0,0); lcd.write("X:H"); 
  if (hue < 10) {lcd.setCursor(3,0); lcd.write("  "); lcd.setCursor(5,0);} else if (hue > 9 && hue < 100) {lcd.setCursor(3,0); lcd.write(" "); lcd.setCursor(4,0);} else if (hue > 99 && hue <260) {lcd.setCursor(3,0);}  lcd.print(hue); 
  lcd.setCursor(6,0); lcd.write(" S");  if (sat < 10) {lcd.setCursor(8,0); lcd.write("  "); lcd.setCursor(10,0);} else if (sat> 9 && sat < 100) {lcd.setCursor(8,0); lcd.write(" "); lcd.setCursor(9,0);} else if (sat> 99 && sat <260) {lcd.setCursor(8,0);} lcd.print(sat); 
  lcd.setCursor(11,0); lcd.write(" V");  if (val < 10) {lcd.setCursor(13,0); lcd.write("  "); lcd.setCursor(15,0);} else if (val> 9 && val < 100) {lcd.setCursor(13,0); lcd.write(" "); lcd.setCursor(14,0);} else if (val> 99 && val <260) {lcd.setCursor(13,0);} lcd.print(val);
  
  lcd.setCursor(0,1); lcd.write("  D"); if (del <10) { lcd.setCursor(3,1); lcd.write("   "); lcd.setCursor(6,1);} 
  if (del > 9 && del < 100) { lcd.setCursor(3,1); lcd.write("  "); lcd.setCursor(5,1);} 
  if (del > 99 && del < 1000) { lcd.setCursor(3,1); lcd.write(" "); lcd.setCursor(4,1);} 
  if (del > 999 && del < 10000) { lcd.setCursor(3,1);} lcd.print(del); 
  

  lcd.setCursor(7,1); lcd.write(" P"); if (pil <10) { lcd.setCursor(9,1); lcd.write("  "); lcd.setCursor(11,1);} 
  if (pil > 9 && pil <100) { lcd.setCursor(9,1); lcd.write(" "); lcd.setCursor(10,1);} 
  if (pil > 99 && pil <1000)  {lcd.setCursor(9,1);} lcd.print(pil); 
  
  
 lcd.setCursor(12,1); lcd.write(" M"); if (md < 10) { lcd.setCursor(14,1); lcd.write(" ");  lcd.setCursor(15,1);}
 if (md > 9 && md <100) {lcd.setCursor(14,1);} lcd.print(md); 
  
 
  break;}
  
  case 1: {lcd.setCursor(0,0); lcd.write("Y:H"); 
if (hue1 < 10) {lcd.setCursor(3,0); lcd.write("  "); lcd.setCursor(5,0);} else if (hue1 > 9 && hue1 < 100) {lcd.setCursor(3,0); lcd.write(" "); lcd.setCursor(4,0);} else if (hue1 > 99 && hue1 <260) {lcd.setCursor(3,0);}  lcd.print(hue1); 
lcd.setCursor(6,0); lcd.write(" S");  if (sat1 < 10) {lcd.setCursor(8,0); lcd.write("  "); lcd.setCursor(10,0);} else if (sat1> 9 && sat1 < 100) {lcd.setCursor(8,0); lcd.write(" "); lcd.setCursor(9,0);} else if (sat1> 99 && sat1 <260) {lcd.setCursor(8,0);} lcd.print(sat1);
lcd.setCursor(11,0); lcd.write(" V");  if (val1 < 10) {lcd.setCursor(13,0); lcd.write("  "); lcd.setCursor(15,0);} else if (val1> 9 && val1 < 100) {lcd.setCursor(13,0); lcd.write(" "); lcd.setCursor(14,0);} else if (val1> 99 && val1 <260) {lcd.setCursor(13,0);} lcd.print(val1);  


lcd.setCursor(0,1); lcd.write("  D"); if (del1 <10) { lcd.setCursor(3,1); lcd.write("   "); lcd.setCursor(6,1);} 
  if (del1 > 9 && del1 < 100) { lcd.setCursor(3,1); lcd.write("  "); lcd.setCursor(5,1);} 
  if (del1 > 99 && del1 < 1000) { lcd.setCursor(3,1); lcd.write(" "); lcd.setCursor(4,1);} 
  if (del1 > 999 && del1 < 10000) { lcd.setCursor(3,1);} lcd.print(del1); 


  lcd.setCursor(7,1); lcd.write(" P"); if (pil1 <10) { lcd.setCursor(9,1); lcd.write("  "); lcd.setCursor(11,1);} 
  if (pil1 > 9 && pil1 <100) { lcd.setCursor(9,1); lcd.write(" "); lcd.setCursor(10,1);} 
  if (pil1 > 99 && pil1 <1000)  {lcd.setCursor(9,1);} lcd.print(pil1); 
  
  lcd.setCursor(12,1); lcd.write(" M"); if (md <10) { lcd.setCursor(14,1); lcd.write(" ");  lcd.setCursor(15,1);}
 if (md >9 && md <100) {lcd.setCursor(14,1);} lcd.print(md); 
  

break;}
  } 
} */
 
