float x = 60;
float y = 440;
int radius = 45;
int bh = 160;
int nh = 70;
float easing = 0.02;
 void setup() {
   frameRate(500000);
   size(2000,1222);
   smooth();
   strokeWeight(2);
   ellipseMode(RADIUS);
 }
 
 void draw() {
   int targetX = mouseX;
   x += (targetX - x) * easing;
   if(mousePressed) {
     nh = 16;
     bh = 90;
   } else {
     nh = 70;
     bh = 160;
   }
 float ny = y - bh - nh - radius;
 background(204);
 
 //首
 stroke(102);
 line(x+12,y-bh,x+12,ny);
 
 // アンテナ
line(x+12,ny,x-18,ny-43);
line(x+12,ny,x+42,ny-99);
line(x+12,ny,x+78,ny+15);

//胴
noStroke();
fill(102);
ellipse(x,y-33,33,33);
fill(0);
rect(x-45,y-bh,90,bh-33);
//頭部
fill(0);
ellipse(x+12,ny,radius,radius);
fill(255);
ellipse(x+24,ny-6,14,14);
fill(0);
ellipse(x+24,ny-6,3,3);
}
