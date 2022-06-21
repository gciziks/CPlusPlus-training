#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

void drawTable(char table[3][3]){
    cout <<"\n";
    printf("\t %c | %c | %c \n",table[0][0],table[0][1],table[0][2]);
    cout << "\t-----------"<<endl;
    printf("\t %c | %c | %c \n",table[1][0],table[1][1],table[1][2]);
    cout << "\t-----------"<<endl;
    printf("\t %c | %c | %c\n",table[2][0],table[2][1],table[2][2]);
}

void drawNumTable(){
    printf("\n\t 1 | 2 | 3 \n");
    cout << "\t-----------"<<endl;
    printf("\t 4 | 5 | 6 \n");
    cout << "\t-----------"<<endl;
    printf("\t 7 | 8 | 9\n");

}

void getEquivalent(int* row,int* col, int play){
    switch(play){
        case 1:
            *row = 0;
            *col = 0;
            break;
        case 2:
            *row = 0;
            *col = 1;
            break;
        case 3:
            *row = 0;
            *col = 2;
            break;
        case 4:
            *row = 1;
            *col = 0;
            break;
        case 5:
            *row = 1;
            *col = 1;
            break;
        case 6:
            *row = 1;
            *col = 2;
            break;
        case 7:
            *row = 2;
            *col = 0;
            break;
        case 8:
            *row = 2;
            *col = 1;
            break;
        case 9:
            *row = 2;
            *col = 2;
            break;

    }
}

char getPlayerIcon(bool player){
    char playicon;
    if(player){
        return 'X';
    }
    else{
        return 'O';
    }
}

char playerMove(char table[3][3],char player){
    int play = -1;
    drawTable(table);
    bool validplay=false;

    while(play < 0 || play > 9){
        cout << "If you don't know how the positions work, insert 0!" << endl;
        cout << "Where would you like to play Player "<< player <<":" << endl;
        cin >> play;
        if(play == 0){
            drawNumTable();
            play = -1;
        }

        int col,row;
        getEquivalent(&row,&col,play);
        if(table[row][col] != '*'){
            cout << "\n---------------------\nSpace already filled\n---------------------" << endl;
            play = -1;
        }
        else{
            table[row][col] = player;
            return table[3][3];
        }
    }



    return play;
}

bool checkTie(char table[3][3]){
    int count_oc = 0;
    for(int x=0; x<3;x++){
        for(int y=0;y<3;y++){
            if(table[x][y] == '*'){
                count_oc++;
            }
        }
    }
    if (count_oc == 0){
        return true;
    }
    else{
        return false;
    }
}

bool checkWin(char table[3][3],char player){
    bool win = 0;
    bool tie = 0;
    // Horizontal | Vertical Win
    for(int x=0; x<3;x++){
        if(table[x][0] == player && table[x][1] == player && table[x][2] == player || table[0][x] == player && table[1][x] == player && table[2][x] == player){
            win = true;
        }
    }
    // Diagonal Win

    if(table[0][0] == player && table[1][1] == player && table[2][2] == player || table[0][2] == player && table[1][1] == player && table[2][0] == player){
        win = true;
    }

    if(win){
        return true;
    }
    else{
        tie = checkTie(table);
        if(tie){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    bool winner = false;
    bool x_player = true;
    char playericon;
    char table[3][3];
    memset(table, '*', sizeof(table));

    cout << "Remember 'X' Player always starts!";

    // GameLoop
    while(!winner){

        playericon = getPlayerIcon(x_player);
        table[3][3] = playerMove(table,playericon);
        winner = checkWin(table,playericon);
        x_player = !x_player;

    }
    cout << "\n-----------------------------------------------------\n";
    cout << "\tGame ended!\n";
    drawTable(table);
    cout << "\n-----------------------------------------------------\n";

    return 0;
}
