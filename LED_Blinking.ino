void setup(){
  pinmode(LED_BUILTIN, OUTPUT);
}
void llop (){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
