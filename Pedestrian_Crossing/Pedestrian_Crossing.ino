/*Traffic light Pedestrian Crossing
   Author : DS
   Date - 05/10/2022
*/


int GREEN = 11; int AMBER = 12; int RED = 13;
int DELAY_GREEN = 5000; int DELAY_AMBER = 2000; int DELAY_RED = 5000; int DELAY_RED_AMBER = 2500; 
int DELAY_PED_CROSSING = 5000;
int Pushbutton = 4;
int YELLOW = 8;


void setup() {
  // put your setup code here, to run once:
  //Defining Pins
  digitalWrite(GREEN, LOW);
  digitalWrite(AMBER, LOW);
  digitalWrite(GREEN,LOW);
  
  pinMode(GREEN, OUTPUT);
  pinMode(AMBER, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode (YELLOW, OUTPUT);
  
  pinMode(Pushbutton, INPUT);
}

int PedestrianCrossing = 0;

void loop()
{
  int PedestrianCrossing = digitalRead(Pushbutton);
  if (PedestrianCrossing ==1) {
    delay(15);
    if (digitalRead(Pushbutton) == 1) {
    PedCrossing();
    }
  }
  else
  green_light();
  delay(DELAY_GREEN);
  amber_light();
  delay (DELAY_AMBER);
  red_light();
  delay (DELAY_RED);
  red_amber_light();
  delay (DELAY_RED_AMBER);
}

void green_light()
{
  digitalWrite (GREEN, HIGH);
  digitalWrite (AMBER, LOW);
  digitalWrite (RED, LOW);
}
void amber_light()
{
  digitalWrite (GREEN, LOW);
  digitalWrite (AMBER, HIGH);
  digitalWrite (RED, LOW);
}
void red_light()
{
  digitalWrite (GREEN, LOW);
  digitalWrite (AMBER, LOW);
  digitalWrite (RED, HIGH);
}
void red_amber_light()
{
  digitalWrite (GREEN, LOW);
  digitalWrite (AMBER, HIGH);
  digitalWrite (RED, HIGH);
}
void PedCrossing()
{
  delay(DELAY_PED_CROSSING);
  digitalWrite (GREEN, LOW);
  digitalWrite (AMBER, LOW);
  digitalWrite (RED, HIGH);
  digitalWrite (YELLOW,HIGH);
  delay(1500);
  digitalWrite (YELLOW,LOW);
  for (int i = 0; i < 7; i++);
}
