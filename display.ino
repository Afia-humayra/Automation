void show() {
  if (temp_rain != rain1_value || temp_gas != gas_value) {
    temp_rain = rain1_value;
    temp_gas = gas_value;
    lcd.clear(); lcd.setCursor(0, 0);
    (rain1_value == 1) ? lcd.print("   SUNNY DAY") : lcd.print("   CLOUDY DAY");
    
    //gas sensor display
    lcd.setCursor(0,1);
    if(gas_value == 0) lcd.print("GAS LEVEL: LOW");
    else if(gas_value == 1) lcd.print("GAS LEVEL: MID");
    else if(gas_value == 2) lcd.print("GAS LEVEL: LOW");
    else if(gas_value == 3) lcd.print("GAS LEVEL WARN!");
  }
}
