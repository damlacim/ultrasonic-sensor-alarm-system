
//pinleri tanımladık
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

//değişkenler
long duration;
int distance;
int safetyDistance;


void setup() {
pinMode(trigPin, OUTPUT); //trigger pinini çıkış pini yaptık
pinMode(echoPin, INPUT); //echo'yu giriş pini yaptık
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); //seri iletişimi başlattık
}


void loop() {
digitalWrite(trigPin, LOW); //pini temizledik
delayMicroseconds(2);


digitalWrite(trigPin, HIGH); //trig 10 mikrosaniye boyunca yüksek tutuldu
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


duration = pulseIn(echoPin, HIGH); //echo pini okundu dalganın seyahet süresi mikrosaniye cinsinde alındı


distance= duration*0.034/2; //mesafe hesaplandı

safetyDistance = distance;
if (safetyDistance <= 5){
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
}


Serial.print("Distance: "); //mesafeyi yazdırdık
Serial.println(distance);
}
