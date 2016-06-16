#include <stdio.h>

int main(){

	int i,j,size,win,sum,prod;
	
	printf("Enter the board size: ");
	scanf("%d",&size);

	int board[size][size];

	printf("Enter the board:\n");

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	

	//checking raws 
	for(i=0;i<size;i++){
		sum=0;
		prod=1;
		for(j=0;j<size;j++){
		
		sum+=board[i][j];	//for noughts
		prod*=board[i][j];	//for crosses	
		}
		if(sum==0){		//checking the winner
			win=1;
		}
		if(prod==1){
			win=2;
		}
	}
	
	//checking columns noughts
	for(i=0;i<size;i++){
		sum=0;
		prod=1;
		for(j=0;j<size;j++){
		
		sum+=board[j][i];
		prod*=board[j][i];	
		}
		if(sum==0){
			win=1;
		}
		if(prod==1){
			win=2;
		}
	}
	
	//checkin main diagonal

	sum=0;
	prod=1;
		
	for(i=0;i<size;i++){
		
		sum+=board[i][i];
		prod*=board[i][i];	

	}
	if(sum==0){
		win=1;
	}
	if(prod==1){
		win=2;
	}

	//checking off diagonal 
	for(i=0;i<size;i++){
		
		sum+=board[i][size-1-i];
		prod*=board[i][size-1-i];	

	}
	if(sum==0){
		win=1;
	}
	if(prod==1){
		win=2;
	}

	printf("Here is the board:\n");

	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			switch (board[i][j]){

				case(0):printf("o "); break;
				case(1):printf("x "); break;
				default:printf(". "); break;
			}
		}
		printf("\n");
		
	}
	//deciding the winner
	switch (win){

		case(1):printf("Noughts win\n"); break;
		case(2):printf("Crosses win\n"); break;
		default:printf("Noone wins\n"); break;
	}

return 0;
}
	
