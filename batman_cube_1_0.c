#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef void (*funcsP) ();

char field[54];
const char hfield[54] = {'B','B','B','B','B','B','B','B','B','O','O','O','W','W',
'W','R','R','R','Y','Y','Y','O','O','O','W','W','W','R','R','R','Y','Y','Y','O',
'O','O','W','W','W','R','R','R','Y','Y','Y','G','G','G','G','G','G','G','G','G'};
void ausgeben();
void l();void li(); void r(); void ri(); void u(); void ui(); void b(); void bi(); void d(); void di();
void f(); void fi();
char help[3];
char help2[3];
void drehen();
void begruessen();
void shell();
void helpS();
void lesen();
void schreiben();

void secure();

int main(){
//    begruessen();
   int i;
    lesen();
//    shell();
   // shell();
   // bi();
  // drehen();
 // for(i=0;i<1001;i++)
  f();
   drehen();
//   l();r();
//    for(i = 0; i <10001;i++)
//    bi();
    ausgeben();
    secure();
    return 0;
}


void drehen() {
   int i;
   time_t t;
   int z;
   funcsP funcArr[] = {l, li, r, ri, u, ui, b, bi, d, di, f,fi};
   time(&t);
   srand((unsigned int)t);
   dreh:
  //for(i = 0; i <10001; i++){
                // Zufallsgenerator initialisieren
   for(i = 0;i<10000;i++){
    z = rand() % 12;
   funcArr[z]();
    printf("%i ", z);

    }
//    for(i = 0; i < 53; i++)
//       if(hfield[i] != field[i]);
//         goto dreh;
    schreiben();
    //geloest();
}


void lesen(){
   int foo;
   FILE *FDatei;
   FDatei=fopen("cube.txt", "r"); // Datei öffnen, r = lesen, w = schreiben,.....
   foo = fscanf(FDatei, "%54c", field);
   fclose(FDatei); // Datei schliessen
}

void schreiben(){
  int i = 0;
  FILE *datei;

  datei = fopen ("cube21.txt", "w");
  if (datei == NULL)
  {
    printf("Fehler beim oeffnen der Datei.");
  }
  //for(;i<54;i++)
  //strcpy(bar,field);
  fwrite(&field,sizeof(field),1,datei);
  fclose (datei);
}

void shell(){
    char toDO;
    int foo;
    printf("type in 'h' for more information\n");
    while(toDO != 's'){
      printf("->");
      toDO = 'f';
      foo = scanf("%c",&toDO);
      switch (toDO){
        case 'g':
         drehen();
         break;
        case 's':
         break;
        case 'o':
         ausgeben();
         break;
        case 'h':
         helpS();
         break;
        default:
          printf("Well Well...  \n");
          break;
      }
    }

}

void geloest(){
printf(" _______  _______  _        _______  _______  _______ _________ _  _ \n");
printf("(  ____ \\(  ____ \\( \\      (  ___  )(  ____ \\(  ____ \\\\__   __/( )( )\n");
printf("| (    \\/| (    \\/| (      | (   ) || (    \\/| (    \\/   ) (   | || |\n");
printf("| |      | (__    | |      | |   | || (__    | (_____    | |   | || |\n");
printf("| | ____ |  __)   | |      | |   | ||  __)   (_____  )   | |   | || |\n");
printf("| | \\_  )| (      | |      | |   | || (            ) |   | |   (_)(_)\n");
printf("| (___) || (____/\\| (____/\\| (___) || (____/\\/\\____) |   | |    _  _ \n");
printf("(_______)(_______/(_______/(_______)(_______/\\_______)   )_(   (_)(_)\n");

secure();
ausgeben();
exit(0);

}

void helpS(){
    printf("g for g / start\n");
    printf("s for stop\n");
    printf("o for output \n");
    printf("h for help \n");
}

