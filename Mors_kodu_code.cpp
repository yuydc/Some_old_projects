const int ledPin = 13;

const int kisaSuresi = 200; 
const int uzunSuresi = 3 * kisaSuresi;

void kisa() {
  digitalWrite(ledPin, HIGH);
  delay(kisaSuresi);
  digitalWrite(ledPin, LOW);
  delay(kisaSuresi); 
}

void uzun() {
  digitalWrite(ledPin, HIGH);
  delay(uzunSuresi);
  digitalWrite(ledPin, LOW);
  delay(kisaSuresi); 
}

void Mors(char c) {
  c = toupper(c); 
  
  switch (c) {
    case 'A':
      kisa();
      uzun();
      break;
    case 'B':
      uzun();
      kisa();
      kisa();
      kisa();
      break;
    case 'C':
      uzun();
      kisa();
      uzun();
      kisa();
      break;
    case 'D':
      uzun();
      kisa();
      kisa();
      break;
    case 'E':
      kisa();
      break;
    case 'F':
      kisa();
      kisa();
      uzun();
      kisa();
      break;
    case 'G':
      uzun();
      uzun();
      kisa();
      break;
    case 'H':
      kisa();
      kisa();
      kisa();
      kisa();
      break;
    case 'I':
      kisa();
      kisa();
      break;
    case 'J':
      kisa();
      uzun();
      uzun();
      uzun();
      break;
    case 'K':
      uzun();
      kisa();
      uzun();
      break;
    case 'L':
      kisa();
      uzun();
      kisa();
      kisa();
      break;
    case 'M':
      uzun();
      uzun();
      break;
    case 'N':
      uzun();
      kisa();
      break;
    case 'O':
      uzun();
      uzun();
      uzun();
      break;
    case 'P':
      kisa();
      uzun();
      uzun();
      kisa();
      break;
    case 'Q':
      uzun();
      uzun();
      kisa();
      uzun();
      break;
    case 'R':
      kisa();
      uzun();
      kisa();
      break;
    case 'S':
      kisa();
      kisa();
      kisa();
      break;
    case 'T':
      uzun();
      break;
    case 'U':
      kisa();
      kisa();
      uzun();
      break;
    case 'V':
      kisa();
      kisa();
      kisa();
      uzun();
      break;
    case 'W':
      kisa();
      uzun();
      uzun();
      break;
    case 'X':
      uzun();
      kisa();
      kisa();
      uzun();
      break;
    case 'Y':
      uzun();
      kisa();
      uzun();
      uzun();
      break;
    case 'Z':
      uzun();
      uzun();
      kisa();
      kisa();
      break;
    case '0':
      uzun();
      uzun();
      uzun();
      uzun();
      uzun();
      break;
    case '1':
      kisa();
      uzun();
      uzun();
      uzun();
      uzun();
      break;
    case '2':
      kisa();
      kisa();
      uzun();
      uzun();
      uzun();
      break;
    case '3':
      kisa();
      kisa();
      kisa();
      uzun();
      uzun();
      break;
    case '4':
      kisa();
      kisa();
      kisa();
      kisa();
      uzun();
      break;
    case '5':
      kisa();
      kisa();
      kisa();
      kisa();
      kisa();
      break;
    case '6':
      uzun();
      kisa();
      kisa();
      kisa();
      kisa();
      break;
    case '7':
      uzun();
      uzun();
      kisa();
      kisa();
      kisa();
      break;
    case '8':
      uzun();
      uzun();
      uzun();
      kisa();
      kisa();
      break;
    case '9':
      uzun();
      uzun();
      uzun();
      uzun();
      kisa();
      break;
    case ' ':
      delay(kisaSuresi * 6); 
      break;
    default:
      break;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  String metin = "Uygar";
  for (int i = 0; i < metin.length(); i++) {
    Mors(metin[i]);
    delay(kisaSuresi * 3); 
  }
  delay(kisaSuresi * 100000000); 
}
