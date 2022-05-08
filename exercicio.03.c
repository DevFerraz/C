int main(){
    float altura[3] = 0;
printf("Digite a altura da primeira pessoa: ");
scanf("%f", altura[0]);
printf("Digite a altura da segunda pessoa: ");
scanf("%f", altura[1]);
printf("Digite a altura da terceira pessoa: ");
scanf("%f", altura[2]);
if (altura[1] > altura[0] && altura[1] > altura[2]){
    printf("O mais alto eh o de %.2f", altura[1]);
}
else if (altura[2] > altura[0] && altura[2] > altura[0]){
    printf("O mais alto eh o de %.2f", altura[0]);
}
else {
    printf("O mais alto eh o de %.2f", altura[0]);
}
return 0;
}