void begruessen(){
    printf("\n\n\n");
    printf("           _==/           i     i           \\==_\n");
    printf("          /XX/            |\\___/|            \\XX\\ \n");
    printf("        /XXXX\\            |XXXXX|            /XXXX\\ \n");
    printf("       |XXXXXX\\_         _XXXXXXX_         _/XXXXXX|\n");
    printf("      XXXXXXXXXXXxxxxxxxXXXXXXXXXXXxxxxxxxXXXXXXXXXXX\n");
    printf("     |XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|\n");
    printf("     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("     |XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|\n");
    printf("      XXXXXX/^^^^^\\XXXXXXXXXXXXXXXXXXXXX/^^^^^\\XXXXXX\n");
    printf("       |XXX|       \\XXX/^^\\XXXXX/^^\\XXX/       |XXX|\n");
    printf("         \\XX\\       \\X/    \\XXX/    \\X/       /XX/\n");
    printf("            \"\\       \"      \\X/      \"       /\"\n");

    printf("\n\n\n");

    printf("      ______   _______ _________ _______  _______  _   \n");
    printf("     (  ___ \\ (  ___  )\\__   __/(       )(  ___  )( (    /|\n");
    printf("     | (   ) )| (   ) |   ) (   | () () || (   ) ||  \\  ( |\n");
    printf("     | (__/ / | (___) |   | |   | || || || (___) ||   \\ | |\n");
    printf("     |  __ (  |  ___  |   | |   | |(_)| ||  ___  || (\\ \\) |\n");
    printf("     | (  \\ \\ | (   ) |   | |   | |   | || (   ) || | \\   |\n");
    printf("     | )___) )| )   ( |   | |   | )   ( || )   ( || )  \\  |\n");
    printf("     |/ \\___/ |/     \\|   )_(   |/     \\||/     \\||/    )_)\n");

    printf("\n     Because Algorithm are To MAiNstream!");


}

void ausgeben(){
        int b;
        printf("\n   %c%c%c\n",field[0],field[1],field[2]);
        printf("   %c%c%c\n",field[3],field[4],field[5]);
        printf("   %c%c%c\n",field[6],field[7],field[8]);
        for(b = 9; b < 45; b++){
            printf("%c",field[b]);
               if((b-8)%12== 0&&b!=9){
                   printf("\n");
               }
        }
        printf("   %c%c%c\n",field[45],field[46],field[47]);
        printf("   %c%c%c\n",field[48],field[49],field[50]);
        printf("   %c%c%c\n",field[51],field[52],field[53]);
}

void secure(){
int i;
int y = 0;
int b = 0;
int w = 0;
int o = 0;
int r = 0;
int g = 0;
for(i = 0;i<54;i++){
switch(field[i]){
case'W':w++;break;
case'B':b++;break;
case'Y':y++;break;
case'O':o++;break;
case'R':r++;break;
case'G':g++;break;
}
}
printf("W: %i\n",w);
printf("B: %i\n",b);
printf("Y: %i\n",y);
printf("O: %i\n",o);
printf("R: %i\n",r);
printf("G: %i\n",g);
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
   field[44] = help2[0];
   field[32] = help2[1];
   field[20] = help2[2];
   field[0] = help[0];
   field[3] = help[1];
   field[6] = help[2];

   help[0] = field[9];
   help[1] = field[10];
   help2[0] = field[11];
   help2[1] = field[23];
   field[11] = help[0];
   field[23] = help[1];
   help[0] = field[35];
   help[1] = field[34];
   field[35] = help2[0];
   field[34] = help2[1];
   help2[0] = field[33];
   help2[1] = field[21];
   field[33] = help[0];
   field[21] = help[1];
   field[9] = help2[0];
   field[10] = help2[1];


}

void li(){
   help[0] = field[0];
   help[1] = field[3];
   help[2] = field[6];
   field[0] = field[12];
   field[3] = field[24];
   field[6] = field[36];
   help2[0] = field[20];
   help2[1] = field[32];
   help2[2] = field[44];
   field[44] = help[0];
   field[32] = help[1];
   field[20] = help[2];
   help[0] = field[45];
   help[1] = field[48];
   help[2] = field[51];
   field[45] = help2[0];
   field[48] = help2[1];
   field[51] = help2[2];
   field[12] = help[0];
   field[24] = help[1];
   field[36] = help[2];

   help[0] = field[11];
   help[1] = field[23];
   help2[0] = field[9];
   help2[1] = field[10];
   field[9] = help[0];
   field[10] = help[1];
   help[0] = field[21];
   help[1] = field[33];
   field[33] = help2[0];
   field[21] = help2[1];
   help2[0] = field[34];
   help2[1] = field[35];
   field[34] = help[0];
   field[35] = help[1];
   field[23] = help2[0];
   field[11] = help2[1];

}

void r(){
   help[0] = field[14];
   help[1] = field[26];
   help[2] = field[38];
   help2[0] = field[2];
   help2[1] = field[5];
   help2[2] = field[8];
   field[2] = help[0];
   field[5] = help[1];
   field[8] = help[2];
   help[0] = field[42];
   help[1] = field[30];
   help[2] = field[18];
   field[42] = help2[0];
   field[30] = help2[1];
   field[18] = help2[2];
   help2[0] = field[47];
   help2[1] = field[50];
   help2[2] = field[53];
   field[47] = help[0];
   field[50] = help[1];
   field[53] = help[2];
   field[14] = help2[0];
   field[26] = help2[1];
   field[38] = help2[2];

   help[0] = field[15];
   help[1] = field[16];
   help2[0] = field[17];
   help2[1] = field[29];
   field[17] = help[0];
   field[29] = help[1];
   help[0] = field[41];
   help[1] = field[40];
   field[41] = help2[0];
   field[40] = help2[1];
   help2[0] = field[39];
   help2[1] = field[27];
   field[39] = help[0];
   field[27] = help[1];
   field[16] = help2[0];
   field[15] = help2[1];
}

void ri(){
    help[0] = field[14];
   help[1] = field[26];
   help[2] = field[38];
   field[14] = field[2];
   field[26] = field[5];
   field[38] = field[8];
   help2[0] = field[47];
   help2[1] = field[50];
   help2[2] = field[53];
   field[47] = help[0];
   field[50] = help[1];
   field[53] = help[2];
   help[0] = field[18];
   help[1] = field[30];
   help[2] = field[42];
   field[42] = help2[0];
   field[30] = help2[1];
   field[18] = help2[2];
   field[2] = help[0];
   field[5] = help[1];
   field[8] = help[2];

   help[0] = field[17];
   help[1] = field[29];
   help2[0] = field[15];
   help2[1] = field[16];
   field[15] = help[0];
   field[16] = help[1];
   help[0] = field[39];
   help[1] = field[27];
   field[39] = help2[0];
   field[27] = help2[1];
   help2[0] = field[41];
   help2[1] = field[40];
   field[41] = help[0];
   field[40] = help[1];
   field[17] = help2[0];
   field[29] = help2[1];



}

void u(){
   help[0] = field[14];
   help[1] = field[26];
   field[14] = field[12];
   field[26] = field[13];
   help2[0] = field[38];
   help2[1] = field[37];
   field[38] = help[0];
   field[37] = help[1];
   help[0] = field[36];
   help[1] = field[24];
   field[36] = help2[0];
   field[24] = help2[1];
   field[12] = help[0];
   field[13] = help[1];

   help[0] = field[15];
   help[1] = field[27];
   help[2] = field[39];
   field[15] = field[6];
   field[27] = field[7];
   field[39] = field[8];
   help2[0] = field[47];
   help2[1] = field[46];
   help2[2] = field[45];
   field[47] = help[0];
   field[46] = help[1];
   field[45] = help[2];
   help[0] = field[35];
   help[1] = field[23];
   help[2] = field[11];
   field[35] = help2[0];
   field[23] = help2[1];
   field[11] = help2[2];
   field[6] = help[0];
   field[7] = help[1];
   field[8] = help[2];
}

void ui(){
    help[0] = field[6];
    help[1] = field[7];
    help[2] = field[8];
    help2[0] = field[35];
    help2[1] = field[23];
    help2[2] = field[11];
    field[35] = help[0];
    field[23] = help[1];
    field[11] = help[2];
    help[0] = field[47];
    help[1] = field[46];
    help[2] = field[45];
    field[47] = help2[0];
    field[46] = help2[1];
    field[45] = help2[2];
    help2[0] = field[15];
    help2[1] = field[27];
    help2[2] = field[39];
    field[15] = help[0];
    field[27] = help[1];
    field[39] = help[2];
    field[6] = help2[0];
    field[7] = help2[1];
    field[8] = help2[2];

    help[0] = field[12];
    help[1] = field[13];
    help2[0] = field[36];
    help2[1] = field[24];
    field[36] = help[0];
    field[24] = help[1];
    help[0] = field[38];
    help[1] = field[37];
    field[38] = help2[0];
    field[37] = help2[1];
    help2[0] = field[14];
    help2[1] = field[26];
    field[14] = help[0];
    field[26] = help[1];
    field[12] = help2[0];
    field[13] = help2[1];
}

void d(){
    help[0] = field[0];
    help[1] = field[1];
    help[2] = field[2];
    help2[0] = field[17];
    help2[1] = field[29];
    help2[2] = field[41];
    field[17] = help[0];
    field[29] = help[1];
    field[41] = help[2];
    help[0] = field[53];
    help[1] = field[52];
    help[2] = field[51];
    field[53] = help2[0];
    field[52] = help2[1];
    field[51] = help2[2];
    help2[0] = field[33];
    help2[1] = field[21];
    help2[2] = field[9];
    field[33] = help[0];
    field[21] = help[1];
    field[9] = help[2];
    field[0] = help2[0];
    field[1] = help2[1];
    field[2] = help2[2];

    help[0] = field[18];
    help[1] = field[19];
    help2[0] = field[20];
    help2[1] = field[32];
    field[20] = help[0];
    field[32] = help[1];
    help[0] = field[44];
    help[1] = field[43];
    field[44] = help2[0];
    field[43] = help2[1];
    help2[0] = field[42];
    help2[1] = field[30];
    field[42] = help[0];
    field[30] = help[1];
    field[18] = help2[0];
    field[19] = help2[1];

}

void di(){
    help[0] = field[2];
    help[1] = field[1];
    help[2] = field[0];
    help2[0] = field[9];
    help2[1] = field[21];
    help2[2] = field[33];
    field[9] = help[0];
    field[21] = help[1];
    field[33] = help[2];
    help[0] = field[51];
    help[1] = field[52];
    help[2] = field[53];
    field[51] = help2[0];
    field[52] = help2[1];
    field[53] = help2[2];
    help2[0] = field[41];
    help2[1] = field[29];
    help2[2] = field[17];
    field[41] = help[0];
    field[29] = help[1];
    field[17] = help[2];
    field[2] = help2[0];
    field[1] = help2[1];
    field[0] = help2[2];

    help[0] = field[20];
    help[1] = field[19];
    help2[0] = field[18];
    help2[1] = field[30];
    field[18] = help[0];
    field[30] = help[1];
    help[0] = field[42];
    help[1] = field[43];
    field[42] = help2[0];
    field[43] = help2[1];
    help2[0] = field[44];
    help2[1] = field[32];
    field[44] = help[0];
    field[32] = help[1];
    field[20] = help2[0];
    field[19] = help2[1];

}

void f(){
    help[0] = field[33];
    help[1] = field[34];
    help[2] = field[35];
    help2[0] = field[36];
    help2[1] = field[37];
    help2[2] = field[38];
    field[36] = help[0];
    field[37] = help[1];
    field[38] = help[2];
    help[0] = field[39];
    help[1] = field[40];
    help[2] = field[41];
    field[39] = help2[0];
    field[40] = help2[1];
    field[41] = help2[2];
    help2[0] = field[42];
    help2[1] = field[43];
    help2[2] = field[44];
    field[42] = help[0];
    field[43] = help[1];
    field[44] = help[2];
    field[33] = help2[0];
    field[34] = help2[1];
    field[35] = help2[2];

    help[0] = field[45];
    help[1] = field[46];
    help2[0] = field[47];
    help2[1] = field[50];
    field[47] = help[0];
    field[50] = help[1];
    help[0] = field[53];
    help[1] = field[52];
    field[53] = help2[0];
    field[52] = help2[1];
    help2[0] = field[51];
    help2[1] = field[48];
    field[51] = help[0];
    field[48] = help[1];
    field[45] = help2[0];
    field[46] = help2[1];
}

void fi(){
    help[0] = field[44];
    help[1] = field[43];
    help[2] = field[42];
    help2[0] = field[41];
    help2[1] = field[40];
    help2[2] = field[39];
    field[41] = help[0];
    field[40] = help[1];
    field[39] = help[2];
    help[0] = field[38];
    help[1] = field[37];
    help[2] = field[36];
    field[38] = help2[0];
    field[37] = help2[1];
    field[36] = help2[2];
    help2[0] = field[35];
    help2[1] = field[34];
    help2[2] = field[33];
    field[35] = help[0];
    field[34] = help[1];
    field[33] = help[2];
    field[44] = help2[0];
    field[43] = help2[1];
    field[42] = help2[2];

    help[0] = field[46];
    help[1] = field[47];
    help2[0] = field[48];
    help2[1] = field[45];
    field[48] = help[0];
    field[45] = help[1];
    help[0] = field[52];
    help[1] = field[51];
    field[52] = help2[0];
    field[51] = help2[1];
    help2[0] = field[50];
    help2[1] = field[53];
    field[50] = help[0];
    field[53] = help[1];
    field[46] = help2[0];
    field[47] = help2[1];
}

void b(){
    help[0] = field[18];
    help[1] = field[19];
    help[2] = field[20];
    help2[0] = field[15];
    help2[1] = field[16];
    help2[2] = field[17];
    field[15] = help[0];
    field[16] = help[1];
    field[17] = help[2];
    help[0] = field[12];
    help[1] = field[13];
    help[2] = field[14];
    field[12] = help2[0];
    field[13] = help2[1];
    field[14] = help2[2];
    help2[0] = field[9];
    help2[1] = field[10];
    help2[2] = field[11];
    field[9] = help[0];
    field[10] = help[1];
    field[11] = help[2];
    field[18] = help2[0];
    field[19] = help2[1];
    field[20] = help2[2];

    help[0] = field[0];
    help[1] = field[1];
    help2[0] = field[2];
    help2[1] = field[5];
    field[2] = help[0];
    field[5] = help[1];
    help[0] = field[8];
    help[1] = field[7];
    field[8] = help2[0];
    field[7] = help2[1];
    help2[0] = field[6];
    help2[1] = field[3];
    field[6] = help[0];
    field[3] = help[1];
    field[0] = help2[0];
    field[1] = help2[1];

}

void bi(){
    help[0] = field[9];
    help[1] = field[10];
    help[2] = field[11];
    help2[0] = field[12];
    help2[1] = field[13];
    help2[2] = field[14];
    field[12] = help[0];
    field[13] = help[1];
    field[14] = help[2];
    help[0] = field[15];
    help[1] = field[16];
    help[2] = field[17];
    field[15] = help2[0];
    field[16] = help2[1];
    field[17] = help2[2];
    help2[0] = field[18];
    help2[1] = field[19];
    help2[2] = field[20];
    field[18] = help[0];
    field[19] = help[1];
    field[20] = help[2];
    field[9] = help2[0];
    field[10] = help2[1];
    field[11] = help2[2];

    help[0] = field[2];
    help[1] = field[1];
    help2[0] = field[0];
    help2[1] = field[3];
    field[0] = help[0];
    field[3] = help[1];
    help[0] = field[6];
    help[1] = field[7];
    field[6] = help2[0];
    field[7] = help2[1];
    help2[0] = field[8];
    help2[1] = field[5];
    field[8] = help[0];
    field[5] = help[1];
    field[2] = help2[0];
    field[1] = help2[1];

}
