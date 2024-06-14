void gas(){
  gas_value = analogRead(gas_sense1);
  Serial.println(gas_value);
  if(gas_value <=gas1_lvl1){
    gas_value = 0;
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(fan, LOW);
  }
  else if(gas_value <=gas1_lvl2){
    gas_value = 1;
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(fan, LOW);
  }
  else if(gas_value <=gas1_lvl3){
    gas_value = 2;
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(fan, LOW);
  }
  else {
    gas_value = 3;
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(fan, HIGH);
  }
}
