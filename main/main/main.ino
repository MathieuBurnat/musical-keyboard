const int piezoPin = 8;

int buttons[6] = {2};

// C, D, E, F || Aka Do, Ré, Mi, FA in french
int notes[] = {262, 294, 339, 349};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int keyValue = analogRead(A0);
  Serial.print(keyValue);

  if(keyValue == 1023){
    tone(piezoPin, notes[0]);
  }else if (keyValue >= 990 && keyValue <= 1010){
    tone(piezoPin, notes[1]);
  }else if (keyValue >= 505 && keyValue <= 515){
    tone(piezoPin, notes[2]);
  }else if (keyValue >= 5 && keyValue <= 10){
    tone(piezoPin, notes[3]);
  }else{
    noTone(8);
  }
}
