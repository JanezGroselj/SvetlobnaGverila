
#define LevoOkoLevaZenica 11
#define LevoOkoSredinskaZenica 12
#define LevoOkoDesnaZenica 9
#define LevoOkoVeka 10
#define DesnoOkoLevaZenica 7
#define DesnoOkoSredinskaZenica 6
#define DesnoOkoDesnaZenica 8
#define DesnoOkoVeka 5
int zamik = 1000;

void setup() {
  pinMode(LevoOkoLevaZenica, OUTPUT);
  pinMode(LevoOkoSredinskaZenica, OUTPUT);
  pinMode(LevoOkoDesnaZenica, OUTPUT);
  pinMode(LevoOkoVeka, OUTPUT);
  pinMode(DesnoOkoLevaZenica, OUTPUT);
  pinMode(DesnoOkoSredinskaZenica, OUTPUT);
  pinMode(DesnoOkoDesnaZenica, OUTPUT);
  pinMode(DesnoOkoVeka, OUTPUT);


}

void loop() {
  digitalWrite(LevoOkoLevaZenica, 0);
  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(LevoOkoDesnaZenica, 0);
  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoLevaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoDesnaZenica, 0);
  digitalWrite(DesnoOkoVeka, 0);
  delay(3000);

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(DesnoOkoDesnaZenica, 255);
  digitalWrite(LevoOkoDesnaZenica, 255);
  delay(random(2000, 2500));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(DesnoOkoDesnaZenica, 0);
  digitalWrite(LevoOkoDesnaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoDesnaZenica, 255);
  digitalWrite(DesnoOkoDesnaZenica, 255);
  delay(random(2000, 3000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(DesnoOkoDesnaZenica, 0);
  digitalWrite(LevoOkoDesnaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoDesnaZenica, 255);
  digitalWrite(DesnoOkoDesnaZenica, 255);
  delay(random(2000, 3000));

  digitalWrite(LevoOkoDesnaZenica, 0);
  digitalWrite(DesnoOkoDesnaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  delay(random(2000, 3000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoLevaZenica, 255);
  digitalWrite(LevoOkoLevaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(LevoOkoLevaZenica, 0);
  digitalWrite(DesnoOkoLevaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(DesnoOkoLevaZenica, 255);
  digitalWrite(LevoOkoLevaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(LevoOkoLevaZenica, 0);
  digitalWrite(DesnoOkoLevaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(DesnoOkoLevaZenica, 255);
  digitalWrite(LevoOkoLevaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(DesnoOkoLevaZenica, 0);
  digitalWrite(LevoOkoLevaZenica, 0);
  digitalWrite(DesnoOkoDesnaZenica, 255);
  digitalWrite(LevoOkoDesnaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(DesnoOkoDesnaZenica, 0);
  digitalWrite(LevoOkoDesnaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(DesnoOkoDesnaZenica, 255);
  digitalWrite(LevoOkoDesnaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(DesnoOkoDesnaZenica, 0);
  digitalWrite(LevoOkoDesnaZenica, 0);
  delay(random(4000, 7000));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(500, 1000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(1000, 2000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 0);
  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 0);
  delay(random(130, 180));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(2000, 4000));

  digitalWrite(LevoOkoVeka, 0);
  digitalWrite(DesnoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 0);
  digitalWrite(DesnoOkoSredinskaZenica, 255);
  delay(random(200, 300));

  digitalWrite(LevoOkoVeka, 255);
  digitalWrite(LevoOkoSredinskaZenica, 255);
  delay(random(2000, 4000));


}
