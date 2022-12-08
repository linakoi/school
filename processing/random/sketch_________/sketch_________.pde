//ランダムに円描く
float r;
void setup() {
  size(1800,1200);
  frameRate(456456465);
}

void draw () {
  background(0);
  r = random(1,255);
  float a = random(0,255);
  float b = random(0,255);
  float c = random(0,255);
  float d = random(0,255);
  float e = random(0,255);
  
  
  fill(a,b,c);
  
  ellipse(random(0,1800),random(0,1200),a,r);
  ellipse(random(0,1800),random(0,1200),a,r);
  fill(b,c,a);
  ellipse(random(0,1800),random(0,1200),b,r);
  ellipse(random(0,1800),random(0,1200),b,r);
  fill(c,a,b);
  ellipse(random(0,1800),random(0,1200),c,r);
  ellipse(random(0,1800),random(0,1200),c,r);
  fill(c,d,e);
  ellipse(random(0,1800),random(0,1200),d,r);
  ellipse(random(0,1800),random(0,1200),d,r);
  
  fill(d,e,c);
  rect(random(0,1800),random(0,1200),r,r);
}
