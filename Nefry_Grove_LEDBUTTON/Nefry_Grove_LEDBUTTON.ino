#define LED A0      //LEDモジュールを挿したGroveコネクタ
#define BUTTON D2　 //BUTTONモジュールを挿したGroveコネクタ

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.print("LED = ");
  Serial.print(LED);
  Serial.print(", BUTTON = ");
  Serial.println(BUTTON);
}

void loop() {
  if (digitalRead(BUTTON)==1){ //BUTTONが押下された時の処理
    digitalWrite(LED, HIGH); //LEDを発行させるコード
    Serial.print("LED = ");
    Serial.print(HIGH);
  }else{
    digitalWrite(LED, LOW); //LEDを停止するコード
    Serial.print("LED = ");
    Serial.print(LOW);
  }
  
  Serial.print(", BUTTON = ");
  Serial.println(digitalRead(BUTTON));
  delay(300);
}
