// SoftwareController.pde
/*
 * GUI application for smart home
 */
 
 import controlP5.*;
 import processing.serial.*;
 
 Serial port;
 ControlP5 cp5;
 PFont titleFont, buttonFont;
 
 void setup()
 {
   size(800, 600);
   
  //port = new Serial(this, "COM5", 9600);  // IMPORTANT!! - Port name must be changed depending on device
   cp5 = new ControlP5(this);
   titleFont = createFont("calibri light", 40);
   buttonFont = createFont("calibri light", 14);
   
   makeButtons();
 }
 
 void draw()
 {
   background(50, 50, 50);
   
   fill(255, 255, 255);
   textFont(titleFont);
   textAlign(CENTER);
   text("Smart Home", 400, 100);
 }
 
 void makeButtons()
 {
   cp5.addButton("testLight")
      .setPosition(100, 100)
      .setSize(100, 70)
      .setFont(buttonFont);
   cp5.addButton("reset")
      .setPosition(100, 200)
      .setSize(100, 70)
      .setFont(buttonFont);
 }
 
 void testLight() { port.write('t'); }
 void reset()     { port.write('r'); }
 
