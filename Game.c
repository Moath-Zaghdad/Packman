#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <time.h>
#include <pthread.h>

#define x 6// bedaeet al moraba3 X   14
#define z 2//  bedaeet al moraba3  Y   2
#define X 45 // tool al moraba3   X   35
#define Z 20// 3ard al moraba3  Y   20
#define M 75// Sor3at 2al 7arakee   100
#define X_coordinate 4// for graf   4
#define Y 6
#define The_distance_between_the_characters 2
#define Computing_Z_Applied 7// The distance between the Computing and Applied
#define SL 25   //   25

int Computing_x_Applied=X_coordinate,y_axis=Y;// for print APPLIDE .. .
int I,O;
int d,s,A=0,AA=0,WE=0,GH=0,OM=0,MO=0,SpeedKheng=0;
char tempo,The_old_number;// meshan al 2ed5al

FILE *Fi;
FILE *Xx;

pthread_t tid;// for Concurrent Programming (The program do With The same time a function Scan)
void *ptr = NULL;// for End Concurrent
Anather();

void setcolor(unsigned short color){//    ?EU??? C???? ^_^   ?E?C? ?C EE?I? EE?E??C ??C ???C ?E? 0 9 8 5
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}
void gotoxy(double i,double j){// lel ta7akom bel makan 2alathe saystem 2al teba3aa feeh X  &  Y
    COORD aa={i,j};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),aa);
}

void     Applied_Computing(){
        system("color 0f");
int i,o=59,Mm=1,m=23,cc;
    srand(time(NULL));

system("mode 60, 25");
   Geometric_Shape();
   Sleep(1000);
system("mode 75, 25");
    system("cls");
system("color 4f");
        KOL();
    Computing_x_Applied=X_coordinate;
    y_axis=Y;;
Sleep(1500);
}
void Geometric_Shape(){
   int i;int j;
   system("mode 50,40");
   for(i=0;i<29;i++)
   for(j=i;j<=29;j++){
           setcolor(i%15+1);
       gotoxy(10+i,5+j);
       Sleep(5);
       printf("%c",287);
       gotoxy(10+j,5+i);
       Sleep(5);
       printf("%c",272);

           setcolor(i%15+1);
       gotoxy(39-i,34-j);
       Sleep(5);
       printf("%c",286);
       gotoxy(39-j,34-i);
       Sleep(5);
       printf("%c",273);
   }
}

void KOL(){
A_A();
p(0);
p(0);
l();
i(0);
e();
d_d();
C();
o();
m();
p(Computing_Z_Applied);
u();
t();
i(Computing_Z_Applied);
n();
g();
}
void A_A(){
        int i=0;
        gotoxy(Computing_x_Applied,y_axis);
    for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,++y_axis);
    printf("%c  %c",219,219);
    gotoxy(Computing_x_Applied,++y_axis);
        for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,++y_axis);
    printf("%c  %c",219,219);
    gotoxy(Computing_x_Applied,++y_axis);
Sleep(SL);
    printf("%c  %c",219,219);
Computing_x_Applied+=4;
}
void p(int ZZzz){
y_axis=Y+1+ZZzz;
    Computing_x_Applied+=The_distance_between_the_characters;
    gotoxy(Computing_x_Applied,y_axis);
        int i=0;
    for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,++y_axis);

    printf("%c  %c",219,219);
    gotoxy(Computing_x_Applied,++y_axis);
        for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,++y_axis);
    printf("%c",219);
    gotoxy(Computing_x_Applied,++y_axis);
Sleep(SL);
    printf("%c",219);
