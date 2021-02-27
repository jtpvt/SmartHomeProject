// SoftwareController.pde
/*
 * GUI application for smart home
 */

 PFont headerFont;
 
 void setup()
 {
   size(800, 600);
   
   headerFont = createFont("calibri light", 40);
 }
 
 void draw()
 {
   background(50, 50, 50);
   
   fill(255, 255, 255);
   textFont(headerFont);
   textAlign(CENTER);
   text("Smart Home", 400, 100);
 }
 
