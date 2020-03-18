// Notes
const int G2 = 49;
const int G = 195;
const int A = 220;
const int B = 247;
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

// Speaker
const int buzzerPin = 9;

// Trimer
float potVal = 0;
 
void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);

  // Loop
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);  
  delay(250/2);
  beep(c, 250, potVal);  
  beep(c, 250, potVal);  
  beep(cH, 250, potVal); 

  // Loop
  beep(c, 250, potVal);  
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);  
  delay(250/2);
  beep(c, 250, potVal);  
  beep(cH, 250, potVal); 

  song2();
  song2();

  beep(c, 250, potVal);  
  beep(d, 250, potVal);  
  beep(e, 250, potVal);  
  beep(f, 250, potVal);  
  delay(250/2);
}
 
void loop()
{   
  // Drop
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);  
  delay(250/2);
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);  
  delay(250/2);

}

void song2()
{
  // Loop
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);  
  delay(250/2);
  beep(c, 250, potVal);  
  beep(c, 250, potVal);  
  beep(cH, 250, potVal); 

  // Loop
  beep(c, 250, potVal);  
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);  
  delay(250/2);
  beep(c, 250, potVal);  
  beep(cH, 250, potVal);    
  }

void startAlarm()
{
  //Play first section
  firstSection();
 
  //Play second section
  secondSection();
 
  //Variant 1
  beep(f, 250, potVal);  
  beep(gS, 500, potVal);  
  beep(f, 350, potVal);  
  beep(a, 125, potVal);
  beep(cH, 500, potVal);
  beep(a, 375, potVal);  
  beep(cH, 125, potVal);
  beep(eH, 650, potVal);
}
 
void beep(int note, int duration, float pitch)
{
  int freq = note * pitch;
    
  //Play tone on buzzerPin
  tone(buzzerPin, freq, duration/2);

  delay(duration/2);

  //Stop tone on buzzerPin
  noTone(buzzerPin);
  
  delay(10);
  
  potVal = analogRead(A0);
  potVal = potVal / 1023.0f;
}
 
void firstSection()
{
  beep(a, 500, potVal);
  beep(a, 500, potVal);    
  beep(a, 500, potVal);
  beep(f, 350, potVal);
  beep(cH, 150, potVal);  
  beep(a, 500, potVal);
  beep(f, 350, potVal);
  beep(cH, 150, potVal);
  beep(a, 650, potVal);
 
  delay(500);
 
  beep(eH, 500, potVal);
  beep(eH, 500, potVal);
  beep(eH, 500, potVal);  
  beep(fH, 350, potVal);
  beep(cH, 150, potVal);
  beep(gS, 500, potVal);
  beep(f, 350, potVal);
  beep(cH, 150, potVal);
  beep(a, 650, potVal);
 
  delay(500);
}
 
void secondSection()
{
  beep(aH, 500, potVal);
  beep(a, 300, potVal);
  beep(a, 150, potVal);
  beep(aH, 500, potVal);
  beep(gSH, 325, potVal);
  beep(gH, 175, potVal);
  beep(fSH, 125, potVal);
  beep(fH, 125, potVal);    
  beep(fSH, 250, potVal);
 
  delay(325);
 
  beep(aS, 250, potVal);
  beep(dSH, 500, potVal);
  beep(dH, 325, potVal);  
  beep(cSH, 175, potVal);  
  beep(cH, 125, potVal);  
  beep(b, 125, potVal);
  beep(cH, 250, potVal);  
 
  delay(350);
}