Computing_x_Applied+=4;
y_axis--;
}
void l(){
        int i=0;
        y_axis=Y;
            Computing_x_Applied+=The_distance_between_the_characters;
    for(i=0;i<5;i++){
        gotoxy(Computing_x_Applied,y_axis++);
        printf("%c",219);
        Sleep(SL);}

Computing_x_Applied++;
}
void i(int ZZzz){
            int i=0;
        y_axis=Y+ZZzz;
            Computing_x_Applied+=The_distance_between_the_characters;
    gotoxy(Computing_x_Applied,y_axis++);
    printf("%c",219);
    for(i=0;i<3;i++){
        gotoxy(Computing_x_Applied,++y_axis);
        printf("%c",219);
        Sleep(SL);}

Computing_x_Applied++;
}
void e(){
        int i=0;
        y_axis=Y;
                    Computing_x_Applied+=The_distance_between_the_characters;
        gotoxy(Computing_x_Applied,++y_axis);
    for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,++y_axis);
    printf("%c  %c",219,219);
    gotoxy(Computing_x_Applied,++y_axis);
        for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,++y_axis);
    printf("%c",219);
        for(i=0;i<3;i++){
    printf("%c",220);
Sleep(SL);}
Computing_x_Applied+=4;
}
void d_d(){
int i=0;
Computing_x_Applied+=The_distance_between_the_characters;
y_axis=Y;

        gotoxy(Computing_x_Applied,y_axis+=4);
    for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied,--y_axis);
    printf("%c  %c",219,219);
    gotoxy(Computing_x_Applied,--y_axis);
        for(i=0;i<4;i++){
    printf("%c",219);
Sleep(SL);}
    gotoxy(Computing_x_Applied+3,--y_axis);
    printf("%c",219);
Sleep(SL);
    gotoxy(Computing_x_Applied+3,--y_axis);
    printf("%c",219);
Computing_x_Applied+=4;
}
void C(){// ::::3333333333333
int i=0;
y_axis=Y+Computing_Z_Applied;
Computing_x_Applied+=The_distance_between_the_characters-20;
        gotoxy(Computing_x_Applied,y_axis);
    for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SL);}

    for(i=1;i<5;i++){
    gotoxy(Computing_x_Applied,i+y_axis);
    printf("%c",219);
    Sleep(SL);}

    gotoxy(Computing_x_Applied,++y_axis+3);
        for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SL);}

Computing_x_Applied+=5;
}
void o(){
    int i=0;
y_axis=Y+Computing_Z_Applied;
Computing_x_Applied+=The_distance_between_the_characters;
        gotoxy(Computing_x_Applied,++y_axis);
    for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SL);}

    for(i=1;i<3;i++){
    gotoxy(Computing_x_Applied,y_axis+i);
    printf("%c   %c",219,219);
Sleep(SL);}

    gotoxy(Computing_x_Applied,++y_axis+2);
        for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SL);}

