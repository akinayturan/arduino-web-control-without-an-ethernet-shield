// Ledlerin pin bağlantıarı
int led1 = 38;
int led2 = 40;
int led3 = 42;
int led4 = 44;
int led5 = 46;

// Tüm ledleri sondürmek için kullanılacak fonksiyon
void sondur(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
}
void ac(){
        digitalWrite(led1,HIGH);
        digitalWrite(led2,HIGH);
        digitalWrite(led3,HIGH);
        digitalWrite(led4,HIGH);
        digitalWrite(led5,HIGH);
}
void setup(){
 // Ledlerin bağlanacağı pinleri çıkış olarak ayarlıyoruz
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);  
  ac();
  delay(500);
  sondur(); // Tüm ledler başlangıçta sönük durumdadır.
  Serial.begin(9600);
}

void loop(){
  while(Serial.available()){
    int gelen = Serial.parseInt();  // programdan gelen değeri gelen adında değişkene atadık
    
    switch(gelen){
      case 0:
        digitalWrite(led1,HIGH);
      break;
      case 1:
        digitalWrite(led1,LOW);
      break;
      case 2:
        digitalWrite(led2,HIGH);
      break;
      case 3:
        digitalWrite(led2,LOW);
      break;
      case 4:
        digitalWrite(led3,HIGH);
      break;
      case 5:
        digitalWrite(led3,LOW);
      break;
      case 6:
        digitalWrite(led4,HIGH);
      break;
      case 7:
        digitalWrite(led4,LOW);
      break;
      case 8:
        digitalWrite(led5,HIGH);
      break;
      case 9:
        digitalWrite(led5,LOW);
      break;
    }
  }
  delay(100);
}
