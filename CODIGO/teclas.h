#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); //Declaramos una variable para lcd

byte tecla_ini[] = { B11111, B10000, B10000, B10000, B10000, B10000, B10000, B11111 };
byte tecla_med[] = { B11111, B00000, B00000, B00000, B00000, B00000, B00000, B11111 };
byte tecla_fin[] = { B11111, B00001, B00001, B00001, B00001, B00001, B00001, B11111 };
byte press_full[]={ B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11111 };

void crea_teclas(){
  lcd.createChar(0, tecla_ini);
  lcd.createChar(1, tecla_med);
  lcd.createChar(2, tecla_fin);
  lcd.home();
  lcd.setCursor(1,1);
  lcd.write((byte)0);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.write(2);
}

void press_key_full(int columna,int index){
  lcd.createChar(0, tecla_ini);
  lcd.createChar(1, tecla_med);
  lcd.createChar(2, tecla_fin);
  lcd.createChar(3, press_full);
  lcd.home();
  lcd.setCursor(columna,1);
 
  switch (index)
  {
  case 2: //DO C4
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 3: //DO# CS4
    lcd.write((byte)0);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 4: //RE D4 
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 5: //RE# DS4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 6: //MI E4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 7: //FA F4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 8: //FA# FS4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 9: //SOL G4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 10: //SOL# GS4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 11: //LA A4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 12: //LA# AS4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(1);
    lcd.write(2);
    break;
  case 13: //SI B4
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(1);
    lcd.write(2);
    break;
  case 14: //Do2 C5
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    lcd.write(2);
    break;
    case 15: //DO2# CS5
    lcd.write((byte)0);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(1);
    lcd.write(3);
    break;
  }
}


void marquesina(String text, int columna, int fila){

  const int width = 18; //Ancho de mensaje visto

 for(int offset = 0; offset < text.length(); offset ++)
 {
  String t="";
  for(int i = 0; i < width; i ++)
  t += text.charAt((offset + i) % text.length());
  lcd.setCursor(columna,fila); // Situamos el cursor en la posición del LCD deseada,
  lcd.print(t); // Escribimos nuestro texto en el LCD. Realizará un salto de linea
 // automático si el texto es mayor que el tamaño del LCD
  delay(200);
 }

}