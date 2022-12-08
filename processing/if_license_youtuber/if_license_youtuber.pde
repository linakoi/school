int age = 16;
if (age >= 18) {
  print("can get license");
} else {
  print("cannot get license");
}


size(500,500);
int i;

for (i = 0;i < 10;i++) {
  if(i%2 == 0) {
    fill(255,50,50);
  } else {
    fill(50,255,50);
  }
  rect(50,i*50,50,50); 
}

int ch = 1500;
int view = 3000;
if (ch >= 1000 && view >= 4000) {
  print("YounTuberになれる");
}else {
  print("YouTuberになれない");
}
