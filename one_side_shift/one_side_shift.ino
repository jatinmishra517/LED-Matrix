#define DATA 2
#define SHIFT 3
#define STORE 4

void store();
int pic[] = {0,36,36,36,0,66,60,0};
int A[] = {24,60,102,102,126,102,102,102};
int B[] = {124,102,102,124,126,102,102,124};
int test[] = {2,2,2,2,2,2,2,2};

void setup() {
  pinMode(DATA, OUTPUT);
  pinMode(SHIFT, OUTPUT);
  pinMode(STORE, OUTPUT);
}

void loop() {
//  for (int j=0; j<8; j++) {
    for (int i=0; i<8; i++) {
      shiftOut(DATA, SHIFT, LSBFIRST, ~B[i]);
      shiftOut(DATA, SHIFT, LSBFIRST, 128 >> i);
      store();
      delay(6);
    }
//    delay(12);
//  }
}

void store() {
  digitalWrite(STORE, HIGH);
  delayMicroseconds(10);
  digitalWrite(STORE, LOW);
  delayMicroseconds(10);
}
