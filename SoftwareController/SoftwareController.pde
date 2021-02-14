// SoftwareController.pde
/*
 * GUI application for smart home
 */
 
 import controlP5.*;
 import processing.serial.*;
 
 Serial port;
 ControlP5 cp5;
 PFont font;
 
 void setup()
 {
   size(800, 600);
   
   //port = new Serial(this, "COM5", 9600);
   cp5 = new ControlP5(this);
   font = createFont("calibri light", 40);
 }
 
 void draw()
 {
   background(50, 50, 50);
   
   fill(255, 255, 255);
   textFont(font);
   textAlign(CENTER);
   text("Smart Home", 400, 100);
 }
 
