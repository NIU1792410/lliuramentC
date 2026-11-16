#include <stdio.h>

int main(void) {
int temperatura=25;
printf("Temperatura: %d graus\n", temperatura);
float temp=(temperatura*9.00)/5.00+32;
printf("Temperatura: %.1f Fahrenheit\n", temp);
if(temperatura>=20){
printf("Temperatura alta\n");
}
else{
printf("Temperatura baixa\n");
}

return 0;
}

