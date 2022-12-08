float x = 60;
float y = 440;
int rudius = 45;
int bh = 160;
int nh = 70;
float easing = 0.02;
 void setup() {
   size(360,480);
   smooth();
   strokeWeight(2);
   ellipseMode(RADIUS);
 }
 
 void draw() {
   int targetX = mouseX;
   x += (targetX - x) * easing;
   nh =  16;
   bh = 160;
 }
 float ny = y - bh - nh - radius;
 background(204);
