#define trigPin 9
#define echoPin 10
#define ledPin  13

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;

  // Kirim pulsa ultrasonik
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Baca durasi echo
  duration = pulseIn(echoPin, HIGH);

  // Hitung jarak (dalam cm)
  distance = duration * 0.034 / 2;

  // Tampilkan di Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Jika tangan terdeteksi dekat (misal < 15 cm), nyalakan LED
  if (distance > 0 && distance < 15) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}