Computing_x_Applied+=5;
}
void m(){
int i=0;
y_axis=Y+Computing_Z_Applied;
Computing_x_Applied+=The_distance_between_the_characters;

        for(i=0;i<4;i++){
        gotoxy(Computing_x_Applied,++y_axis);
        printf("%c",219);
        Sleep(SL);}
        y_axis-=2;
        gotoxy(Computing_x_Applied,y_axis);
        for(i=0;i<5;i++){
            printf("%c",219);
            Sleep(SL);
        }
                for(i=0;i<2;i++){
        gotoxy(2+Computing_x_Applied,++y_axis);
        printf("%c",219);
        Sleep(SL);}
        y_axis-=3;
                for(i=0;i<3;i++){
        gotoxy(4+Computing_x_Applied,++y_axis);
        printf("%c",219);
        Sleep(SL);}

Computing_x_Applied+=5;
}
void u(){
int i=0;
y_axis=Y+Computing_Z_Applied+1;
Computing_x_Applied+=The_distance_between_the_characters;
for(;i<3;i++){
gotoxy(Computing_x_Applied,++y_axis);
printf("%c",219);
Sleep(SL);}

gotoxy(Computing_x_Applied,y_axis);
for(i=0;i<4;i++){
    printf("%c",223);
Sleep(SL);}

y_axis-=3;
Computing_x_Applied+=3;
for(i=0;i<3;i++){
gotoxy(Computing_x_Applied,++y_axis);
printf("%c",219);
Sleep(SL);}
Computing_x_Applied++;
}
void t(){
int i=0;
y_axis=Y+Computing_Z_Applied;
Computing_x_Applied+=The_distance_between_the_characters+1;
for(i=0;i<5;i++){
gotoxy(Computing_x_Applied,y_axis++);
printf("%c",219);
Sleep(SL);}
printf("%c",219);
y_axis-=4;
for(i=-1;i<2;i++){
gotoxy(i+Computing_x_Applied,y_axis);
printf("%c",219);
Sleep(SL);}
Computing_x_Applied+=2;
}
void n(){
int i=0;
y_axis=Y+Computing_Z_Applied;
Computing_x_Applied+=The_distance_between_the_characters;


        for(i=0;i<4;i++){
        gotoxy(Computing_x_Applied,++y_axis);
        printf("%c",219);
        Sleep(SL);}
        y_axis-=2;
        gotoxy(Computing_x_Applied,y_axis);
        for(i=0;i<4;i++){
            printf("%c",219);
            Sleep(SL);
        }
                for(i=0;i<2;i++){
        gotoxy(3+Computing_x_Applied,++y_axis);
        printf("%c",219);
        Sleep(SL);}
        Computing_x_Applied+=4;

}
void g(){
int i=0;
y_axis=Y+Computing_Z_Applied+1;
Computing_x_Applied+=The_distance_between_the_characters;
gotoxy(Computing_x_Applied,y_axis);
for(i=0;i<4;i++){
printf("%c",219);
Sleep(SL);}
gotoxy(Computing_x_Applied,++y_axis);
printf("%c  %c",219,219);
gotoxy(Computing_x_Applied,++y_axis);
for(i=0;i<4;i++){
printf("%c",219);
Sleep(SL);}
for(i=0;i<2;i++){
    gotoxy(3+Computing_x_Applied,++y_axis);
printf("%c",219);
Sleep(SL);}
gotoxy(Computing_x_Applied,y_axis);
printf("%c%c%c%c",219,219,219,219);

}




void R(int g,int h){// had meshan al shakel ^_^
    gotoxy(g,h);
    printf("%c",201);
    printf("%c",203);
    printf("%c",203);
    printf("%c",187);
    gotoxy(g,++h);

    printf("%c",186);
    printf("%c",174);
    printf("%c",175);
    printf("%c",186);

    gotoxy(g,++h);
    printf("%c",200);
    printf("%c",202);
    printf("%c",202);
    printf("%c",188);
}
void H(){// meshan el 2etar
    int i;
    for(i=0;i<=Z;i++){
    gotoxy(x,z+i);
    printf("%c",219);
    gotoxy(X+x,z+i);
    printf("%c",219);
    }
    for(i=0;i<=X;i++){
        gotoxy(i+x,z);
        printf("%c",220);
        gotoxy(i+x,Z+z);
        printf("%c",223);

    }

}
void h(){// masham el 2etar
    int i,j;
    for(j=4;j<Z;j+=4){
    for(i=5;i<X;i+=5){
        gotoxy(x+i,j+z);
        printf(".");
    }}
}

