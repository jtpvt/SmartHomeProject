//FSM for AC
byte ACstate = 0;//FSM for AC
byte HTstate = 2;//FSM for heater
byte LTstate = 4;//FSM for light

//FSM for AC
void ACloop() {
switch(ACstate){
  case 0:
    if (AC.MouseIsOver())
      {
        AC = new Button("AC: On", 20, 20, 100, 50);
        ACstate = 1;
      }
break;
  case 1:
  if(AC.MouseIsOver())
  {
    AC = new Button("AC: Off", 20, 20, 100, 50);
    ACstate = 0;
  }
break;
default:
break;}
}

//FSM for heater
void HTloop() {
switch(HTstate){
  case 2:
    if (Heater.MouseIsOver())
      {
        Heater = new Button("Heater: On", 150, 20, 100, 50);
        HTstate = 3;
      }
break;
  case 3:
  if(Heater.MouseIsOver())
  {
    Heater = new Button("Heater: Off", 150, 20, 100, 50);
    HTstate = 2;
  }
break;
default:
break;}
}

//FSM for light
void LTloop() {
switch(LTstate){
  case 4:
    if (Light.MouseIsOver())
      {
        Light = new Button("Light: On", 280, 20, 100, 50);
        LTstate = 5;
      }
break;
  case 5:
   if(Light.MouseIsOver())
  {
   Light = new Button("Light: Off", 280, 20, 100, 50);
    LTstate = 4;
  }
break;
default:
break;}
}
