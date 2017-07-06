#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned char Byte;
typedef unsigned short Word;
typedef unsigned int Dword;


typedef struct RGB{ Byte B, G , R; }RGB;

int main(){
    FILE * arquivo;
    RGB pixel;
    Byte byte; Word word; Dword dword;
    int WPX , HPX , BPP , NCP , NIC , AUX , PAL , i , j;
    arquivo = fopen ("imagem.bmp" , "rb");
    if (!arquivo) {
        fprintf (stderr , "arquivo inexistente!\n");
        return (EXIT_FAILURE);
    }
    fread (&byte, sizeof (Byte) , 1 , arquivo);
    printf("%c" , byte);
    fread (&byte, sizeof (Byte) , 1 , arquivo);
    printf("%c\n" , byte);
    fread (&byte, sizeof (Dword) , 1 , arquivo);
    printf("Tamanho: %d bytes\n" , byte);
    fread (&word, sizeof (Word) , 1 , arquivo);
    printf("Info reservada: %d\n" , word);
    fread (&word, sizeof (Word) , 1 , arquivo);
    printf("Info reservada: %d\n" , word);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Offset: %d bytes\n" , dword);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Cabecalho: %d bytes\n" , dword);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Largura: %d pixels\n" , dword);
    WPX = dword; //largura
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Altura: %d bytes\n" , dword);
    HPX = dword; //altura
    fread (&word, sizeof (Word) , 1 , arquivo);
    printf("Planos de cores: %d\n" , word);
    fread (&word, sizeof (Word) , 1 , arquivo);
    printf("Bits por pixel: %d\n" , word);
    BPP = word;
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Compressao: %d\n" , dword);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Tamanho da imagem: %d bytes\n" , dword);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Resolucao horizontal: %d\n" , dword);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    printf("Resolucao vertical: %d\n" , dword);
    fread (&dword, sizeof (Dword) , 1 , arquivo);
    NCP = dword;
    printf("Numero de cores: %d\n" , (NCP == 0)? 1 << BPP : NCP);
    fread (&dword, sizeof(Dword), 1 ,arquivo);
    NIC = dword;
    printf("Numero de cores: %d\n" , (NIC == 0)? 1 << BPP : NIC);
    printf ("===============\n");
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    AUX = PAL - WPX*3;
    for (j = 0; j < HPX; j++){
            for (i = 0 ; i < WPX ; i++){
             fread (&pixel, sizeof(RGB), 1, arquivo);
             printf("R: %d , G: %d , B: %d\n", pixel.R , pixel.G , pixel.B);
            }
        if (AUX > 0){
            fseek (arquivo, AUX , SEEK_CUR);
      }
    }
    fclose(arquivo);




return 0;
}
