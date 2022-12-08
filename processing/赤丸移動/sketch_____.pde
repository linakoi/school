int x [] = new int [20];//20個の円のx座標
void setup() {
  size (1000,1000);
  for (int i = 0;i < 20; i++) {
    x[i] = i*30;//しょきのざひょうを
  }
}

void draw () {
  int a = 1;
  background(100);//がめんりせっと

  for(int i = 0; i < 20; i++) {
    x[i] = (x[i] + 2)%1000;//xざひょうを+5
    fill(a,0,0);
    ellipse(x[i], i*50+20, 30, 30);//円の描画
    a+=12;
  }
}

  
