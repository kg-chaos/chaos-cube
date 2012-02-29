#include <stdio.h>

char field[54] = {'B','B','B','B','B','B','B','B','B','O','O','O','W','W',
'W','R','R','R','Y','Y','Y','O','O','O','W','W','W','R','R','R','Y','Y','Y','O',
'O','O','W','W','W','R','R','R','Y','Y','Y','G','G','G','G','G','G','G','G','G'};
//char letters[6] = {'B','O','W','R','Y','G'};
void ausgeben();
void l(); void li(); void r(); void ri(); void u(); void ui(); void b(); void bi(); void d(); void di();
void f(); void fi(); void m(); void mi(); void s(); void si(); void e(); void ei();
char help[3];
char help2[3];

int main(){
    int i;
    int a;
    //int b;
//    for(i = 0;i < 6; i++){
//       for(a = 0; a < 9; a++){
//          field[i*9+a] = letters[i];
//       }
//    }
    l();
    r();
    ausgeben();
    return 0;
}

void l(){
   help[0] = field[12];
   help[1] = field[24];
   help[2] = field[36];
   field[12] = field[0];
   field[24] = field[3];
   field[36] = field[6];
   help2[0] = field[45];
   help2[1] = field[48];
   help2[2] = field[51];
   field[45] = help[0];
   field[48] = help[1];
   field[51] = help[2];
   help[0] = field[20];
   help[1] = field[32];
   help[2] = field[44];
   field[20] = help2[0];
   field[32] = help2[1];
   field[44] = help2[2];
   field[0] = help[0];
   field[3] = help[1];
   field[6] = help[2];
}

void li(){

}

void r(){
   help[0] = field[14];
   help[1] = field[26];
   help[2] = field[38];
   field[14] = field[0];
   field[26] = field[3];
   field[38] = field[6];
   help2[0] = field[47];
   help2[1] = field[50];
   help2[2] = field[53];
   field[47] = help[0];
   field[50] = help[1];
   field[53] = help[2];
   help[0] = field[18];
   help[1] = field[30];
   help[2] = field[42];
   field[18] = help2[0];
   field[30] = help2[1];
   field[42] = help2[2];
   field[2] = help[0];
   field[5] = help[1];
   field[8] = help[2];
}

void ri(){

}

void u(){
   help[0] = field[14];
   help[1] = field[26];
   help[2] = field[38];
   field[38] = field[14];
   field[26] = field[13];
   field[14] = field[12];
   help2[0] = field[12];
   help2[1] = field[24];
   help2[2] = field[36];
   field[47] = help[0];
   field[50] = help[1];
   field[53] = help[2];
   help[0] = field[18];
   help[1] = field[30];
   help[2] = field[42];
   field[18] = help2[0];
   field[30] = help2[1];
   field[42] = help2[2];
   field[2] = help[0];
   field[5] = help[1];
   field[8] = help[2];
}

void ui(){

}

void d(){

}

void di(){

}

void f(){

}

void fi(){

}

void b(){

}

void bi(){

}

void m(){

}

void mi(){

}

void s(){

}

void si(){

}

void e(){

}

void ei(){

}

void ausgeben(){
    int b;
//    for(b = 1; b < 55; b++){
//      printf("%c",field[b-1]);
//      if(b %3 == 0 && b != 0){
//        printf("\n");
//      }
//    }
        printf("   ");
        printf("%c%c%c \n",field[0],field[1],field[2]);
        printf("   ");
        printf("%c%c%c \n",field[3],field[4],field[5]);
        printf("   ");
        printf("%c%c%c \n",field[6],field[7],field[8]);
        for(b = 9; b < 45; b++){
            printf("%c",field[b]);
               if((b-8)%12== 0&&b!=9){
                   printf("\n");
               }
        }
        printf("   ");
        printf("%c%c%c \n",field[45],field[46],field[47]);
        printf("   ");
        printf("%c%c%c \n",field[48],field[49],field[50]);
        printf("   ");
        printf("%c%c%c \n",field[51],field[52],field[53]);
}