void K(int c){//ta7reek 2al Shakel 7asab 2al 7arake

    switch(c){
    case 2:
    for(c=1;c<=4;c++){

    Sleep(M-GH);
    gotoxy(I,O);
    printf("    ");
                O+=1;
        R(I,O);
        }
        break;
    case 8:

    for(c=1;c<=4;c++){

    Sleep(M-GH);
        gotoxy(I,O+2);
    printf("    ");
                O-=1;
        R(I,O);}
        break;
    case 4:

    for(c=1;c<=5;c++){


    Sleep(M-GH);
        gotoxy(I+2,O);
    printf("  ");
        gotoxy(I+2,O+1);
    printf("  ");
        gotoxy(I+2,O+2);
    printf("  ");
            I-=1;
        R(I,O);}
        break;
    case 6:

    for(c=0;c<5;c++){

    Sleep(M-GH);
        gotoxy(I,O);
    printf(" ");
        gotoxy(I,O+1);
    printf(" ");
        gotoxy(I,O+2);
    printf(" ");

            I+=1;
        R(I,O);}
        break;

    }
    if(O==s&&d==I){//566666666666666666666666666666666666666666666666666666666

A= A+WE+1;
    N();//al 2a3dad 2al 3ashwa2ea Meshan 7araket al To3oom
        Fi=fopen("Gamze.txt","w");
        fprintf(Fi,"By :  Mo'ath Mahmoud  ^_^ \n Welcome  \nThe highest value obtained : %d",A);//lel sawt 2alathe sawfa ea5roo7'
        fclose(Fi);
yy(A);// lel Malafat wa ta7deth al nata2e7'
        }



}
void P(int g,int h){// 2ashkal  al To3oom al mo7'talefe ^_^
       AA++;

    if(AA%2==1){// al Shakel     1111111111111111
    gotoxy(g,h);
    printf("%c",218);
    printf("%c",196);
    printf("%c",191);

    gotoxy(g,++h);

    printf("%c",179);
    printf("%c",173);
    printf("%c",179);


    gotoxy(g,++h);
    printf("%c",192);
    printf("%c",196);
    printf("%c",217);
    WE=0;
{// If The shaeb is the king Speed
    if(SpeedKheng==2){
            if(M-GH<=4)
        WE*2;

    else if(M-GH>58)
      GH+=8;
   else if(M-GH>40)
    GH++;
    SpeedKheng=0;
    }
}

    }
    else if(AA%8+1==5){// al Shakel     222222222222222222


SpeedKheng=2;


      gotoxy(g,h);
    printf("%c",214);
    printf("%c",210);
    printf("%c",187);

    gotoxy(g,++h);

    printf("%c",174);
    printf("%c",224);
    printf("%c",175);


    gotoxy(g,++h);
    printf("%c",207);
    printf("%c",207);
    printf("%c",207);

   WE+=rand()%10;
        WE=90;//tasre3 al Shkel

    }
    else{// al Shakel                   3333333333333333
{// If The shaeb is the king Speed
    if(SpeedKheng==2){
            if(M-GH<=4)
        WE*2;

    else if(M-GH>62)
      GH+=30;
   else if(M-GH>40)
    GH++;
    SpeedKheng=0;
    }
}

    gotoxy(g,h);
    printf("%c",218);
    printf("%c",196);
    printf("%c",191);

    gotoxy(g,++h);

    printf("%c",179);
    printf("%c",216);
    printf("%c",179);


    gotoxy(g,++h);
    printf("%c",192);
    printf("%c",196);
    printf("%c",217);
    gotoxy(2,2);
    WE+=5;


     }
    gotoxy(x+X+5,z+4);
    printf("The results : %d",A+OM);
    gotoxy(X+x+9,z+Z);
}
void N(){//al 2a3dad 2al 3ashwa2ea Meshan 7araket al To3oom


do{
    srand(time(NULL));
     s=rand()%5;

     d=rand()%5;

switch(d){
    case 0:
    d=1+x;
    break;
    case 1:
    d=1+x+5;
    break;
    case 2:
    d=1+x+10;
    break;
    case 3:
    d=1+x+15;
    break;
    case 4:
    d=1+x+20;
    break;

}
switch(s){
    case 0:
    s=1+z;
    break;
    case 1:
    s=1+z+4;
    break;
    case 2:
    s=1+z+8;
    break;
    case 3:
    s=1+z+12;
    break;
    case 4:
    s=1+z+16;
    break;
}
}while(d==I&&s==O);
P(d,s);
}
void yy(int ty){// lel Malafat wa ta7deth al nata2e7'
Xx=fopen("Gamze.vbs","w");
fprintf(Xx,"CreateObject(\"SAPI.SpVoice\").Speak\"The highest value obtained is = %d\"",ty);
fclose(Xx);
}

