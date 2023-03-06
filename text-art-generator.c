#include <stdio.h>
#include <string.h>

///1st layer
void first_layer(char s[], char c){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'a'){
            printf("     %c     ", c);
        }
        if(s[i] == 'B' || s[i] == 'b'){
            printf(" %c%c%c%c%c   ", c,c,c,c,c);
        }
        if(s[i] == 'C' || s[i] == 'c'){
            printf("   %c%c%c%c ", c,c,c,c);
        }
        if(s[i] == 'D' || s[i] == 'd'){
            printf(" %c%c%c%c%c    ", c,c,c,c,c);
        }
        if(s[i] == 'E' || s[i] == 'e'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'F' || s[i] == 'f'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'G' || s[i] == 'g'){
            printf("   %c%c%c%c  ", c,c,c,c);
        }
        if(s[i] == 'H' || s[i] == 'h'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'I' || s[i] == 'i'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'J' || s[i] == 'j'){
            printf("     %c ", c);
        }
        if(s[i] == 'K' || s[i] == 'k'){
            printf(" %c    %c ", c,c);
        }
        if(s[i] == 'L' || s[i] == 'l'){
            printf(" %c     ", c);
        }
        if(s[i] == 'M' || s[i] == 'm'){
            printf(" %c%c     %c%c ", c,c,c,c);
        }
        if(s[i] == 'N' || s[i] == 'n'){
            printf(" %c%c      %c ", c,c,c);
        }
        if(s[i] == 'O' || s[i] == 'o'){
            printf("   %c%c%c   ", c,c,c);
        }
        if(s[i] == 'P' || s[i] == 'p'){
            printf(" %c%c%c%c%c  ", c,c,c,c,c);
        }
        if(s[i] == 'Q' || s[i] == 'q'){
            printf("   %c%c%c   ", c,c,c);
        }
        if(s[i] == 'R' || s[i] == 'r'){
            printf(" %c%c%c%c%c  ", c,c,c,c,c);
        }
        if(s[i] == 'S' || s[i] == 's'){
            printf("  %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'T' || s[i] == 't'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'U' || s[i] == 'u'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'V' || s[i] == 'v'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'W' || s[i] == 'w'){
            printf(" %c           %c ", c,c);
        }
        if(s[i] == 'X' || s[i] == 'x'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'Y' || s[i] == 'y'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'Z' || s[i] == 'z'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == ' '){
            printf("         ");
        }
    }
    printf("\n");
}

///2nd layer
void second_layer(char s[], char c){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'a'){
            printf("    %c %c    ", c,c);
        }
        if(s[i] == 'B' || s[i] == 'b'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'C' || s[i] == 'c'){
            printf("  %c     ", c);
        }
        if(s[i] == 'D' || s[i] == 'd'){
            printf(" %c     %c  ", c,c);
        }
        if(s[i] == 'E' || s[i] == 'e'){
            printf(" %c     ", c);
        }
        if(s[i] == 'F' || s[i] == 'f'){
            printf(" %c     ", c);
        }
        if(s[i] == 'G' || s[i] == 'g'){
            printf("  %c      ", c);
        }
        if(s[i] == 'H' || s[i] == 'h'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'I' || s[i] == 'i'){
            printf("   %c   ", c);
        }
        if(s[i] == 'J' || s[i] == 'j'){
            printf("     %c ", c);
        }
        if(s[i] == 'K' || s[i] == 'k'){
            printf(" %c   %c  ", c,c);
        }
        if(s[i] == 'L' || s[i] == 'l'){
            printf(" %c     ", c);
        }
        if(s[i] == 'M' || s[i] == 'm'){
            printf(" %c %c   %c %c ", c,c,c,c);
        }
        if(s[i] == 'N' || s[i] == 'n'){
            printf(" %c  %c    %c ", c,c,c);
        }
        if(s[i] == 'O' || s[i] == 'o'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'P' || s[i] == 'p'){
            printf(" %c    %c ", c,c);
        }
        if(s[i] == 'Q' || s[i] == 'q'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'R' || s[i] == 'r'){
            printf(" %c    %c ", c,c);
        }
        if(s[i] == 'S' || s[i] == 's'){
            printf(" %c      ", c);
        }
        if(s[i] == 'T' || s[i] == 't'){
            printf("   %c   ", c);
        }
        if(s[i] == 'U' || s[i] == 'u'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'V' || s[i] == 'v'){
            printf("  %c     %c  ", c,c);
        }
        if(s[i] == 'W' || s[i] == 'w'){
            printf("  %c         %c  ", c,c);
        }
        if(s[i] == 'X' || s[i] == 'x'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'Y' || s[i] == 'y'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'Z' || s[i] == 'z'){
            printf("    %c  ", c);
        }
        if(s[i] == ' '){
            printf("         ");
        }
    }
    printf("\n");

}

