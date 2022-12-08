//三角関数の描画
float y1,y2,y3,x;
int t;
int i;
void setup() {
  t = 0;
  size(1000,1000);
  noFill();
}

void draw() {
  background(50);
  //軸の描画
  line(-t+360,0,-t+360,400);
  line(0,200,360,200);
  for(x = 0;x < 360;x++) {
    y1 = sin(radians(x+t))*100.0+200;//sin
    y2 = cos(radians(x+t))*100.0+200;//cos
    y3 = tan(radians(x+t))*100.0+200;//tan
    stroke(x*255/360,x*255/360,255);//線の色
    ellipse(x,400-y1,6,6);//円で線を描く
    stroke(x*255/360,255,x*255/360);
    ellipse(x,400-y2,6,6);
    stroke(x*255/360,255,x*255/360);
    ellipse(x,400-y3,6,6);
  }
  t = (t+1)%360;
}
