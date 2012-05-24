extern char getChar();
extern void shutdown();
void kprintf(char str[]);
void cprintf(char a, char b, char c);
void lprintf(char p);
void clear();
char* video = (char*) 0xb8000;
int pPosition = 0;
extern int start();
void init(void)
{
    char hw[] = "Batman started! /n";
    clear();
    kprintf(hw);
    //start();
    shutdown();
    kprintf("shutdown fehlgeschlagen");
}

void kprintf(char str[]){
   int i;
   int sPosition = pPosition;
   for (i = 0; str[i] != '\0'; i++) {
        // Zeichen i in den Videospeicher kopieren
        if(str[i]=='/'&&str[i+1] == 'n'){       // slashn gillt hier als zeilen umbruch
          pPosition = pPosition + (160 - (pPosition % 160))-2;
          sPosition = pPosition;
          i +=2;
        }
        video[sPosition+(i * 2)] = str[i];

        // 0x07 = Hellgrau auf Schwarz
        video[sPosition+(i * 2 + 1)] = 0x07;
        pPosition +=2;
    }

}

void lprintf(char p){
    video[pPosition++] = p;
    video[pPosition++] = 0x07;
}

void cprintf(char a,char b,char c){
  video[pPosition++] = a;
  video[pPosition++] = 0x07;
  video[pPosition++] = b;
  video[pPosition++] = 0x07;
  video[pPosition++] = c;
  video[pPosition++] = 0x07;
}

void clear(){
  int i;
  for(i = 0; i <4000;i++)
  video[i] = 0;
  pPosition = 0;
}
