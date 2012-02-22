#include <stdio.h>

char field[54];
char letters[6] = {'B','O','W','R','Y','G'};
void ausgeben();

int main(){
    int i;
    int a;
    //int b;
    for(i = 0;i < 6; i++){
       for(a = 0; a < 9; a++){
          field[i*9+a] = letters[i];
       }
    }
    ausgeben();
    return 0;
}

void l(){

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