///3nd layer
void third_layer(char s[], char c){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'a'){
            printf("   %c%c%c%c%c   ", c,c,c,c,c);
        }
        if(s[i] == 'B' || s[i] == 'b'){
            printf(" %c%c%c%c%c   ", c,c,c,c,c);
        }
        if(s[i] == 'C' || s[i] == 'c'){
            printf(" %c      ", c);
        }
        if(s[i] == 'D' || s[i] == 'd'){
            printf(" %c      %c ", c,c);
        }
        if(s[i] == 'E' || s[i] == 'e'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'F' || s[i] == 'f'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'G' || s[i] == 'g'){
            printf(" %c  %c%c%c  ", c,c,c,c);
        }
        if(s[i] == 'H' || s[i] == 'h'){
            printf(" %c%c%c%c%c%c%c%c%c ", c,c,c,c,c,c,c,c,c);
        }
        if(s[i] == 'I' || s[i] == 'i'){
            printf("   %c   ", c);
        }
        if(s[i] == 'J' || s[i] == 'j'){
            printf("     %c ", c);
        }
        if(s[i] == 'K' || s[i] == 'k'){
            printf(" %c%c%c    ", c,c,c);
        }
        if(s[i] == 'L' || s[i] == 'l'){
            printf(" %c     ", c);
        }
        if(s[i] == 'M' || s[i] == 'm'){
            printf(" %c  %c %c  %c ", c,c,c,c);
        }
        if(s[i] == 'N' || s[i] == 'n'){
            printf(" %c    %c  %c ", c,c,c);
        }
        if(s[i] == 'O' || s[i] == 'o'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'P' || s[i] == 'p'){
            printf(" %c%c%c%c%c  ", c,c,c,c,c);
        }
        if(s[i] == 'Q' || s[i] == 'q'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'R' || s[i] == 'r'){
            printf(" %c%c%c%c%c  ", c,c,c,c,c);
        }
        if(s[i] == 'S' || s[i] == 's'){
            printf(" %c%c%c%c%c  ", c,c,c,c,c);
        }
        if(s[i] == 'T' || s[i] == 't'){
            printf("   %c   ", c);
        }
        if(s[i] == 'U' || s[i] == 'u'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'V' || s[i] == 'v'){
            printf("   %c   %c   ", c,c);
        }
        if(s[i] == 'W' || s[i] == 'w'){
            printf("   %c   %c   %c   ", c,c,c);
        }
        if(s[i] == 'X' || s[i] == 'x'){
            printf("   %c %c   ", c,c);
        }
        if(s[i] == 'Y' || s[i] == 'y'){
            printf("   %c %c   ", c,c);
        }
        if(s[i] == 'Z' || s[i] == 'z'){
            printf("   %c   ", c);
        }
        if(s[i] == ' '){
            printf("         ");
        }
    }
    printf("\n");
}

///4th layer
void fourth_layer(char s[], char c){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'a'){
            printf("  %c     %c  ", c,c);
        }
        if(s[i] == 'B' || s[i] == 'b'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'C' || s[i] == 'c'){
            printf("  %c     ", c);
        }
        if(s[i] == 'D' || s[i] == 'd'){
            printf(" %c     %c  ", c,c);
        }
        if(s[i] == 'E' || s[i] == 'e'){
            printf(" %c     ", c);
        }
        if(s[i] == 'F' || s[i] == 'f'){
            printf(" %c     ", c);
        }
        if(s[i] == 'G' || s[i] == 'g'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'H' || s[i] == 'h'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'I' || s[i] == 'i'){
            printf("   %c   ", c);
        }
        if(s[i] == 'J' || s[i] == 'j'){
            printf(" %c   %c ", c,c);
        }
        if(s[i] == 'K' || s[i] == 'k'){
            printf(" %c   %c  ", c,c);
        }
        if(s[i] == 'L' || s[i] == 'l'){
            printf(" %c     ", c);
        }
        if(s[i] == 'M' || s[i] == 'm'){
            printf(" %c   %c   %c ", c,c,c);
        }
        if(s[i] == 'N' || s[i] == 'n'){
            printf(" %c     %c %c ", c,c,c);
        }
        if(s[i] == 'O' || s[i] == 'o'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'P' || s[i] == 'p'){
            printf(" %c      ", c);
        }
        if(s[i] == 'Q' || s[i] == 'q'){
            printf("  %c  %c%c  ", c,c,c);
        }
        if(s[i] == 'R' || s[i] == 'r'){
            printf(" %c   %c  ", c,c);
        }
        if(s[i] == 'S' || s[i] == 's'){
            printf("      %c ", c);
        }
        if(s[i] == 'T' || s[i] == 't'){
            printf("   %c   ", c);
        }
        if(s[i] == 'U' || s[i] == 'u'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'V' || s[i] == 'v'){
            printf("    %c %c    ", c,c);
        }
        if(s[i] == 'W' || s[i] == 'w'){
            printf("    %c %c %c %c    ", c,c,c,c);
        }
        if(s[i] == 'X' || s[i] == 'x'){
            printf("  %c   %c  ", c,c);
        }
        if(s[i] == 'Y' || s[i] == 'y'){
            printf("    %c    ", c);
        }
        if(s[i] == 'Z' || s[i] == 'z'){
            printf("  %c    ", c);
        }
        if(s[i] == ' '){
            printf("         ");
        }
    }
    printf("\n");
}

