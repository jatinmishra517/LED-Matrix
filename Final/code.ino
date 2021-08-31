#include<stdint.h>
int t=19000;int seconds,minutes,hours;
const int strclock=11;
const int mainclock=10;
const int datainput=12;//try to make a pointer array or some sort of array of all the elements to access easily
byte A[] = {B00011000,B00111100,B01100110,B01100110,B01111110,B01111110,B01100110,B01100110};
byte B[] = {B01111100,B01100110,B01100110,B01111100,B01111110,B01100110,B01100110,B01111100};
byte C[] = {B00111110,B01111110,B01100000,B01100000,B01100000,B01100000,B01111110,B00111110};
byte D[] = {B01111000,B01111100,B01100110,B01100110,B01100110,B01100110,B01111100,B01111000};
byte E[] = {B01111110,B01111110,B01100000,B01111110,B01111110,B01100000,B01111110,B01111110};
byte F[] = {B01111110,B01111110,B01100000,B01111100,B01111100,B01100000,B01100000,B01100000};
byte G[] = {B00111000,B01111100,B01100100,B01100000,B01101110,B01100100,B01111100,B00111000};
byte H[] = {B01100110,B01100110,B01100110,B01111110,B01111110,B01100110,B01100110,B01100110};
byte I[] = {B01111110,B01111110,B00011000,B00011000,B00011000,B00011000,B01111110,B01111110};
byte J[] = {B01111110,B01111110,B00011000,B00011000,B00011000,B00011000,B01111000,B01110000};
byte K[] = {B01100110,B01101100,B01111000,B01110000,B01110000,B01111000,B01101100,B01100110};
byte L[] = {B01100000,B01100000,B01100000,B01100000,B01100000,B01100000,B01111110,B01111110};
byte M[] = {B01000010,B01100110,B01111110,B01011010,B01000010,B01000010,B01000010,B01000010};
byte N[] = {B01000110,B01100110,B01100110,B01110110,B01111110,B01101110,B01100110,B01100110};
byte O[] = {B00111100,B01111110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100};
byte P[] = {B01111000,B01111100,B01100110,B01100110,B01111100,B01111000,B01100000,B01100000};
byte Q[] = {B00111100,B01000010,B01000010,B01000010,B01000010,B01001010,B00111100,B00000010};
byte R[] = {B01111100,B01100110,B01100110,B01101100,B01111000,B01111000,B01101100,B01100110};
byte S[] = {B00111100,B01111110,B01100000,B01111100,B00111110,B00000110,B01111110,B00111100};//{B00111000,B01111100,B01100000,B00110000,B00011000,B00001100,B00111100,B01111000};
byte T[] = {B01111110,B01111110,B00011000,B00011000,B00011000,B00011000,B00011000,B00011000};
byte U[] = {B01100110,B01100110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100};
byte V[] = {B01100110,B01100110,B01100110,B01100110,B01100110,B01100110,B00111100,B00011000};
byte W[] = {B01000010,B01000010,B01000010,B01000010,B01000010,B01011010,B01011010,B00100100};
byte X[] = {B01100110,B01100110,B01100110,B00111100,B00011000,B00111100,B01100110,B01100110};
byte Y[] = {B01100110,B01100110,B01100110,B01111110,B00111100,B00011000,B00011000,B00011000};
byte Z[] = {B01111110,B01111110,B00000110,B00001100,B00011000,B00110000,B01111110,B01111110};
byte Zero[]   = {B00111100,B01111110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100}; 
byte One[]    = {B00011000,B00111000,B01111000,B00011000,B00011000,B00011000,B01111110,B01111110}; 
byte Two[]    = {B00111100,B01111110,B01000110,B00001100,B00011000,B00110000,B01111110,B01111110};
byte Three[]  = {B01111100,B01111110,B00000110,B00111110,B00111110,B00000110,B01111110,B01111100};
byte Four[]   = {B00001100,B00011100,B00111100,B01101100,B01111110,B01111110,B00001100,B00001100};
byte Five[]   = {B01111110,B01111110,B01100000,B01111100,B00111110,B00000110,B01111110,B01111100};
byte Six[]    = {B00001100,B00011000,B00110000,B01111100,B01111110,B01100110,B01100110,B00111100};
byte Seven[]  = {B01111110,B01111110,B00000110,B00000110,B00001100,B00011000,B00110000,B01100000}; 
byte Eight[]  = {B00111100,B01100110,B01100110,B00111100,B01111110,B01100110,B01100110,B00111100}; 
byte Nine[]   = {B00111100,B01100110,B01100110,B01111110,B00111110,B00001100,B00011000,B00110000};
byte numbers[10][8]= {{B00111100,B01111110,B01100110,B01100110,B01100110,B01100110,B01111110,B00111100}, 
{B00011000,B00111000,B01111000,B00011000,B00011000,B00011000,B01111110,B01111110}, 
{B00111100,B01111110,B01000110,B00001100,B00011000,B00110000,B01111110,B01111110},
{B01111100,B01111110,B00000110,B00111110,B00111110,B00000110,B01111110,B01111100},
{B00001100,B00011100,B00111100,B01101100,B01111110,B01111110,B00001100,B00001100},
{B01111110,B01111110,B01100000,B01111100,B00111110,B00000110,B01111110,B01111100},
{B00001100,B00011000,B00110000,B01111100,B01111110,B01100110,B01100110,B00111100},
{B01111110,B01111110,B00000110,B00000110,B00001100,B00011000,B00110000,B01100000}, 
{B00111100,B01100110,B01100110,B00111100,B01111110,B01100110,B01100110,B00111100}, 
{B00111100,B01100110,B01100110,B01111110,B00111110,B00001100,B00011000,B00110000}};
short cartoon11[]={960,4080,8184,16380,13260,8580,31206,31206,29646,32766,32766,32766,32766,31710,12684,0};
short cartoon12[]={960,4080,8184,16380,13260,8580,31206,31206,29646,32766,32766,32766,32766,7920,3168,0};
short cartoon13[]={960,4080,8184,16380,13260,8580,26526,26526,29646,32766,32766,32766,32766,31710,12684,0};
short cartoon14[]={960,4080,8184,16380,13260,8580,26526,26526,29646,32766,32766,32766,32766,7920,3168,0};
short cartoon21[]={0,0,0,0,7680,16128,32640,32694,32694,32640,16128,7680,0,0,0,0};
short cartoon22[]={0,0,0,0,7680,16128,32256,32152,32152,32256,16128,7680,0,0,0,0};
short cartoon23[]={0,0,0,0,7680,16128,32640,32664,32664,32640,16128,7680,0,0,0,0};


