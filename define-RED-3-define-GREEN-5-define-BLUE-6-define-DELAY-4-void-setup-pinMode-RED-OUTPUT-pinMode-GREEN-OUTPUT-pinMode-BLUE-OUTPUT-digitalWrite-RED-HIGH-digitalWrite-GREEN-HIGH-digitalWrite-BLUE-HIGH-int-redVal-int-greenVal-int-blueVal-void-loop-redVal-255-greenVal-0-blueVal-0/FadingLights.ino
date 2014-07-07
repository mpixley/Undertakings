#define RED 3
#define GREEN 5
#define BLUE 6
#define DELAY 4

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}

int redVal;
int greenVal;
int blueVal;

void loop() {
  redVal = 255;
  greenVal = 0;
  blueVal = 0;
  
  // Red fades to green 
  for(int i = 0; i <= 255; i = i + 1) {
    analogWrite(RED, i);
    analogWrite(GREEN, 255 - i);
    delay(DELAY);
 }
 
 for(int i = 0; i <= 255; i = i + 1) {
   analogWrite(GREEN, i);
    analogWrite(BLUE, 255 - i);
    delay(DELAY);
 }
 
 for(int i = 0; i <= 255; i = i + 1) {
   analogWrite(BLUE, i);
    analogWrite(RED, 255 - i);
    delay(DELAY);
 
 }}
