#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

    int punto1();
    int punto2();
    int punto3();
    int punto4();
    int punto5();
    int punto6();
    int punto7();
    int punto8();
    int punto9();
    int punto10();
    int punto11();
    int punto12();
    int punto13();

int main(int argc, char const *argv[])
{
   punto13();
    return 0;
}

int punto1(){
    int val1, val2;

    printf("ingrese el primer valor: ");
    scanf("%d", &val1);
    printf("ingrese el segundo valor: ");
    scanf("%d", &val2);

    val1 == val2? printf("son iguales"): printf("son distintos") ;
    return 0;
}
int punto2(){
    int val;

    printf("ingrese el valor: ");
    scanf("%d", &val);
    
    if(val == 0){
        printf("el valor es 0");
    }else if (val > 0){
         printf("es mayor a 0");
    } else {
        printf("es menor a 0");
    }

    return 0;
}
int punto3(){
    int val1,val2;

    printf("ingrese el valor 1: ");
    scanf("%d", &val1);
    printf("ingrese el valor 2: ");
    scanf("%d", &val2);
    
    if(val1 > val2){
        printf("el producto es: %d", val1*val2 );
    }else if(val1 ==val2){
        printf("Los valores son iguales");
    }

    return 0;
}

int punto4(){
    int val1,val2;

    printf("ingrese el valor 1: ");
    scanf("%d", &val1);
    printf("ingrese el valor 2: ");
    scanf("%d", &val2); 

    val1 > val2? printf("%d", val1-val2): printf("%d", val2-val1) ;

    return 0;
}

int punto5(){
    int a,b,c;

    printf("ingrese el lado a: ");
    scanf("%d", &a); 
    printf("ingrese el lado b: ");
    scanf("%d", &b); 
    printf("ingrese el lado c: ");
    scanf("%d", &c); 

    if(!((a+b)>c && (a+c)> b && (c+b)>a)){
        printf("no es un triangulo");
    }   
        if (a == b && a == c ){
        printf("El triangulo es equilatero");
        } else if (a != b && a != c && b != c) {
            printf("El triangulo es escaleno");
            } else {
                printf("El triangulo es isoceles");
                    }
    return 0;
}

int punto6(){
    int val1,val2,val3,promedio;
    
    printf("ingrese el valor 1: ");
    scanf("%d", &val1);
    printf("ingrese el valor 2: ");
    scanf("%d", &val2);
    printf("ingrese el valor 3: ");
    scanf("%d", &val3);
    
    promedio=(val1 + val2 + val3)/3;
    
    if (val1 > promedio)
    {
        printf("el valor mayor al promedio es: %d",val1);
    }
    else if (val2 > promedio){
    
    printf("el valor mayor al promedio es: %d",val2);

    }
    else {
        
    printf("el valor mayor al promedio es: %d",val3);

    }
    

return 0;
}
int punto7(){
    int val1,val2,val3,val4;

     printf("ingrese el valor 1: ");
    scanf("%d", &val1);
    printf("ingrese el valor 2: ");
    scanf("%d", &val2);
    printf("ingrese el valor 3: ");
    scanf("%d", &val3);
    printf("ingrese el valor 4: ");
    scanf("%d", &val4);

    if ((val1+val2) > (val3 + val4)) 
    {
        printf("la suma de los primeros 2 numeros es mayor");
    }else{
        printf("la suma de los segundos 2 numeros es mayor");
    }
    


    return 0;
}

int punto8(){
int edad1, edad2;
float altura1, altura2;

    printf("la edad de la primer persona: ");
    scanf("%d", &edad1);
    printf("ingrese la altura de la primer persona: ");
    scanf("%f", &altura1);
   
    printf("la edad de la segunda persona: ");
    scanf("%d", &edad2);
    printf("ingrese la altura de la segunda persona: ");
    scanf("%f", &altura2);

    if (edad1 > edad2)
    {
        printf("la persona con mayor edad mide: %.2f", altura1);
    }else{
        printf("la persona con mayor edad mide: %.2f", altura2);
    }
    

return 0;
}

int punto9(){
    int hs,valorPorHora;

    printf("Ingrese lass horas trabajadas: ");
    scanf("%d", &hs);
    printf("ingrese el precio por hora: ");
    scanf("%f", &valorPorHora);

    if (hs > 50 && hs < 150) {
    printf("El sueldo es %d", (hs * valorPorHora)+ 100);
    } else if (hs > 150){
        printf("El sueldo es %d", (hs * valorPorHora)+ 200);
        }else {
            printf("El sueldo es %d", hs * valorPorHora);
        }


return 0; 
}

int punto10(){
     
    int dia,mes,anio;

    printf("Ingrese el dia: ");
    scanf("%d", &dia);
    printf("ingrese el mes: ");
    scanf("%d", &mes);
    printf("ingrese el anio: ");
    scanf("%d", &anio);

    if ((mes == 1 ||mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia > 0 && dia <= 31))
    {
        printf("valido");
    } else if((mes == 4 ||mes == 6 || mes == 9 ||mes == 11) && (dia > 0 && dia <= 30)){
        printf("valido");
    } else if(((mes == 2) &&  (anio % 4 == 0) && (dia > 0 && dia <= 29)) || ((mes == 2) &&  (anio % 4 != 0) && (dia > 0 && dia <= 28))){
        printf("valido");
    }else{
        printf("invalido");
    }
    return 0;
}

int punto11(){
    int sueldo,categoria, antiguedad;
    
    printf("Ingrese el sueldo: ");
    scanf("%d", &sueldo);
    printf("Ingrese el categoria: ");
    scanf("%d", &categoria);
    printf("Ingrese el antiguedad: ");
    scanf("%d", &antiguedad);

    if(categoria== 1){
    sueldo= sueldo + (antiguedad*50);
    }

    printf("%d", sueldo);
    
    return 0;
}
int punto12(){
    int sueldo,categoria, antiguedad;
    
    printf("Ingrese el sueldo: ");
    scanf("%d", &sueldo);
    printf("Ingrese el categoria: ");
    scanf("%d", &categoria);
    printf("Ingrese el antiguedad: ");
    scanf("%d", &antiguedad);

    if(categoria== 1){
    sueldo= sueldo + (antiguedad*50);
    }
    if (antiguedad > 5)
    {
        printf("%d", sueldo);
    
    }
    return 0;
}
int punto13(){
    int horas,categoria;
    
    printf("Ingrese las horas: ");
    scanf("%d", &horas);
    printf("Ingrese el categoria: ");
    scanf("%d", &categoria);

    if(categoria== 1){
    printf("el sueldo es %d", horas* 50);
    }else if(categoria== 2){
    printf("el sueldo es %d", horas* 70);
    } else if(categoria== 3){
    printf("el sueldo es %d", horas* 80);
    }
 
    return 0;
}
