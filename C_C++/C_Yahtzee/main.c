#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Dice_faces 6
#define DiceFivePieces 5
#define playturn 13

int rolledDice[5],score_cases,DiceSixFaces[6]={0,0,0,0,0,0},all_score_case[13],score[14],sum,showScore1[14],game,turn,k,l,min=7,count[7],count1[7];
int rolledDice1[5],score1_cases1,Dices1ixFaces1[6]={0,0,0,0,0,0},all_score1_case1[13],score1[14],sum1,showScore2[14];
int playKnR,playKnR2,i,allplayturn,small_s,small_s1,j,large_s,large_s1;
char player1[11], player2[11];

int showscore(void);
int showscore1(void);
int roll_dice(void);
int roll_dice1(void);
int roll_new_dice(void);
int roll_new_dice1(void);
int calAmount(void);
int calAmount1(void);
int show_score(void);
int show_score1(void);

int main()
{
    do{
            system("COLOR F0");
    printf("Enter first player name (10 letters) : ");
            scanf("%s", &player1);
            printf("\n");

            printf("Enter second player name (10 letters) : ");
            scanf("%s", &player2);
            printf("\n");

    for(allplayturn = 0, turn=1;allplayturn < playturn;++allplayturn,++turn)
    {

    srand(time(NULL));

        printf("\n                                ****** %s's TURN %d ****** \n\n",player1,turn);

        roll_dice();

        printf("\n");

    printf("You have 2 times to choose ROLL ALL DICES(type 1) ROLL SOME DICE(type 2) or CHOOSE SCORE(type 3)? ");
    scanf("%d", &playKnR);

    if (playKnR==1)
    {
        roll_dice();

        printf("\n");

        /***********************************************************************************************************/
        printf("You have 1 times to choose ROLL ALL DICES(type 1) ROLL SOME DICE(type 2) or CHOOSE SCORE(type 3)? ");
        scanf("%d", &playKnR2);

        if (playKnR2==1)
        {
        roll_dice();

        printf("\n");

        /************************************************************************************************************/

        calAmount();

        showscore();

    printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
    scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;

    printf("\n");
    } /*kr2=1*/
    /***********************************************************************************/
    if (playKnR2==2)
    {
       roll_new_dice();

    /************************************************************************************************************/

        calAmount();

        showscore();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;

    printf("\n");
    }
    /***********************************************************************************/

    if (playKnR2==3)
    {
        calAmount();

        showscore();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;

    printf("\n");
    }/*kr2=3*/
    }/*krn1*/
    /****************************************** END playKnR1 **********************************************/
    if (playKnR==2)
    {
        roll_new_dice();

    printf("You have 1 times to choose ROLL ALL DICES(type 1) ROLL SOME DICE(type 2) or CHOOSE SCORE(type 3)? ");
        scanf("%d", &playKnR2);

        if (playKnR2==1)
        {
        roll_dice();

        printf("\n");

        /************************************************************************************************************/

        calAmount();

        showscore();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;

    printf("\n");
    }/*krn2=1*/
    /***********************************************************************************/

    if (playKnR2==2)
    {
        roll_new_dice();

    /************************************************************************************************************/

        calAmount();

        showscore();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;
    printf("\n");

    } /*kr2=2*/
    /***********************************************************************************/
    if (playKnR2==3)
    {
        calAmount();

        showscore();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;

    printf("\n");
    }
    }/*kr=2*/
    /************************************* END playKnR2 ***************************************/

    if (playKnR==3)
    {
        calAmount();

        showscore();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score_cases);

    switch (score_cases)
    {
        case 1:
            showScore1[0]=score[0];
        break;
        case 2:
            showScore1[1]=score[1];
        break;
        case 3:
            showScore1[2]=score[2];
        break;
        case 4:
            showScore1[3]=score[3];
        break;
        case 5:
            showScore1[4]=score[4];
        break;
        case 6:
            showScore1[5]=score[5];
        break;
        case 7:
            showScore1[6]=score[6];
        break;
        case 8:
            showScore1[7]=score[7];
        break;
        case 9:
            showScore1[8]=score[8];
        break;
        case 10:
            showScore1[9]=score[9];
        break;
        case 11:
            showScore1[10]=score[10];
        break;
        case 12:
            showScore1[11]=score[11];
        break;
        case 13:
            showScore1[12]=score[12];
        break;

    }

    show_score();

    for(i=0;i<6;i++)
        DiceSixFaces[i]=0;

    printf("\n");
    }

        printf("                               ****** %s's TURN %d END ****** \n",player1, turn);
        /************************************** player 1 end *********************************************/

    printf("\n                                ****** %s's TURN %d ****** \n\n",player2, turn);

        roll_dice1();

        printf("\n");

    printf("You have 2 times to choose ROLL ALL DICES(type 1) ROLL SOME DICE(type 2) or CHOOSE SCORE(type 3)? ");
    scanf("%d", &playKnR);

    if (playKnR==1)
    {
        roll_dice1();

        printf("\n");

        /***********************************************************************************************************/
        printf("You have 1 times to choose ROLL ALL DICES(type 1) ROLL SOME DICE(type 2) or CHOOSE SCORE(type 3)? ");
        scanf("%d", &playKnR2);

        if (playKnR2==1)
        {
        roll_dice1();

        printf("\n");

        /************************************************************************************************************/

        calAmount1();

        showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");

    /***********************************************************************************/
    }
    if (playKnR2==2)
    {
      roll_new_dice1();

    /************************************************************************************************************/

        calAmount1();

        showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");

    /***********************************************************************************/

    }
    if (playKnR2==3)
    {
        calAmount1();

        showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");
    }
    }/*kr1*/
    /****************************************** END playKnR1 **********************************************/

    if (playKnR==2)
    {
        roll_new_dice1();

    printf("You have 1 times to choose ROLL ALL DICES(type 1) ROLL SOME DICE(type 2) or CHOOSE SCORE(type 3)? ");
        scanf("%d", &playKnR2);

            if (playKnR2==1)
        {
        roll_dice1();

        printf("\n");

        /************************************************************************************************************/

        calAmount1();

        showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");

    /***********************************************************************************/

    }
    if (playKnR2==2)
    {
    roll_new_dice1();

    /************************************************************************************************************/

        calAmount1();

        showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");

    /***********************************************************************************/

    }
    if (playKnR2==3)
    {
    calAmount1();

    showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");
    }
    }/*kr2*/
    /************************************* END playKnR2 ***************************************/


    if (playKnR==3)
    {
        calAmount1();

        showscore1();

        printf("\nchoose 1 2 3 4 5 6 7 8 9 10 11 12 13(Don't choose repeatly unless you'll lose 1 score case): ");
        scanf("%d",&score1_cases1);

    switch (score1_cases1)
    {
        case 1:
            showScore2[0]=score1[0];
        break;
        case 2:
            showScore2[1]=score1[1];
        break;
        case 3:
            showScore2[2]=score1[2];
        break;
        case 4:
            showScore2[3]=score1[3];
        break;
        case 5:
            showScore2[4]=score1[4];
        break;
        case 6:
            showScore2[5]=score1[5];
        break;
        case 7:
            showScore2[6]=score1[6];
        break;
        case 8:
            showScore2[7]=score1[7];
        break;
        case 9:
            showScore2[8]=score1[8];
        break;
        case 10:
            showScore2[9]=score1[9];
        break;
        case 11:
            showScore2[10]=score1[10];
        break;
        case 12:
            showScore2[11]=score1[11];
        break;
        case 13:
            showScore2[12]=score1[12];
        break;

    }

    show_score1();

    for(i=0;i<6;i++)
        Dices1ixFaces1[i]=0;

    printf("\n");
    }/*kr3*/
    printf("                               ****** %s's TURN %d END ****** \n\n",player2,turn);
        /************************************** player 2 end *********************************************/
    }

        for(i=0;i<playturn;++i)score[13]+=showScore1[i];
        printf("                                          %s got %d\n",player1,showScore1[13]);
        for(i=0;i<playturn;++i)score1[13]+=showScore2[i];
        printf("                                          %s got %d\n\n",player2,showScore2[13]);
        if (score1[13]>score[13])
            printf("                              ****** %s IS THE WINNER!!! ****** \n\n",player2);
        if (score[13]>score1[13])
            printf("                              ****** %s IS THE WINNER!!! ****** \n\n",player1);


        do
        {
        printf("Play again(1) or End(2)? ");
        scanf("%d", &game);
        }while((game<1)||(game>2));

    }while((game==1)||(game!=2));

    return 0;
}

