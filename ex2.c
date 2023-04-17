#include <stdio.h>
#include <stdlib.h>

int main() {
    char a='1', b='2', c='3', d='4', e='5', f='6', g='7', h='8', i='9'; // variables to represent each position on the board
    char player = 'x'; // player 'x' goes first
    char winner = '0'; // no winner at the start of the game
    int move=0;
    // game loop
    while (winner == '0') {
        // print the board
        printf("\n %s | %s | %s ", a, b, c);
        printf("\n---+---+---");
        printf("\n %s | %s | %s ", d, e, f);
        printf("\n---+---+---");
        printf("\n %s | %s | %s \n", g, h, i);

        // get the player's move
        int move;
        if (player == 'x')
        printf("Player 1, enter your move (1-9): ");
        else
            printf("Player 2, enter your move (1-9): ");
        scanf("%d", &move);

        // update the board with the player's move
        switch (move) {
            case 1:
                if(a != 'x' && a != 'o' ) {
                    a = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 2:
                if (b != 'x' && b != 'o') {
                    b = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 3:
                if(c != 'x' && c != 'o' ) {
                    c = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 4:
                if (d != 'x' && d != 'o') {
                    d = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 5:
                if(e != 'x' && e != 'o') {
                    e = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 6:
                if(f != 'x' && f != 'o') {
                    f = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 7:
                if (g != 'x' && g != 'o') {
                    g = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            case 8:
                if (h != 'x' && h != 'o') {
                    h = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
           case 9:
                if (i != 'x' && i != 'o') {
                    i = player;
                } else {
                    printf("position already occupied");
                    continue;
                }
                break;
            default:
                printf("invalid choice");
                break;
    // check if there is a winner
    if (a == b && b == c ) {
        winner = a;
    } else if (d == e && e == f ) {
        winner = d;
    } else if (g == h && h == i ) {
        winner = g;
    } else if (a == d && d == g ) {
        winner = a;
    } else if (b == e && e == h ) {
        winner = b;
    } else if (c == f && f == i ) {
        winner = c;
    } else if (a == e && e == i ) {
        winner = a;
    } else if (c == e && e == g ) {
        winner = c;
    }

    // switch players
    player = (player == 'x') ? 'o' : 'x';
}


// print the final board and the winner
printf("\n %s | %s | %s ", a, b, c);
printf("\n---+---+---");
printf("\n %s | %s | %s ", d, e, f);
printf("\n---+---+---");
printf("\n %s | %s | %s \n", g, h, i);
printf("\n%s wins!\n", (winner == 'x') ? "Player 1" : "Player 2");
    }
return 0;
system:"pause";


}
