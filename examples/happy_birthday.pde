// Rotating HBD message in processing

PFont f;
String message = "Happy Birthday!!";
float theta;

void setup() {
  size(640, 360);
  f = createFont("Arial", 20);
}

void draw() {

  background(255);
  fill(0);
  textFont(f);                  // Set the font
  textAlign(CENTER);
  pushMatrix();
  translate(width/2, height/2); // Translate to the center
  rotate(theta);                // Rotate by theta

  // The text is center aligned and displayed at (0,0) after translating and rotating. 
  text(message, 0, 0); 
  popMatrix();

  // Increase rotation
  theta += 0.02;
}