///5th layer
void fifth_layer(char s[], char c){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A' || s[i] == 'a'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'B' || s[i] == 'b'){
            printf(" %c%c%c%c%c   ", c,c,c,c,c);
        }
        if(s[i] == 'C' || s[i] == 'c'){
            printf("   %c%c%c%c ", c,c,c,c);
        }
        if(s[i] == 'D' || s[i] == 'd'){
            printf(" %c%c%c%c%c    ", c,c,c,c,c);
        }
        if(s[i] == 'E' || s[i] == 'e'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'F' || s[i] == 'f'){
            printf(" %c     ", c);
        }
        if(s[i] == 'G' || s[i] == 'g'){
            printf("   %c%c%c %c ", c,c,c,c);
        }
        if(s[i] == 'H' || s[i] == 'h'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'I' || s[i] == 'i'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'J' || s[i] == 'j'){
            printf("  %c%c%c  ", c,c,c);
        }
        if(s[i] == 'K' || s[i] == 'k'){
            printf(" %c    %c ", c,c);
        }
        if(s[i] == 'L' || s[i] == 'l'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == 'M' || s[i] == 'm'){
            printf(" %c       %c ", c,c);
        }
        if(s[i] == 'N' || s[i] == 'n'){
            printf(" %c      %c%c ", c,c,c);
        }
        if(s[i] == 'O' || s[i] == 'o'){
            printf("   %c%c%c   ", c,c,c);
        }
        if(s[i] == 'P' || s[i] == 'p'){
            printf(" %c      ", c);
        }
        if(s[i] == 'Q' || s[i] == 'q'){
            printf("   %c%c%c %c ", c,c,c,c);
        }
        if(s[i] == 'R' || s[i] == 'r'){
            printf(" %c    %c ", c,c);
        }
        if(s[i] == 'S' || s[i] == 's'){
            printf(" %c%c%c%c%c  ", c,c,c,c,c);
        }
        if(s[i] == 'T' || s[i] == 't'){
            printf("   %c   ", c);
        }
        if(s[i] == 'U' || s[i] == 'u'){
            printf("   %c%c%c%c%c   ", c,c,c,c,c);
        }
        if(s[i] == 'V' || s[i] == 'v'){
            printf("     %c     ", c);
        }
        if(s[i] == 'W' || s[i] == 'w'){
            printf("     %c   %c     ", c,c);
        }
        if(s[i] == 'X' || s[i] == 'x'){
            printf(" %c     %c ", c,c);
        }
        if(s[i] == 'Y' || s[i] == 'y'){
            printf("    %c    ", c);
        }
        if(s[i] == 'Z' || s[i] == 'z'){
            printf(" %c%c%c%c%c ", c,c,c,c,c);
        }
        if(s[i] == ' '){
            printf("         ");
        }
    }
    printf("\n");
}

int main()
{
    printf("***** TEXT ART GENERATOR *****\n");

    while(1){
        printf("\nWrite your name here: ");
        char s[10000];
        scanf(" %[^\n]%*c", s);

        printf("\nEnter any character (for example: *, a, 1,...etc): ");
        char c;
        scanf("%c", &c);

        printf("\n\n\n");

        ///1st layer
        first_layer(s, c);

        ///2nd layer
        second_layer(s, c);

        ///3nd layer
        third_layer(s, c);

        ///4th layer
        fourth_layer(s, c);

        ///5th layer
        fifth_layer(s, c);

        printf("\n\n\n");

        printf("Do you want exit (y/n)? ");
        char n;
        scanf(" %c", &n);
        if(n == 'y') break;
        if(n == 'n') continue;
    }



    return 0;
}