void setup() {
  // put your setup code here, to run once:

  pinMode(strclock,OUTPUT);
  pinMode(mainclock,OUTPUT);
  pinMode(datainput,OUTPUT);
}
//------------------clock print(8*8)---------------------------//
void clock(int t){
    seconds=t%60;
    minutes=(t/60)%60;
    hours=(t/3600)%24;
    for(int j=0;j<20;j++){
    for(int i=0;i<8;i++){   
    inputrow(128>>i);inputrow(128>>i);inputrow(128>>i);inputrow(128>>i);inputrow(128>>i);inputrow(128>>i);
    input(numbers[firstdigit(seconds)][i]);input(numbers[seconddigit(seconds)][i]);
    input(numbers[firstdigit(minutes)][i]);input(numbers[seconddigit(minutes)][i]);
    input(numbers[firstdigit(hours)][i]);input(numbers[seconddigit(hours)][i]);
//    input(Nine[i]);input(Nine[i]);input(Nine[i]);input(Nine[i]);input(Nine[i]);input(Nine[i]);
    strclockpulse();delay(5);
  }
  }
}
void input(byte a){
  
  for(int i=7;i>=0;i--){
    if(((~a >> i) & 0x01)==1){
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH); 
      digitalWrite(mainclock,LOW);
      digitalWrite(datainput,LOW);
    }
    else if(((~a >> i) & 0x01)==0){
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      digitalWrite(mainclock,LOW);
    }
  }
}

void inputrow(int a){
  
  for(int i=0;i<8;i++){
    if(((~a >> i) & 0x01)==0){
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH);
      
      digitalWrite(mainclock,LOW);
      
      digitalWrite(datainput,LOW);
    }
    else if(((~a >> i) & 0x01)==1){
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      
      digitalWrite(mainclock,LOW);
    }
  }
}
void printit(byte array[]){
    for(int i=0;i<8;i++){
      
    inputrow(256>>i);inputrow(256>>i);inputrow(256>>i);
    input(array[i]);
    

    strclockpulse();
    delay(10);
  }
}