void MOM(){// le al nehaee btorsom shakel ^___^
    int i,j,k;
    char a[5];
    system("color 4E");
    system("cls");
    system("mode 59, 50");



    //1st triangle with space priting
    for(i=0;i<=22;i++)
    {gotoxy(6,i);
        for(j=i;22>=j;j++)
        {
            printf("%c",178);
            Sleep(10);
        }
        --j;
gotoxy(j+i+6,i);
        for(j=22;i<=j;j--)
        {
            printf("%c",178);
                    Sleep(10);
        }


    }

    //2nd triangle with space priting
    for(i=0;i<=22;i++)
    {gotoxy(6,i+22);
        for(j=0;j<=i;j++)
        {
            printf("%c",178);
            Sleep(10);
        }
gotoxy(j-i-i+43+6,i+22);
        for(j=-0;j<=i;j++)
        {
            printf("%c",178);
            Sleep(10);
        }

    }
    gotoxy(21,22);
printf("%c You Winner %c",1,1);
/*  gotoxy(12,24);
printf("Click Enter to complete",2,2);*/

}

void OMO(){// lel ta7akok men 2an ak mosta5dem eored al 2ekmal .......................
// pthread_join(tid, &ptr);

gotoxy(0,46);

    printf("If you want Continue Press C\n");
    printf("If you want Restart press R\n");
    printf("Press Enter to end");
OM=9;
gotoxy(35,50);
do{

    switch(tempo){
    case 'c':
    case 'C':
        OM=1;
        break;
    case 'R':
    case 'r':
        OM=0;
        break;
    case 0xd:
        OM=-1;
        break;}

}while(OM==9);
Sleep(10);
}
void StartX(){

    setcolor(2);
   gotoxy(6,4);
   printf("Hello if you want to start the game ");
    setcolor(3);
    printf(",");
    setcolor(15);
   printf(" press 1 ");
    setcolor(3);
    printf(",");
    setcolor(6);
   printf(" to End press any key  ");
   gotoxy(25,12);
setcolor(11);
printf("By :  ");
setcolor(12);
   printf("Mo'ath Mahmoud  ^_^");
//rasen     kaleb
setcolor(4);
    gotoxy(37,15);
    printf("%c",4);
setcolor(4);
    gotoxy(35,16);
    printf("%c",4);
setcolor(12);
    printf(" %c ",1);
setcolor(4);
    printf("%c",4);
    gotoxy(37,17);
setcolor(4);
    printf("%c",4);



   gotoxy(37,8);

}

