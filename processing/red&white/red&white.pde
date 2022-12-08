int x,lr,y;

void setup() {
  x = 20;
  lr = 1;
  noStroke();
  size(1000,800);
  frameRate(1000);
}
void draw() {
  background(0);
  x += lr;
  y += lr;
  fill(255);
  ellipse(985-y,y,y,y);
  fill(255,0,0);
  ellipse(x,x,x,x);
  


  if (x == 985) {
    lr = -1;
  }
  else if (x == 14) {
    lr = 1;
  }
  
  
  
}
