// Menyalakan LED Menggunakan Wemos D1
// Menyalakan LED dengan Aktif HIGH

void setup()
{
pinMode(D4, OUTPUT); // menjadikan PIN 4 sebagai OUTPUT
}

void loop()
{
// Menyalakan PIN 4 (HIGH = Memberi tegangan pada PIN 4)
digitalWrite(D4, HIGH); // Pause selama 1 detik
delay(1000);

// Mematikan PIN 4 (LOW = Tidak Memberi tegangan pada PIN 4)
digitalWrite(D4, LOW); // Pause selama 1 detik
delay(1000);
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