void ConcurrentScanVariable(){
    tempo=_getch();
          if(tempo == 'S' ||tempo == 0x50||tempo == 0x48||tempo == 0x4b|| tempo == 0x4d||tempo == '2' ||tempo == 's'    ||tempo == '8' ||tempo == 'w' ||tempo == 'W' ||tempo == '2' ||tempo == '4' ||tempo == 'a' ||tempo == 'A' ||tempo == '2' ||tempo ==  'd'||tempo ==  '6' ||tempo == 'D'||tempo == 'R'||tempo == 'C'||tempo == 'c'||tempo == 'r' )
        The_old_number=tempo;

     else
    tempo=The_old_number;
}
main(){// Main ^_^
    int a=0;
    int VAL[50]={0},V=0,v;
StartX();

    I=x+1;
    O=z+1;
   char q;

q= _getch();
    if(q!='1'){

        return 0;}


    system("cls");

system("mode 80, 25");


        printf(" %c Press   (2 or s for %c)    (8 or w for %c)   (6 or d for %c)   (4 or a for %c)",7,25,24,26,27);
system("color 4f");

    H();//rasm al 2etar
    h();//rasm al 2etar
    N();//al 2a3dad 2al 3ashwa2ea Meshan 7araket al To3oom
    R(I,O);

while(!(OM==-1)){









    pthread_create(&tid,NULL,ConcurrentScanVariable,NULL);//for Concurrent Programing for ConcurrentScanVariable




    switch(tempo){
        case '2':
        case 's':
        case 'S':
        case 0x50:
            if(O+4<Z+z)
            K(2);
            else a++;
        break;
        case '8':
        case 'w':
        case 'W':
        case 0x48:
            if(O-4>z)
            K(8);
            else a++;
        break;
        case '4':
        case 'a':
        case 'A':
        case 0x4b:
            if(I-5>x)
            K(4);
            else a++;
        break;
        case '6':
        case 'd':
        case 'D':
        case 0x4d:
            if(I+5<X+x)
            K(6);
            else a++;
        break;
        default :
            break;
    }
    if(a>0){
            a=0;
        Anather();

    }

if(A-MO>500){
//  pthread_join(tid, &ptr);

//    Applied_Computing();
    MOM();
    OMO();


 if(OM==0){
    A=0;
    system("cls");
 //       printf(" %c Press   (2 or s) for %c    (8 or w) for %c   (6 or d) for %c   (4 or a) for %c ",7,25,24,26,27);

system("mode 75, 25");
system("color 4f");

    H();//rasm al 2etar
    h();//rasm al 2etar
    N();//al 2a3dad 2al 3ashwa2ea Meshan 7araket al To3oom
    R(I,O);
    GH=0;// for Sbeed
    The_old_number=0;
    }
else if(OM==1) {
    A+=OM;
    MO=A;
    OM=0;

system("mode 75, 25");
system("color 4f");

 //       printf(" %c Press   (2 or s) for %c    (8 or w) for %c   (6 or d) for %c   (4 or a) for %c ",7,25,24,26,27);
    system("cls");
    H();//rasm al 2etar
    h();//rasm al 2etar
    N();//al 2a3dad 2al 3ashwa2ea Meshan 7araket al To3oom
    R(I,O);
}

}
}
Sleep(500);
gotoxy(1,50);


}

