#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMaze(int[], int);

int numberOfBlocks = 25;

int main () {
	
	int location = numberOfBlocks + 1; //default at start, 11 when finished
	//maze array
	//0 for wall, 1 for no wall
	int maze[25] ={1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0,0,0,1};
	
	while(location != numberOfBlocks + 2) {
		if(location == numberOfBlocks + 1) {
			printf("*\n");
			printMaze(maze, location);
			maze[0]=2;
			location=0;
		}
		else if(maze[location+1]==1) {
			printMaze(maze, location);
			maze[location]=1;
			maze[location+1]=2;
			location++;
		}
		else if(maze[location+5]==1) {
			printMaze(maze, location);
			maze[location]=1;
			maze[location+5]=2;
			location = location+5;
		}
		else if (location == numberOfBlocks - 1) {
			printMaze(maze, location);
			maze[location]=1;
			location++;
			printMaze(maze, location);
			location = numberOfBlocks + 2;
		}
	}
	return 1;
}

void printMaze(int maze[], int location) {
	int blockCount = 0;
	int i;
	while(blockCount!=5) {
		if(maze[blockCount]==0) {
			printf("X");
		}
		else if(maze[blockCount]==2) {
			printf("*");
		}
		else printf(" ");
		blockCount++;
	}
	printf("\n");
	while(blockCount!=10) {
		if(maze[blockCount]==0) {
			printf("X");
		}
		else if(maze[blockCount]==2) {
			printf("*");
		}
		else printf(" ");
		blockCount++;
	}
	printf("\n");
	while(blockCount!=15) {
		if(maze[blockCount]==0) {
			printf("X");
		}
		else if(maze[blockCount]==2) {
			printf("*");
		}
		else printf(" ");
		blockCount++;
	}
	printf("\n");
	while(blockCount!=20) {
		if(maze[blockCount]==0) {
			printf("X");
		}
		else if(maze[blockCount]==2) {
			printf("*");
		}
		else printf(" ");
		blockCount++;
	}
	printf("\n");
	while(blockCount<numberOfBlocks) {
		if(maze[blockCount]==0) {
			printf("X");
		}
		else if(maze[blockCount]==2) {
			printf("*");
		}
		else printf(" ");
		blockCount++;
	}
	if (location == numberOfBlocks) {
		printf("\n");
		for (i=0;i<5;i++) {
			printf(" ");
		}
		printf("*\n");
	}
	else {
		printf("\n\n\n");
		sleep(1);
	}
}	
