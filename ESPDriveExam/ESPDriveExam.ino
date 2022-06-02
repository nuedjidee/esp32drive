
#define FORWARD 1
#define BACKWARD 2
#define BRAKE 3
#define RELEASE 4
void setup()
{
  Serial.begin(9600);

}
void loop()
{
  for (int i = 0 ; i < 256; i++) {
    f(i);
    delay(10);
  }
  for (int i = 255 ; i > 0; i--) {
    f(i);
    delay(10);
  }
  for (int i = 0 ; i < 256; i++) {
    b(i);
    delay(10);
  }
  for (int i = 255 ; i > 0; i--) {
    b(i);
    delay(10);
  }

}
void f(int sp) {
  motor(1, FORWARD, sp);
  motor(2, FORWARD, sp);
}
void r(int sp) {
  motor(1, FORWARD, sp);
  motor(2, BACKWARD, sp);
}
void l(int sp) {
  motor(1, BACKWARD, sp);
  motor(2, FORWARD, sp);
}
void b(int sp) {
  motor(1, BACKWARD, sp);
  motor(2, BACKWARD, sp);
}
void s() {
  motor(1, RELEASE, 0);
  motor(2, RELEASE, 0);
}
