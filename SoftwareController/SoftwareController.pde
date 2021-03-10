//Codes for GUI

// Defining the buttons
Button AC;  
Button Heater;      
Button Light;
Button Message;
Button Weather;

color backgroundColor=color(102);
color fillColor=color(255);


void setup() {
  size (600, 150);//size of the window
  smooth();//smoothes the edges of the buttons
  
  // create the button object
  AC = new Button("AC: Off", 20, 20, 100, 50);
  Heater = new Button("Heater: Off", 150, 20, 100, 50);
  Light = new Button("Light: Off", 280, 20, 100, 50);
  Message = new Button("Message window", 110, 90, 400, 50);
  Weather = new Button("Current Temp: \n"+"Current Humidity: ", 410, 20, 170, 50);
  
  AlertMessages();
}
 
void draw() {
  background(backgroundColor);
  
  // draw the button in the window
  AC.Draw();
  Heater.Draw();
  Light.Draw();
  Message.Draw(); 
  Weather.Draw();
}

// when each button clicked, change the button to on
void mousePressed() {
  ACFSM();
  HTFSM();
  LTFSM();
}

// the Button class
class Button {
  String label; // button label
  float x;      // top left corner x position
  float y;      // top left corner y position
  float w;      // width of button
  float h;      // height of button
  
  // constructor
  Button(String labelB, float xpos, float ypos, float widthB, float heightB) {
    label = labelB;
    x = xpos;
    y = ypos;
    w = widthB;
    h = heightB;
  }   
 void Draw() {
    fill(255);
    stroke(141);
    rect(x, y, w, h, 10);
    textAlign(CENTER, CENTER);
    fill(0);
    text(label, x + (w / 2), y + (h / 2));
  } 
  boolean MouseIsOver() {
    if (mouseX > x && mouseX < (x + w) && mouseY > y && mouseY < (y + h)) {
      return true;
    }
    return false;
  }
}
