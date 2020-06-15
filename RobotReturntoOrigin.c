#include<stdio.h>
#include<string.h>
#include <stdbool.h>
bool judgeCircle(char* moves);
int main(void) {
    puts("Hello World!");
    char* move = "UDLR";
    bool x = judgeCircle(move);
    printf("%s", x ? "true" : "false");

    return 0;
}

bool judgeCircle(char* moves) {
    int x = 0, y = 0;
    int i = 0;
    int s = strlen(moves);
    for(i=0;i<s;i++){
        if (moves[i] == 'U') y--; //Up
        else if (moves[i] == 'D') y++;  //Down
        else if (moves[i] == 'L') x--;  //Left
        else if (moves[i] == 'R') x++;  //Right
    }
    return (x == 0) && (y == 0);

}
