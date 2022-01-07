void setup() {
pinMode(7,OUTPUT);//Rölenin bağlı olduğu pin
Serial.begin(9600);

}

void loop() {
  delay(1000);
  
  int isik = analogRead(A0); //Işık değişkenini A0 pinindeki LDR ile okuyoruz
  Serial.println(isik); //Okunan değeri seri iletişim ekranına yansıtıyoruz
  delay(50);
  if (isik <50 ) { //Okunan ışık değeri 900'den büyük ise
    Serial.println("Işık yandı");
    digitalWrite(7,LOW);  // Röleyi aktifleştir
  }
  if (isik >50) { //Okunan ışık değeri 850'den küçük ise
    Serial.println("Işık Kapandı");
    digitalWrite(7,HIGH);  // Röleyi pasifleştir
  }

}