int roll_dice(void)
{
        printf("Your dices is ");
        for (i = 0;i < DiceFivePieces ; ++i){
        rolledDice[i] = ( (rand() % Dice_faces) + 1);
        printf("%d ",rolledDice[i]);}

	return rolledDice[5];
}

int roll_dice1(void)
{
        printf("Your dices is ");
        for (i = 0;i < DiceFivePieces ; ++i){                                   //ทอยลูกเต๋า
        rolledDice1[i] = ( (rand() % Dice_faces) + 1);
        printf("%d ",rolledDice1[i]);}

	return rolledDice1[5];
}

int roll_new_dice(void)
{
	int Amount_of_dice, dices[5];

    do{
	printf("How many dices you want to roll? (1-5) ");
    scanf("%d",&Amount_of_dice);}
	while(Amount_of_dice<1||Amount_of_dice>5);

        printf("Which dices(1 2 3 4 5)? \n");
        for(i=0;i<Amount_of_dice;++i)
        {
        printf("");
        scanf("%d",&dices[i]);
        }

        if(dices[0]==1)
        {rolledDice[0] = ( (rand() % Dice_faces) + 1);
            if(dices[1]==2){rolledDice[1] = ( (rand() % Dice_faces) + 1);
                if(dices[2]==3)
                    {rolledDice[2] = ( (rand() % Dice_faces) + 1);
                    if(dices[3]==4)
                        {
                        rolledDice[3] = ( (rand() % Dice_faces) + 1);
                        if(dices[4]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                        }
                        if(dices[3]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                    }
                    if(dices[2]==4)
                    {rolledDice[3] = ( (rand() % Dice_faces) + 1);
                        if(dices[3]==5)
                        {rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                    }
                    if(dices[2]==5)
                    {rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                            }
                if(dices[1]==3)
                {rolledDice[2] = ( (rand() % Dice_faces) + 1);
                    if(dices[2]==4)
                        {rolledDice[3] = ( (rand() % Dice_faces) + 1);
                            if(dices[3]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                        }
                if(dices[1]==4)
                {rolledDice[3] = ( (rand() % Dice_faces) + 1);
                        if(dices[2]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                }
                if(dices[1]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                }
        }
        if(dices[0]==2)
        {rolledDice[1] = ( (rand() % Dice_faces) + 1);
                if(dices[1]==3)
                {rolledDice[2] = ( (rand() % Dice_faces) + 1);
                    if(dices[2]==4)
                        {rolledDice[3] = ( (rand() % Dice_faces) + 1);
                            if(dices[3]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                        }
                if(dices[1]==4)
                {rolledDice[3] = ( (rand() % Dice_faces) + 1);
                    if(dices[2]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                }
                if(dices[1]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                }
        }
        if(dices[0]==3)
        {rolledDice[2] = ( (rand() % Dice_faces) + 1);
            if(dices[1]==4)
                {rolledDice[3] = ( (rand() % Dice_faces) + 1);
                    if(dices[2]==5)
                    {rolledDice[4] = ( (rand() % Dice_faces) + 1);}
                }
                if(dices[1]==5)
                {rolledDice[4] = ( (rand() % Dice_faces) + 1);}
        }
        if(dices[0]==4)
        {
            rolledDice[3] = ( (rand() % Dice_faces) + 1);

                if(dices[1]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}
        }
        if(dices[0]==5){rolledDice[4] = ( (rand() % Dice_faces) + 1);}

    printf("Your dices is ");
    printf("%d %d %d %d %d\n",rolledDice[0],rolledDice[1],rolledDice[2],rolledDice[3],rolledDice[4]);

	return rolledDice[5];
}

int roll_new_dice1(void)
{
	int Amount_of_dice1, dices1[5];

	do{
	printf("How many dices you want to roll? (1-5) ");
    scanf("%d",&Amount_of_dice1);}
	while(Amount_of_dice1<1||Amount_of_dice1>5);

        printf("Which dices(1 2 3 4 5)? \n");
        for(i=0;i<Amount_of_dice1;++i)
        {
        printf("");
        scanf("%d",&dices1[i]);
        }

        if(dices1[0]==1)
        {rolledDice1[0] = ( (rand() % Dice_faces) + 1);
            if(dices1[1]==2){rolledDice1[1] = ( (rand() % Dice_faces) + 1);
                if(dices1[2]==3)
                    {rolledDice1[2] = ( (rand() % Dice_faces) + 1);
                    if(dices1[3]==4)
                        {
                        rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                        if(dices1[4]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                        }
                        if(dices1[3]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                    }
                    if(dices1[2]==4)
                    {rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                        if(dices1[3]==5)
                        {rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                    }
                    if(dices1[2]==5)
                    {rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                            }
                if(dices1[1]==3)
                {rolledDice1[2] = ( (rand() % Dice_faces) + 1);
                    if(dices1[2]==4)
                        {rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                            if(dices1[3]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                        }
                if(dices1[1]==4)
                {rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                        if(dices1[2]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                }
                if(dices1[1]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                }
        }
        if(dices1[0]==2)
        {rolledDice1[1] = ( (rand() % Dice_faces) + 1);
                if(dices1[1]==3)
                {rolledDice1[2] = ( (rand() % Dice_faces) + 1);
                    if(dices1[2]==4)
                        {rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                            if(dices1[3]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                        }
                if(dices1[1]==4)
                {rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                    if(dices1[2]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                }
                if(dices1[1]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                }
        }
        if(dices1[0]==3)
        {rolledDice1[2] = ( (rand() % Dice_faces) + 1);
            if(dices1[1]==4)
                {rolledDice1[3] = ( (rand() % Dice_faces) + 1);
                    if(dices1[2]==5)
                    {rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
                }
                if(dices1[1]==5)
                {rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
        }
        if(dices1[0]==4)
        {
            rolledDice1[3] = ( (rand() % Dice_faces) + 1);

                if(dices1[1]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
        }
        if(dices1[0]==5){rolledDice1[4] = ( (rand() % Dice_faces) + 1);}
    printf("Your dices is ");
    printf("%d %d %d %d %d\n",rolledDice1[0],rolledDice1[1],rolledDice1[2],rolledDice1[3],rolledDice1[4]);

	return rolledDice1[5];
}

int calAmount(void)
{
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice[i]==1){DiceSixFaces[0]+=1;}
        score[0]=1*DiceSixFaces[0];
        //****************จน.1**************************

        //****************จน.2**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice[i]==2){DiceSixFaces[1]+=1;}
        score[1]=2*DiceSixFaces[1];
        //****************จน.2**************************

        //****************จน.3**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice[i]==3){DiceSixFaces[2]+=1;}
        score[2]=3*DiceSixFaces[2];
        //****************จน.3**************************

        //****************จน.4**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice[i]==4){DiceSixFaces[3]+=1;}
        score[3]=4*DiceSixFaces[3];
        //****************จน.4**************************

        //****************จน.5**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice[i]==5){DiceSixFaces[4]+=1;}
        score[4]=5*DiceSixFaces[4];
        //****************จน.6**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice[i]==6){DiceSixFaces[5]+=1;}
        score[5]=6*DiceSixFaces[5];
        /*******************************************/

        for(i=0;i<7;++i)++count[rolledDice[i]];

        /*******************************************/

        for(i=1;i<Dice_faces+1;++i)
            if(count[i]==3)
                for(i=0;i<Dice_faces;++i)score[6]+=rolledDice[i];
            else score[6]=0;

        /*******************************************/

        for(i=1;i<Dice_faces+1;++i)
            if(count[i]==4)
                for(i=0;i<Dice_faces;++i)score[7]+=rolledDice[i];
            else score[7]=0;

        /*******************************************/

        for(i=1;i<Dice_faces+1;++i)
            for(j=2;i<Dice_faces+1;++i)
            {
            if(count[i]==3&&count[j]==2)score[8]=25;
            else score[8]=0;
            }

        /********************************************/

        for(i=1;i<Dice_faces+1;++i)
            if(rolledDice[i]>min)

        {
        if(count[i]==2&&count[j]==1)++small_s;
            if(small_s>3)score[9]=30;
            else score[9]=0;
        }

        /***********************************************/

        for(i=1;i<Dice_faces+1;++i)
        {
        if(count[i]==1)++large_s;
            if(large_s>4)score[10]=30;
            else score[10]=0;
        }

        /********************************************/

        for(i=1;i<Dice_faces+1;++i)
        {
        if(count[i]==5)score[11]=30;
        else score[11]=0;
        }

        /********************************************/

        for(i=0;i<DiceFivePieces;++i)score[12]+=rolledDice[i];

        /*********************************************/

        return score;
        }

int calAmount1(void)
{
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice1[i]==1){Dices1ixFaces1[0]+=1;}
        score1[0]=1*Dices1ixFaces1[0];
        //****************จน.1**************************

        //****************จน.2**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice1[i]==2){Dices1ixFaces1[1]+=1;}
        score1[1]=2*Dices1ixFaces1[1];
        //****************จน.2**************************

        //****************จน.3**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice1[i]==3){Dices1ixFaces1[2]+=1;}
        score1[2]=3*Dices1ixFaces1[2];
        //****************จน.3**************************

        //****************จน.4**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice1[i]==4){Dices1ixFaces1[3]+=1;}
        score1[3]=4*Dices1ixFaces1[3];
        //****************จน.4**************************

        //****************จน.5**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice1[i]==5){Dices1ixFaces1[4]+=1;}
        score1[4]=5*Dices1ixFaces1[4];
        //****************จน.6**************************
        for(i=0;i<DiceFivePieces;++i)
        if(rolledDice1[i]==6){Dices1ixFaces1[5]+=1;}
        score1[5]=6*Dices1ixFaces1[5];

        /*******************************************/

        for(i=0;i<7;++i)++count1[rolledDice1[i]];

        /*******************************************/

        for(i=1;i<Dice_faces+1;++i)
            if(count1[i]==3)
                for(i=0;i<Dice_faces;++i)score1[6]+=rolledDice1[i];
            else score1[6]=0;

        /*******************************************/

        for(i=1;i<Dice_faces+1;++i)
            if(count1[i]==4)
                for(i=0;i<Dice_faces;++i)score1[7]+=rolledDice1[i];
            else score1[7]=0;

        /*******************************************/

        for(i=1;i<Dice_faces+1;++i)
            for(j=2;i<Dice_faces+1;++i)
            {
            if(count1[i]==3||count1[j]==2)score1[8]=25;
            else score1[8]=0;
            }

        /********************************************/

        for(i=1;i<Dice_faces+1;++i)
            for(j=2;j<Dice_faces+1;++j)
        {
        if(count1[i]==1&&count1[j]==1)++small_s1;
            if(small_s1>3)score1[9]=30;
            else score1[9]=0;
        }

        /***********************************************/

        for(i=1;i<Dice_faces+1;++i)
        {
        if(count1[i]==1)++large_s1;
            if(large_s1>4)score1[10]=30;
            else score1[10]=0;
        }

        /********************************************/

        for(i=1;i<Dice_faces+1;++i)
        {
        if(count1[i]==5)score1[11]=30;
        else score1[11]=0;
        }

        /*********************************************/

        for(i=0;i<DiceFivePieces;++i)score1[12]+=rolledDice1[i];

        /*********************************************/

	return score1;
}

int show_score(void)
{
    printf("%s's score is ",player1);
    printf("Ace   |  ");printf("Twos  | ");printf("Threes | ");printf("Fours  | ");printf("Fives  | ");printf("Sixes");
    printf("\n      ");
    for(i=0;i<Dice_faces;++i)printf("%9d",showScore1[i]);
    printf("\n       ");
    printf("3 of a Kind | ");printf("4 of a Kind | ");printf("Full House | ");printf("Small Straight | ");printf("Large Straight | ");printf("Yahtzee | ");printf("Chance  ");
    printf("\n ");
    for(i=6;i<playturn;++i)printf("%14d",showScore1[i]);
    puts("");
    for(i=0;i<playturn;++i)score[i]=0;
}

int showscore(void)
{
    printf("\nCHOOSE 1 OF THESE\n");
    printf("%s's score is ",player1);
    printf("Ace   |  ");printf("Twos  | ");printf("Threes | ");printf("Fours  | ");printf("Fives  | ");printf("Sixes");
    printf("\n      ");
    for(i=0;i<Dice_faces;++i)printf("%9d",score[i]);
    printf("\n       ");
    printf("3 of a Kind | ");printf("4 of a Kind | ");printf("Full House | ");printf("Small Straight | ");printf("Large Straight | ");printf("Yahtzee | ");printf("Chance  ");
    printf("\n ");
    for(i=6;i<playturn;++i)printf("%14d",score[i]);
    puts("");
}

int show_score1(void)
{
    printf("%s's score is ",player2);
    printf("Ace   |  ");printf("Twos  | ");printf("Threes | ");printf("Fours  | ");printf("Fives  | ");printf("Sixes");
    printf("\n      ");
    for(i=0;i<Dice_faces;++i)printf("%9d",showScore2[i]);
    printf("\n       ");
    printf("3 of a Kind | ");printf("4 of a Kind | ");printf("Full House | ");printf("Small Straight | ");printf("Large Straight | ");printf("Yahtzee | ");printf("Chance  ");
    printf("\n ");
    for(i=6;i<playturn;++i)printf("%14d",showScore2[i]);
    puts("");
    for(i=0;i<playturn;++i)score1[i]=0;
}

int showscore1(void)
{
    printf("\nCHOOSE 1 OF THESE\n");
    printf("%s's score is ",player1);
    printf("Ace   |  ");printf("Twos  | ");printf("Threes | ");printf("Fours  | ");printf("Fives  | ");printf("Sixes");
    printf("\n      ");
    for(i=0;i<Dice_faces;++i)printf("%9d",score1[i]);
    printf("\n       ");
    printf("3 of a Kind | ");printf("4 of a Kind | ");printf("Full House | ");printf("Small Straight | ");printf("Large Straight | ");printf("Yahtzee | ");printf("Chance  ");
    printf("\n ");
    for(i=6;i<playturn;++i)printf("%14d",score1[i]);
    puts("");
}
