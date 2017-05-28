int b1 = 2;
int b2 = 3;

int a1 = A0;

bool bb1 = 1;
bool bb2 = 1;

int ap1 = 0;

void setup() {
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  Serial.begin(115200);
  Serial.print("!");
}

void loop() {
  if(digitalRead(b1) != bb1){
    bb1 = !bb1;
    Serial.print("a");
    Serial.print(";");
    Serial.print(bb1);
    Serial.print("!");
  } else if(digitalRead(b2) != bb2){
    bb2 = !bb2;
    Serial.print("b");
    Serial.print(";");
    Serial.print(bb2);
    Serial.print("!");
  } else if(analogRead(a1) != ap1){
    ap1 = analogRead(a1);
    Serial.print("z");
    Serial.print(";");
    Serial.print(ap1);
    Serial.print("!");
  }
  delay(5);
}
