#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main(){
int i;
char word[10] = "________";// word holder
char word1[9];// the first word
char word2[9];// the second word
char word3[9];// the third word
char guess;
char on1;
int on = false;
srand((time(NULL)));
int st = rand() % 50;//st = first
//int nd = rand() % 50;//nd = second
//int rd = rand() % 50;//rd = third



printf("HANGMAN\nenter Y to continue\n");
scanf("%c", on1);
//if(on1 = "Y"){
    on = true;
//}


FILE* the_F = fopen("words.txt","r");
for(i;i<st;i++){
fscanf(the_F,"%s",word1);
}
printf("%s\n",word1);
printf("%d\n",st);
while(on = true){
    printf("word is %s", word);
    printf("enter letter");
    scanf("%c",guess);
    
break;
}
/*
for(i;i<nd;i++){
fscanf(the_F,"%s",word2);
}
printf("%s",word2);
printf("%d",nd);


for(i;i<rd;i++){
fscanf(the_F,"%s",word3);
}
printf("%s",word3);
printf("%d",rd);*/
    return 0;
}