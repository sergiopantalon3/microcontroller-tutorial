int varA = 6;
int varB = varA; // 6

void setup() {
  int varC = 0;
  int varB = 3;
  varA = varA + varB; // 9 (6 + 3)
  int varC = varA; //9
}

void loop() {
  int varC = 3;
  varA = varA + varB + varC; // 18 (9 + 6 + 3)
}
