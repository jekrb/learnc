#include <stdio.h>


float main () {
  float fahr;
  for (fahr = 0; fahr <= 300; fahr += 20) {
    printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}
