/*
  TITLE: KEYBOARD PIANO + PRESAVES TONES 
  
  AUTHOR: Rubén Lozano
  DATE: 15/06/23

  Plays a pitch that changes based on a changing
  input circuit:
  * 8 pushbuttons from +3.3V
  * 8 10K resistors
  * 8-ohm speaker on digital pin D4
  * Play presets tone on digital pin D5 (3 tones diferents, if you have sdcard)
*/


#include "Tone32.h" // library Tone32 mod
#include "presets.h" // Tonos prestablecidos
#include "teclas.h"  //Creación de teclas



const int play = 5;   // Botón para reproducción y pausa
const int next = 23;  // Botón para reproducir siguiente canción Guardada.
const int prev = 1;  // Botón para reproducir siguiente canción Guardada.
int Status_butt = 0; //


void setup()
{
  Serial.begin(115200);
  ledcSetup(BUZZER_CHANNEL, 800, 4);
  ledcAttachPin(buzzerPin, BUZZER_CHANNEL);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("Mini-Piano");
  lcd.setCursor(5, 1);
  lcd.print("ESP32 ");
  lcd.clear();
  marquesina("  Mini-Piano ",0,0);
  lcd.setCursor(5, 1);
  lcd.print("ESP32 ");
  crea_teclas();
  delay(300);
  pinMode(buzzerPin, OUTPUT);//SOUND OUT
  pinMode(5,INPUT);  //TOCAR MUSICA GRABADA

  //PINS PARA TECLADO 	  ESPAÑOL - INGLES
  pinMode(13, INPUT); //	DO		  	C 
  pinMode(34, INPUT); //	DO#	  		C#
  pinMode(12, INPUT); //	RE	  		D
  pinMode(35, INPUT); //	RE#	  		D# 
  pinMode(14, INPUT);  //	MI	  		E
  pinMode(27, INPUT); //	FA	  		F
  pinMode(15, INPUT); //	FA#	  		F# 
  pinMode(26, INPUT); //	SOL	  		G
  pinMode(2, INPUT);  //	SOL#  		G#
  pinMode(25, INPUT); //	LA	  		A
  pinMode(19, INPUT); //	LA#	  		A#
  pinMode(33, INPUT); //	SI	  		B
  pinMode(32, INPUT); //	DÖ	  		C2
  pinMode(18, INPUT); //	DÖ#	  		C2#
}

void loop()
{
  
  Status_butt=digitalRead(play);
  if (Status_butt==HIGH){
  midi();
  }else{
  key_tones();
  }
  //Serial.println(Status_butt);
  delay(10); // Delay a little bit to improve simulation performance
}


//FUNCTIONS
void key_tones(){
// if button press on Pin13 is detected "DO"
  if (digitalRead(13) == HIGH) {
    tone(buzzerPin, NOTE_C4, 100,BUZZER_CHANNEL); // play tone C4 = 262 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("DO");
    press_key_full(1,2);
  }

// if button press on Pin34 is detected "DO#"
  if (digitalRead(34) == HIGH) {
    tone(buzzerPin, NOTE_CS4, 100,BUZZER_CHANNEL); // play tone C4 = 262 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("DO#");
    press_key_full(1,3);
  }

  // if button press on Pin12 is detected "RE"
  if (digitalRead(12) == HIGH) {
    tone(buzzerPin, NOTE_D4, 100,BUZZER_CHANNEL); // play tone (D4 = 294 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("RE");
    press_key_full(1,4);
  }
    // if button press on Pin35 is detected "RE#"
  if (digitalRead(35) == HIGH) {
    tone(buzzerPin, NOTE_DS4, 100,BUZZER_CHANNEL); // play tone (D4 = 294 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("RE#");
    press_key_full(1,5);
  }

  // if button press on Pin9 is detected "MI"
  if (digitalRead(14) == HIGH) {
    tone(buzzerPin, NOTE_E4, 100,BUZZER_CHANNEL); // play tone (E4 = 330 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("MI");
    press_key_full(1,6);
  }
    // if button press on A1 is detected "FA"
  if (digitalRead(27) == HIGH) {
    tone(buzzerPin, NOTE_F4, 100,BUZZER_CHANNEL); // play tone (F4 = 349 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("FA");
    press_key_full(1,7);
  }
      // if button press on D15 is detected "FA#"
  if (digitalRead(15) == HIGH) {
    tone(buzzerPin, NOTE_FS4, 100,BUZZER_CHANNEL); // play tone (F4 = 349 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("FA#");
    press_key_full(1,8);
  }
  // if button press on 26 is detected "SOL"
  if (digitalRead(26) == HIGH) {
    tone(buzzerPin, NOTE_G4, 100,BUZZER_CHANNEL); // play tone (G4 = 392 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("SOL");
    press_key_full(1,9);
  }
  //if button press on 2 is detected "SOL#"
    if (digitalRead(2) == HIGH) {
    tone(buzzerPin, NOTE_GS4, 100,BUZZER_CHANNEL); // play tone (G4 = 392 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("SOL#");
    press_key_full(1,10);
  }
  // if button press on 25 is detected "LA"
  if (digitalRead(25) == HIGH) {
    tone(buzzerPin, NOTE_A4, 100,BUZZER_CHANNEL); // play tone (A4 = 440 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("LA");
    press_key_full(1,11);
  }
    // if button press on 19 is detected "LA#"
  if (digitalRead(19) == HIGH) {
    tone(buzzerPin, NOTE_AS4, 100,BUZZER_CHANNEL); // play tone (A4 = 440 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("LA#");
    press_key_full(1,12);
  }
    // if button press on 33 is detected "SI"
  if (digitalRead(33) == HIGH) {
    tone(buzzerPin, NOTE_B4, 100,BUZZER_CHANNEL); // play tone (B4 = 494 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("SI");
    press_key_full(1,13);
  }
  // if button press on 32 is detected "DO2"
  if (digitalRead(32) == HIGH) {
    tone(buzzerPin, NOTE_C5, 100,BUZZER_CHANNEL); // play tone (C5 = 523 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("DO2");
    press_key_full(1,14);
  }
    // if button press on 18 is detected "DO2#"
  if (digitalRead(18) == HIGH) {
    tone(buzzerPin, NOTE_CS5, 100,BUZZER_CHANNEL); // play tone (C5 = 523 Hz)
    lcd.clear();
    lcd.setCursor(8, 0);
    lcd.print("DO2#");
    press_key_full(1,15);
  }
}