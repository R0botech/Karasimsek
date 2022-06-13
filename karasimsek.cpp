int led[8]={3,4,5,6,7,8,9,10};
int a = 8;
void setup(){
  pinMode(led[0],OUTPUT);
  pinMode(led[1],OUTPUT);
  pinMode(led[2],OUTPUT);
  pinMode(led[3],OUTPUT);
  pinMode(led[4],OUTPUT);
  pinMode(led[5],OUTPUT);
  pinMode(led[6],OUTPUT);
  pinMode(led[7],OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
   for (int i=0; i<8; i++) {
    digitalWrite(led[i], HIGH);
    delay(75);
    digitalWrite(led[i], LOW);
   }
  for (int j=7; j>-1; j--){
    digitalWrite(led[j], HIGH);
    delay(75);
    digitalWrite(led[j], LOW);}
}
