int x,y,vy;
void setup() {
  size(500,500);
  x = 250;
  y = 0;
  vy = 5;
}

void draw() {
  background(0,0,0);
  if (vy ==5) fill(0,0,255);
  if(vy == -5) fill(255);
  ellipse(x,y,20,20);
  y += vy;
  if(y > 500) vy = -5;
  if(y < 0) vy = 5;
}
