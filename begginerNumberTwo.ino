void setup() {
pinMode(10, OUTPUT);
pinMode(2, INPUT_PULLUP);
}

void loop() {

int pushed = digitalRead(2);
if(pushed == LOW){
  digitalWrite(10,LOW);
}else{
digitalWrite(10, HIGH);
}
}
