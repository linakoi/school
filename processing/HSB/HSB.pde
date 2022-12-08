///HSB色空間の利用
int x[] = new int[30];//10この円のｘ
int y[] = new int [30];
int h[] = new int [30];

void setup() {
  size(500,500);
  noStroke();
  for (int i = 0; i < 30; i++) {
    x[i] = 0;
    y[i] = 0;
    h[i] = 0;
  }
  colorMode(HSB,360,100,100);
}

void draw() {
  background(100);
  for(int i = 29;i > 0; i--) {
    x[i] = x[i-1];
    y[i] = y[i-1];
    h[i] = h[i-1];
    fill(h[i],100,100);
    ellipse(x[i],y[i],30,30);
  }
  x[0] = mouseX;
  y[0] = mouseY;
  h[0] = (h[0]+5)%360;
  fill(h[0],100,100);
  ellipse(x[0],y[0],30,30);
}