Anather(){

    system("mode 70,28");
    system("color 4f");

    int X_axis=0;
    int Y_axis=0;
    int SLEEP= 4;
    int StanderdY=4;
    int StanderdXSwab = 3;
GH=0;// for Sbeed
The_old_number=0;


{//Y
int i=0;
Y_axis=StanderdY;
X_axis+=StanderdXSwab+8;

for(i=0;i<2;i++){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
}

    gotoxy(X_axis,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);



    gotoxy(X_axis+1,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",220);



    gotoxy(X_axis+4,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);



    gotoxy(X_axis+3,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",220);




for(i=0;i<2;i++){
    gotoxy(X_axis+4,Y_axis+1-i);
    Sleep(SLEEP);
    printf("%c",219);
}

for(i=0;i<3;i++){
    gotoxy(X_axis+2,Y_axis+i+3);
    Sleep(SLEEP);
    printf("%c",219);
}


X_axis+=4;
}
{//o

    int i=0;
Y_axis=StanderdY;
X_axis+=StanderdXSwab;
        gotoxy(X_axis,++Y_axis);
    for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}

    for(i=1;i<3;i++){
    gotoxy(X_axis,Y_axis+i);
    printf("%c   %c",219,219);
Sleep(SLEEP);}

    gotoxy(X_axis,++Y_axis+2);
        for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}

X_axis+=4;


}
{//u

int i=0;
Y_axis=StanderdY+1;
X_axis+=StanderdXSwab;

gotoxy(X_axis,++Y_axis);
Sleep(SLEEP);
printf("%c  %c",219,219);

gotoxy(X_axis,++Y_axis);
Sleep(SLEEP);
printf("%c  %c",219,219);
gotoxy(X_axis,++Y_axis);
for(i=0;i<4;i++){
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis+3,++Y_axis);
printf("%c",223);
X_axis+=4;


}
int ________=10;
{//a

int i=0;
Y_axis=StanderdY;
X_axis+=StanderdXSwab+________;
gotoxy(X_axis,Y_axis);
for(i=0;i<4;i++){
        Sleep(SLEEP);
printf("%c",220);
}
gotoxy(X_axis+3,Y_axis+1);
printf("%c",219);
gotoxy(X_axis,2+Y_axis);
for(i=0;i<4;i++){
        Sleep(SLEEP);
printf("%c",219);}
gotoxy(X_axis,Y_axis+3);
printf("%c",219);
gotoxy(X_axis,4+Y_axis);
for(i=0;i<4;i++){
        Sleep(SLEEP);
printf("%c",219);}
gotoxy(X_axis+3,Y_axis+3);
printf("%c",219);
gotoxy(0,0);
X_axis+=3;



}
{//r

int i=0;
Y_axis=StanderdY+1;
X_axis+=StanderdXSwab;

gotoxy(X_axis,Y_axis-1);
Sleep(SLEEP);
printf("%c",220);

for(i=0;i<4;i++){
    gotoxy(X_axis,Y_axis+i);
    Sleep(SLEEP);
    printf("%c",219);
}

gotoxy(X_axis+1,Y_axis);
Sleep(SLEEP);
printf("%c",223);

gotoxy(X_axis+2,Y_axis-1);
Sleep(SLEEP);
printf("%c",220);

gotoxy(X_axis+3,Y_axis-1);
Sleep(SLEEP);
printf("%c",220);


gotoxy(X_axis+4,Y_axis);
Sleep(SLEEP);
printf("%c",223);

X_axis+=4;

}
{//e

    int i=0;
    Y_axis=StanderdY+1;
    X_axis+=StanderdXSwab;

    gotoxy(++X_axis,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(++X_axis,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(X_axis,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",222);


    gotoxy(X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(--X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(--X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);
    gotoxy(X_axis,Y_axis);
printf("%c%c%c",220,220,220);


    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c%c%c",219,223,223);

    gotoxy(X_axis,++Y_axis);
    Sleep(SLEEP);
    printf("%c",219);



    gotoxy(++X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(++X_axis,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);


}

int New_liner = 18;
X_axis =22;

{//L

int i=0;
Y_axis=New_liner-1;
X_axis+=StanderdXSwab;
for(i=0;i<6;i++){
gotoxy(X_axis,Y_axis+i);
Sleep(SLEEP);
printf("%c",219);
}

gotoxy(X_axis,Y_axis+5);
for(i=0;i<3;i++){
Sleep(SLEEP);
printf("%c",219);
}
Sleep(SLEEP);
printf("%c",221);

X_axis+=3;

}
{//o

    int i=0;
Y_axis=New_liner;
X_axis+=StanderdXSwab;
        gotoxy(X_axis,++Y_axis);
    for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}

    for(i=1;i<3;i++){
    gotoxy(X_axis,Y_axis+i);
    printf("%c   %c",219,219);
Sleep(SLEEP);}

    gotoxy(X_axis,++Y_axis+2);
        for(i=0;i<5;i++){
    printf("%c",219);
Sleep(SLEEP);}

X_axis+=4;


}
{//s
    int i=0;
    Y_axis=New_liner+1;
    X_axis+=StanderdXSwab-1;

    gotoxy(X_axis+3,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(X_axis+2,Y_axis);
    Sleep(SLEEP);
    printf("%c",220);

    gotoxy(X_axis+1,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis+2);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+3,Y_axis+3);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis+2,Y_axis+4);
    Sleep(SLEEP);
    printf("%c",223);

    gotoxy(X_axis+1,Y_axis+3);
    Sleep(SLEEP);
    printf("%c",220);
X_axis+=3;

}
{//t
int i=0;
Y_axis=New_liner;
X_axis+=StanderdXSwab;
for(i=0;i<5;i++){
gotoxy(X_axis,Y_axis++);
printf("%c",219);
Sleep(SLEEP);}
printf("%c",219);
Y_axis-=4;
for(i=-1;i<2;i++){
gotoxy(i+X_axis,Y_axis);
printf("%c",219);
Sleep(SLEEP);}
X_axis+=1;

}


Sleep(1500);
SLEEP=2;
{// ^_^
    int i=0,j=0;
Y_axis=StanderdY;
X_axis=StanderdXSwab+8;
for(j=0;j<6;j++){
for(i=0;i<19;i++){
    gotoxy(X_axis+i,Y_axis+j);
    Sleep(SLEEP);
    printf("%c",219);


    gotoxy(X_axis+i+30,Y_axis+j);
    Sleep(SLEEP);
    printf("%c",219);
}}

X_axis+=30;




Y_axis=StanderdY+18;
X_axis=StanderdXSwab+32;


    gotoxy(X_axis+4,Y_axis+1);
    printf("%c",' ');
for(j=0;j<24;j++){
    for(i=0;i<7;i++){
    gotoxy(X_axis+j,Y_axis-i);
    Sleep(SLEEP);
    printf("%c",219);

    gotoxy(X_axis-j,Y_axis-i);
    Sleep(SLEEP);
    printf("%c",219);
    }
}
for(i=0;i<22;i+=2){//  0  0  0  0  0  0  0  0  0  0  0  0
    gotoxy(X_axis+i,Y_axis+1);
    printf("%c",223);
    Sleep(SLEEP);

    gotoxy(X_axis-i,Y_axis+1);
    printf("%c",223);
    Sleep(SLEEP);
}



Y_axis-=3;
for(j=0;j<24;j++){
    for(i=j/4;i<7;i++){

    gotoxy(X_axis+j,Y_axis-i);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis-j,Y_axis-i);
    Sleep(SLEEP);
    printf("%c",' ');

    }
}

Y_axis+=3;
i=23;
j=0;

{
    gotoxy(X_axis+i,Y_axis);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis-i,Y_axis);
    Sleep(SLEEP);
    printf("%c",' ');
j--;
    gotoxy(X_axis+i,Y_axis+j);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis-i,Y_axis+j);
    Sleep(SLEEP);
    printf("%c",' ');
i--;
    gotoxy(X_axis+i,Y_axis);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis-i,Y_axis);
    Sleep(SLEEP);
    printf("%c",' ');
    gotoxy(X_axis+i,Y_axis);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis-i,Y_axis);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis+i,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",' ');

    gotoxy(X_axis-i,Y_axis+1);
    Sleep(SLEEP);
    printf("%c",' ');
}


    gotoxy(X_axis,Y_axis-9);
    Sleep(SLEEP);
    printf("%c",219);




}




gotoxy(0,0);

    printf("Press R to restart  , or Press Enter to end");

OM=9;
gotoxy(35,50);
do{

    switch(tempo){
    case 'R':
    case 'r':
        OM=0;
        break;
    case 0xd:
        OM=-1;
        break;}

}while(OM==9);
Sleep(10);


 if(OM==0){
    A=0;
    system("cls");
 //       printf(" %c Press   (2 or s) for %c    (8 or w) for %c   (6 or d) for %c   (4 or a) for %c ",7,25,24,26,27);

system("mode 75, 25");
system("color 4f");

    H();//rasm al 2etar
    h();//rasm al 2etar
    N();//al 2a3dad 2al 3ashwa2ea Meshan 7araket al To3oom
    R(I,O);
}


}
