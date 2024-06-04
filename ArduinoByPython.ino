void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = 3;
  int b = 4;
  int c;
  c = myFunction(a,b);
  Serial.println(c);
  delay(500);
}
int myFunction(int x, int y)
{
  int answer;
  answer = x*x + y*y;
  return answer;
}
