#define ROW_1 A0
#define ROW_2 4
#define ROW_3 5
#define ROW_4 11
#define ROW_5 7
#define ROW_6 12
#define ROW_7 A2
#define ROW_8 A3

#define COL_1 10
#define COL_2 A1
#define COL_3 9
#define COL_4 13
#define COL_5 2
#define COL_6 8
#define COL_7 3
#define COL_8 6

void setup() {
  pinMode(ROW_1, OUTPUT);
  pinMode(ROW_2, OUTPUT);
  pinMode(ROW_3, OUTPUT);
  pinMode(ROW_4, OUTPUT);
  pinMode(ROW_5, OUTPUT);
  pinMode(ROW_6, OUTPUT);
  pinMode(ROW_7, OUTPUT);
  pinMode(ROW_8, OUTPUT);
  pinMode(COL_1, OUTPUT);
  pinMode(COL_2, OUTPUT);
  pinMode(COL_3, OUTPUT);
  pinMode(COL_4, OUTPUT);
  pinMode(COL_5, OUTPUT);
  pinMode(COL_6, OUTPUT);
  pinMode(COL_7, OUTPUT);
  pinMode(COL_8, OUTPUT);
}
void loop() {
  digitalWrite(COL_1, HIGH);
  digitalWrite(COL_2, HIGH);
  digitalWrite(COL_3, HIGH);
  digitalWrite(COL_4, HIGH);
  digitalWrite(COL_5, HIGH);
  digitalWrite(COL_6, HIGH);
  digitalWrite(COL_7, HIGH);
  digitalWrite(COL_8, HIGH);
  digitalWrite(ROW_2, HIGH);
  digitalWrite(ROW_3, HIGH);
  digitalWrite(ROW_4, HIGH);
  digitalWrite(ROW_5, HIGH);
  digitalWrite(ROW_6, HIGH);
  digitalWrite(ROW_7, HIGH);
  digitalWrite(ROW_8, HIGH);

  delay(50); 

    digitalWrite(COL_1, LOW);
  digitalWrite(COL_2, LOW);
  digitalWrite(COL_3, LOW);
  digitalWrite(COL_4, LOW);
  digitalWrite(COL_5, LOW);
  digitalWrite(COL_6, LOW);
  digitalWrite(COL_7, LOW);
  digitalWrite(COL_8, LOW);
  digitalWrite(ROW_2, LOW);
  digitalWrite(ROW_3, LOW);
  digitalWrite(ROW_4, LOW);
  digitalWrite(ROW_5, LOW);
  digitalWrite(ROW_6, LOW);
  digitalWrite(ROW_7, LOW);
  digitalWrite(ROW_8, LOW);

  /*----------------*/
  
  digitalWrite(COL_5, HIGH);
  delay(50);
  digitalWrite(COL_5, LOW);

  /*-------------------------------*/
   
  digitalWrite(COL_1, HIGH);
  digitalWrite(COL_2, HIGH);
  digitalWrite(COL_3, HIGH);
  digitalWrite(COL_4, HIGH);
  digitalWrite(ROW_2, HIGH);
  digitalWrite(ROW_3, HIGH);
  digitalWrite(ROW_4, HIGH);
  digitalWrite(ROW_5, HIGH);
  digitalWrite(ROW_6, HIGH);
  digitalWrite(ROW_7, HIGH);
  digitalWrite(ROW_1, HIGH);
  delay(50); 
    digitalWrite(COL_1, LOW);
  digitalWrite(COL_2, LOW);
  digitalWrite(COL_3, LOW);
  digitalWrite(COL_4, LOW);
  digitalWrite(ROW_2, LOW);
  digitalWrite(ROW_3, LOW);
  digitalWrite(ROW_4, LOW);
  digitalWrite(ROW_5, LOW);
  digitalWrite(ROW_6, LOW);
  digitalWrite(ROW_7, LOW);
  digitalWrite(ROW_1, LOW);
  /*---------------------------------*/
  
  digitalWrite(COL_1, HIGH);
  digitalWrite(ROW_2, HIGH);
  digitalWrite(ROW_3, HIGH);
  digitalWrite(ROW_4, HIGH);
  digitalWrite(ROW_1, HIGH);

  delay(50); 
  digitalWrite(COL_1, LOW);
  digitalWrite(ROW_2, LOW);
  digitalWrite(ROW_3, LOW);
  digitalWrite(ROW_4, LOW);
  digitalWrite(ROW_1, LOW);

}
