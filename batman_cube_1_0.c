#include <stdio.h>

char field[54];
char letters[6] = {'B','O','W','R','Y','G'};
void ausgeben();
void l();
char help[3];
char help2[3];

int main(){
    int i;
    int a;
    //int b;
    for(i = 0;i < 6; i++){
       for(a = 0; a < 9; a++){
          field[i*9+a] = letters[i];
       }
    }
    l();
    ausgeben();
    return 0;
}

void l(){
   help[0] = field[13];
   help[1] = field[24];
   help[2] = field[35];
   field[13] = field[0];
   field[24] = field[3];
   field[35] = field[6];
   help2[0] = field[45];
   help2[1] = field[48];
   help2[2] = field[51];
   field[45] = help[0];
   field[48] = help[1];
   field[51] = help[2];
   help[0] = field[21];
   help[1] = field[32];
   help[2] = field[43];
   field[21] = help[0];
   field[32] = help[1];
   field[43] = help[2];

   field[0] = help[0];
   field[3] = help[1];
   field[6] = help[2];

}

void li(){

}

void r(){

}

void ri(){

}

void u(){

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
    for(b = 1; b < 55; b++){
      printf("%c",field[b-1]);
      if(b %3 == 0 && b != 0){
        printf("\n");
      }
    }
}
