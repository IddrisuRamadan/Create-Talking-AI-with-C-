 #include<iostream>
 #include<windows.h>
 #include<mmsystem.h>
 #include<stdio.h>

 using namespace std;

 int main() {

 char ch[100];
 cout<<"*******************Welcome to AI******************************";

 while(1)
    {
 cout<<"\n\n";

 gets(ch);


 if(strcmp(ch, "hi")==0)
 {
     PlaySound(TEXT("hi.wav"),NULL,SND_SYNC);
 }

 else if (strcmp(ch,"Fine")==0)
 {
     PlaySound(TEXT("fine.wav"),NULL,SND_SYNC);
 }

 else if (strcmp(ch,"bye")==0)

 {
     PlaySound(TEXT("bye.wav"),NULL,SND_SYNC);
     exit(0);
 }
 }
 }

