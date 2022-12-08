//線のかいてん
float x, y,theta;
void setup(){
  size(200, 200);
  theta = 90;
  stroke(20, 20, 225);
}

void draw () {
  background(50);
  ellipse(100, 100, 100, 100);
  x = 50*cos(radians(theta));
  y = -50*sin(radians(theta));
  line(x+100, y+100, 100, 100);
  theta -= 6.0;
  if (theta < 0) { 
    theta += 360;
  
  }
}


//sinは 0  1  0  -1  0
//cosは 1  0  -1  0  1
//tanは 0  1  0  -1  0
