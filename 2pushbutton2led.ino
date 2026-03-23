#define led1 4
#define led2 2

#define pushbutton1 9
#define pushbutton2 8

void setup() {
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(pushbutton1, INPUT);
  pinMode(pushbutton2, INPUT);
}

void loop() {

  bool x = digitalRead(pushbutton1);
  bool y = digitalRead(pushbutton2);

  if (x == 1) {
    digitalWrite(led1, HIGH);
  } 
  else {
    digitalWrite(led1, LOW);
  }

  if (y == 1) {
    digitalWrite(led2, HIGH);
  } 
  else {
    digitalWrite(led2, LOW);
  }

}