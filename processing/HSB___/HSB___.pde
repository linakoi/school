//HSB色空間テスト
void setup() {
  size(1000,1000);
  colorMode(HSB,360,100,100);//HSB色空間の利用
}

void draw() {
  background(0);
  for (int i = 0;i < 360; i+= 10) {
    fill(i,mouseX/5,mouseY/5);
    ellipse(cos(radians(i))*200+250,sin(radians(i))*200+250,20,20);
  }
  
}