int firstdigit(int a){
  a=a%10;
  return a;
}
int seconddigit(int a){
  a=a/10;
  return a;
}


//--------------------------------------------------------------//
void strclockpulse(){
  digitalWrite(strclock,HIGH);
  digitalWrite(strclock,LOW);
}


//---------------------alphabets(scroll 16*16)----------------//
void input88(int datainput,int mainclock,byte a){
  
  
  for(int i=0;i<8;i++){
    if(((~a >> i) & 0x01)==0){
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH); 
      digitalWrite(mainclock,LOW);
      digitalWrite(datainput,LOW);
//----------------------//
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH);
      digitalWrite(mainclock,LOW);
      digitalWrite(datainput,LOW);
    }
    else if(((~a >> i) & 0x01)==1){
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      digitalWrite(mainclock,LOW);
      //-----------//
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      digitalWrite(mainclock,LOW);
      
    }
  }
}

void inputrow88(int a){
  
  for(int i=0;i<16;i++){
    if(((~a >> i) & 0x01)==1){
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH);
      
      digitalWrite(mainclock,LOW);
      
      digitalWrite(datainput,LOW);
    }
    else if(((~a >> i) & 0x01)==0){
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      
      digitalWrite(mainclock,LOW);
    }
  }
}
void printit88(byte array[]){
 for(int j=7;j>0;j--){
    for(int i=0;i<16;i++){
      
    inputrow88(32768>>i);
    //shiftOut(datainput,mainclock,MSBFIRST,128);
    input88(datainput,mainclock,array[i/2]>>j);
    

    strclockpulse();
    delay(10);
  }
  }
    for(int j=0;j<8;j++){
    for(int i=0;i<16;i++){
      
    inputrow88(32768>>i);
    //shiftOut(datainput,mainclock,MSBFIRST,128);
    input88(datainput,mainclock,array[i/2]<<j);
    

    strclockpulse();
    delay(5);
  }
  }
}

//--------------------cartoon------------------------//
void input16(int datainput,int mainclock,short a){
  
  
  for(int i=0;i<16;i++){
    if(((~a >> i) & 0x01)==0){
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH); 
      digitalWrite(mainclock,LOW);
      digitalWrite(datainput,LOW);
    }
    else if(((~a >> i) & 0x01)==1){
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      digitalWrite(mainclock,LOW);
    }
  }
}

void inputrow16(int a){
  
  for(int i=0;i<16;i++){
    if(((~a >> i) & 0x01)==1){
      digitalWrite(datainput,HIGH);
      digitalWrite(mainclock,HIGH);
      
      digitalWrite(mainclock,LOW);
      
      digitalWrite(datainput,LOW);
    }
    else if(((~a >> i) & 0x01)==0){
      digitalWrite(datainput,LOW);
      digitalWrite(mainclock,HIGH);
      
      digitalWrite(mainclock,LOW);
    }
  }
}
void printit16(short array[]){
 for(int k=0;k<5;k++){
    for(int i=0;i<16;i++){
      
    inputrow16(32768>>i);
    
    input16(datainput,mainclock,array[i]);
    

    strclockpulse();
    delay(2);
  }  
 }
}
void loop() {
/*  
///cartoon 1
for(int i=0;i<5;i++){
  printit16(cartoon11);
  printit16(cartoon12);
  printit16(cartoon13);
  printit16(cartoon14);
}

  
///cartoon 2
for(int i=0;i<5;i++){
  printit16(cartoon21);
  printit16(cartoon22);
  printit16(cartoon23);
}
*/
  
///alphabetscroll

/*  printit88(L);
  printit88(E);
  printit88(D);
  printit88(M);
  printit88(A);
  printit88(T);
  printit88(R);
  printit88(I);
  printit88(X);
  printit88(P);
  printit88(R);
  printit88(O);
  printit88(J);
  printit88(E);
  printit88(C);
  printit88(T);*/

/// clock

 clock(t);
  t=t+1;
 
}
