int salida = 2;
String scaneado;
void setup() {
  // inicializar GPIO 2 como salida
  pinMode(salida, OUTPUT);
  Serial.begin(9600);
  digitalWrite(salida, LOW);

}

// la función loop corre continuamente
void loop() {
  if (Serial.available() > 0)
  {
    scaneado = Serial.readStringUntil('\n');
    if (scaneado == "001589") {
      digitalWrite(salida, HIGH);
      delay(300);
      digitalWrite(salida, LOW);
      delay(300);
      Serial.write("scanner");
    }
  }


}
