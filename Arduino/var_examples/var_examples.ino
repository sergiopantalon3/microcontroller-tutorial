int pin = 9;

int varA = 7;
int varB = 5;

if (varA > varB) {
  analogWrite(led, varA);
}
else {
  analogWrite(led, varB);
}
