void rain1() {
  rain1_value = digitalRead(rain_sense1);
  if (rain1_value == 0) {
    while (p <= window1_close) {
      window1.write(p); p++; delay(5);
      if (rain1_value == 1) break;
    }
  }
  else
    while (p >= window1_open) {
      window1.write(p); p--; delay(5);
      if (rain1_value == 0) break;
    }
}
