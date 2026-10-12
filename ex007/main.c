#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define ResultGreen 1
#define ResultYellow 2
#define ResultRed 4

typedef char Result;
typedef Result Results[5];

Result CheckCharacter(char, int, char*);

int main() {
    printf("abd\n");

    return 0;
}

Result CheckCharacter(char GuessWord, int Index, char* ActualWord) {
    char CorrectWord;
    CorrectWord = ActualWord[Index];

    switch (GuessWord)
    {
        case CorrectWord:
            return ResultGreen;
            break;
        default:
            if (IsIn(GuessWord, ActualWord))
            {
            return ResultYellow;
            }
            break;
    }
            return ResultRed;

};

Result CheckWord(char* GuessWord, char* ActualWord) {
    Results Res;
    int i;

    for (i = 0; i < 5; i++) {
        Res[i] = CheckCharacter(GuessWord[i], i, ActualWord);
    }

};