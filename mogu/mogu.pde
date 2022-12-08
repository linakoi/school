//モグラたたきデモ用　2021/3/18

//画像3パターン
PImage image_ari;//画像：モグラが「いる」
PImage image_nasi;//画像：「いない」
PImage image_tatakare;//画像：「叩かれた」
int x, y, j, t;//画像表示位置x,y座標 jはモグラの状態 tはタイマー
//モグラの状態はj=0:いない j=1:いる j=2:叩かれた

void setup() {
  //画面サイズ
  size(600, 600);
  //位置を決める
  x=200;
  y=300;
  //初期状態
  j=1;
  t=0;
  image_ari=loadImage("ari.jpg");//画像読み込み　「いる」
  image_nasi=loadImage("nasi.jpg");//「いない」
  image_tatakare=loadImage("tatakare.jpg");//「叩かれた」
}
//描画用のプログラム　毎フレーム更新
void draw() {
  background(255);//一度画面を全消し
  //状態によるモグラ処理
  switch(j) {
  case 0://「いない」場合
    image(image_nasi, x, y, 200, 200);//いない画像表示
    //タイマーが0になったら状態を「いる」に移行　タイマーをセット
    if(t<=0){
      j=1;
      t=90;
    }
    break;
  case 1://「いる」場合
    image(image_ari, x, y, 200, 200);//いる画像表示
    //タイマーが0になったら状態を「いない」に移行　タイマーセット
    if(t<=0){
      j=0;
      t=int(random(60,300));
    }
    break;
  case 2://「叩かれた」の場合
    image(image_tatakare, x, y, 200, 200);//叩かれ画像表示
    //タイマーが0になったら状態を「いない」に移行　タイマーセット
    if(t<=0){
      j=0;
      t=int(random(60,300));
    }
    break;
  }
  t=t-1;//タイマーを減らす
  //判定表示用
  //noFill();
  //rect(x+20,y+50,180-20,190-50);
}

//マウスクリック時に動作するプログラム
void mousePressed() {
  //モグラをたたく判定　
  if (j==1) {//「いる」場合のみ判定
    if (mouseX > x+20 && mouseX<x+180) {    //マウスx座標判定
      if (mouseY > y+50 && mouseY < y+190) {   //マウスy座標判定
        j=2; //状態を「叩かれた」に移行
        t=60;//
      }
    }
  }
}
