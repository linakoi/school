int x [] = new int [30];;//30このえんのｘ座標
int y [] = new int [30];//y座標
void setup() {
  size(500,500);
  for(int i= 0;i < 30; i++) {
    x[i] = 0;
    y[i] = 0; 
    int a = 0;

  } 
}

void draw () {
  background(100);//がめんりせっと
  x[0] = mouseX;
  y[0] = mouseY;
  ellipse(x[0],y[0],30,30);
  for(int i = 29; i> 0; i--) {
    x[i] = x[i-1];
    y[i] = y[i-1];
    fill(i+100,i+10,i+5);
    ellipse(x[i],y[i],30,30);
    
  }

 

}
