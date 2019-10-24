#include<iostream.h>
#include<conio.h>
#include<graphics.h>
main()
{
clrscr();
int i=0,s=0;
do
{
cout<<"!!!!|!!!|!!!!!!!|!!!|!!!!!!!|!!!|!!!!\n";
cout<<"!   |   |   !   |   |   !   |   |   !\n";
cout<<"!---|---|---!---|---|---!---|---|---!\n";
cout<<"!   |   |   !   |   |   !   |   |   !\n";
cout<<"!---|---|---!---|---|---!---|---|---!\n";
cout<<"!   |   |   !   |   |   !   |   |   !\n";
i++;
}
while(i<3);
cout<<"!!!!|!!!|!!!!!!!|!!!|!!!!!!!|!!!|!!!!\n";
char a;
int x=3,y=2;
gotoxy(7,2);
cout<<8;
gotoxy(15,2);
cout<<5;
gotoxy(23,2);
cout<<9;
gotoxy(31,2);
cout<<7;
gotoxy(7,4);
cout<<2;
gotoxy(11,4);
cout<<7;
gotoxy(27,4);
cout<<1;
gotoxy(31,4);
cout<<9;
gotoxy(3,6);
cout<<9;
gotoxy(35,6);
cout<<5;
gotoxy(11,8);
cout<<5;
gotoxy(15,8);
cout<<6;
gotoxy(19,8);
cout<<4;
gotoxy(23,8);
cout<<2;
gotoxy(27,8);
cout<<7;
gotoxy(11,12);
cout<<9;
gotoxy(15,12);
cout<<3;
gotoxy(19,12);
cout<<8;
gotoxy(23,12);
cout<<1;
gotoxy(27,12);
cout<<5;
gotoxy(3,14);
cout<<2;
gotoxy(19,14);
cout<<5;
gotoxy(35,14);
cout<<1;
gotoxy(7,16);
cout<<7;
gotoxy(11,16);
cout<<1;
gotoxy(27,16);
cout<<3;
gotoxy(31,16);
cout<<5;
gotoxy(7,18);
cout<<5;
gotoxy(15,18);
cout<<4;
gotoxy(23,18);
cout<<3;
gotoxy(31,18);
cout<<2;
do
{
a=getch();
switch(a)
{
case 72:y=y-2;
	gotoxy(x,y);
	break;
case 80:y=y+2;
	gotoxy(x,y);
	break;
case 75:x=x-4;
	gotoxy(x,y);
	break;
case 77:x=x+4;
	gotoxy(x,y);
	break;
}
}
while(a!=27);
getch();
}