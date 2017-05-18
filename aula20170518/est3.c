#include<stdio.h>
    struct RGB {
    float R;
    float G;
    float B;

}RGB;
    struct YCbCr {
    float Y;
    float Cb;
    float Cr;
}YCbCr;
int main(){


printf("Insira a cordenada R do padrão RGB:\n");
scanf("%d" , &(RGB.R));
printf("Insira a cordenada G do padrão RGB:\n");
scanf("%d" , &(RGB.G));
printf("Insira a cordenada B do padrão RGB:\n");
scanf("%d" , &(RGB.B));


float COMPONENTEY = (16+(65.481)*RGB.R+(128.553)*RGB.G+(24.996)*RGB.B);
float COMPONENTECb = (128+((−(37.797))*RGB.R−(74.203)*RGB.G+(112.0)*RGB.B));
float COMPONENTECr = (128+(112.0)*RGB.R(−(93.786))*RGB.G(−(18.214))*RGB.B);


printf ("RGB: %f , %f , %f  ;  YCbCr: %f , %f , %f" , RGB.R , RGB.G , RGB.B , COMPONENTEY(RGB.R,RGB.G,RGB.B),COMPONENTECb(RGB.R,RGB.G,RGB.B), COMPONENTECr(RGB.R,RGB.G,RGB.B));


return 0;
}

