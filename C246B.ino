const byte led_gpio=32;
int brightness=0;
int fadeAmount=5;

void setup() {
  // put your setup code here, to run once:
  ledcAttachPin(led_gpio,0);
  ledcSetup(0,4000,8);

}

void loop() {
  // put your main code here, to run repeatedly:
  ledcWrite(0,brightness);
  brightness = brightness + fadeAmount;
  if(brightness<=0||brightness>=255){
    fadeAmount=-fadeAmount;
  }
  delay(20);

}
