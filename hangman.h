#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char cont;
char eliminate = '_';
char wordtrue1[9];
char wordtrue2[9];
char wordtrue3[9];
char wordsee[9] = "________";
char gues;
int no = true;
int on = true;
int a,body = 0;
int won;

typedef struct{
    int winloss;
}wl;


void body1(){
    if(body == 0){//no wrong answers, no parts
        printf("___________\n|       |\n|\n|\n|\n|\n|\n|__________");

    }
    else if(body == 1){// one wrong answers, head
        printf("___________\n|       |\n|       O\n|\n|\n|\n|\n|__________");

    }
    else if(body == 2){// two wrong answers, head, body
        printf("___________\n|       |\n|       O\n|       |\n|\n|\n|\n|__________");

    }
    else if(body == 3){// three wrong answers,head, body,left arm
        printf("___________\n|       |\n|       O\n|      /|\n|\n|\n|\n|__________");

    }
    else if(body == 4){// four wrong answers, head, body, both arms
        printf("___________\n|       |\n|       O/\n|      /|\n|\n|\n|\n|__________");

    }
    else if(body == 5){// five wrong answers , head, body, both arms, left leg
        printf("___________\n|       |\n|       O/\n|      /|\n|      /\n|\n|\n|__________");

    }
    else{// six wrong, body compleate, game over
        printf("___________\n|       |\n|       O/\n|      /|/\n|      /\n|\n|\n|__________\ngame over");
    }
    

}

void intro(){
    printf("Welcome to hangman\n");
}

void YN(){
    printf("\nenter Y to continue or N to cancel:\n");
    scanf("%c", &cont);
    switch(cont){
    case 'N':
    body = 6;
    printf("game end\n");
    break;
    case 'Y':
    printf("game begins\n");
    break;
    default:
    printf("\nerror enter Y or N");
    scanf("%c",&cont);
    }
}

void scanDfile(){
    srand((time(NULL)));
    int a = rand() % 50;
    FILE* file1 = fopen("words.txt","r");
    for(int i = 0;i<a;i++){
        fscanf(file1,"%s", wordtrue1);
        fscanf(file1,"%s", wordtrue2);
        fscanf(file1,"%s", wordtrue3);
    }
    //printf("%s,%d\n",wordtrue,a);
}

void quess1(){
    printf("\nenter letter:");
    scanf("%c", &gues);
    for(int j = 0;j < 9;j++){
        if (gues == wordtrue1[j]){
            wordsee[j] = gues;
            wordtrue1[j] = eliminate;
            printf("correct!\n");
            won = won + 1;
            no = false;
            break;
        }
    }
    if (no == true){
        body = body + 1;
        printf("incorrect\n");
        
    }
    no = true;
    printf("%s\n", wordsee);
    printf("try another letter\n");
    }

void quess2(){
    printf("\nenter letter:");
    scanf("%c", &gues);
    for(int j = 0;j < 9;j++){
        if (gues == wordtrue2[j]){
            wordsee[j] = gues;
            wordtrue2[j] = eliminate;
            printf("correct!\n");
            won = won + 1;
            no = false;
            break;
        }
    }
    if (no == true){
        body = body + 1;
        printf("incorrect\n");
        
    }
    no = true;
    printf("%s\n", wordsee);
    printf("try another letter\n");
    }

void quess3(){
    printf("\nenter letter:");
    scanf("%c", &gues);
    for(int j = 0;j < 9;j++){
        if (gues == wordtrue3[j]){
            wordsee[j] = gues;
            wordtrue3[j] = eliminate;
            printf("correct!\n");
            won = won + 1;
            no = false;
            break;
        }
    }
    if (no == true){
        body = body + 1;
        printf("incorrect\n");
        
    }
    no = true;
    printf("%s\n", wordsee);
    printf("try another letter\n");
    }

void new_game(){
    body = 0;
    for(int o = 0; o < 9; o++){
        wordsee[o] = eliminate;
    }
}