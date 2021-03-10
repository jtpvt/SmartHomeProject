//The tab for boolean expressions for low and high temps, humidity, intruder alerts, and light intensity

//boolean expressions for low and high temps
boolean LowTemp(){
//If temp is low, return true
//else return false  
  return false;
}

boolean HighTemp(){
//If temp is high, return true
//else return false  
  return false;
}

//Boolean expressions for low and high humidity
boolean LowHumid(){
//If humidity is low, return true
//else return false  
  return false;
}

boolean HighHumid(){
//If humidity is high, return true
//else return false  
  return false;
}

//Boolean expressions for intruder alerts
boolean Intruder(){
//if intruder is detected, return true
//else return false
  return false;
}

//Boolean expression for low light intensity
boolean LowLight(){
//if light is too dim, return true
//else return false
  return false;
}

//Print different messages when input is high/low
void AlertMessages(){   
if (LowTemp()){
Message = new Button("Low temp, Heater is on.", 110, 90, 400, 50);
}
else if (HighTemp()){
Message = new Button("High temp, AC is on.", 110, 90, 400, 50);
}

if (LowHumid()){
Message = new Button("Low humidity.", 110, 90, 400, 50);
}
else if (HighHumid()){
Message = new Button("High humidity.", 110, 90, 400, 50);
}

if (Intruder()){
Message = new Button("Intruder appears!", 110, 90, 400, 50);
}

if (LowLight()){
Message = new Button("Light is too low!", 110, 90, 400, 50);
}
}
