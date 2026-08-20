#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {

	char typeNotation[3];
	char typeName[30];
	char gunName[30];
	float impactPower;
	int angleRange;
	int mimimumAngle;
	int minimumVelocity;
	int maxVelocity;

} ES;

typedef struct {

	char bshipName[20];
	char notation;
	char gunName[25];
} BS;

int getRandom(int min, int max);
void initializingBS(ES *EShip, void (*populateminAngle)(ES*, int*, int(*)(int, int)), void (*populateminVelocity)(ES*, int*, int(*)(int,int)), void(*populatemaxVelocity)(ES*, int*, int(*)(int, int)));
void populateminAngle(ES *Eship, int *minAngle, int(*getRandom)(int, int), int(*getMinMAx)(int, int));
void populateminVelocity(ES *EShip, int *minVelocity, int(*getRandom)(int, int), int(*getMinMAx)(int, int));
void populatemaxVelocity(ES *EShip, int * maxVelocity, int(*getRandom)(int, int), int(*getMinMAx)(int,int));
void getMinMAx(int *min, int *max);

void initializingBS(ES *EShip, void (*populateminAngle)(ES*, int*, int(*)(int, int)), void(*populateminVelocity)(ES* , int* , int(*)(int ,int)), void (*populatemaxVelocity)(ES*, int*, int(*)(int, int)))
{
	const char *notations[5] = {"EA", "EB", "EC", "ED", "EE"};
	const char *names[5] = {"1936A-class-Destroyer", "Gabbiano-class-Corvette", "Matsu-class-Destroyer", "F-class-Escort-Ships", "Japanese-Kaibōkan"};
	const char *gun[5] = {"SK C/34naval gun", "L/47 dualpurpose gun", "Type 89 dualpurpose gun", "SK C/32 naval gun", "(4.7 inch) naval guns"};
	float impact[5] = {0.08, 0.06, 0.07, 0.05, 0.04};
	int angleRange[5] = {20,30,25,50,70};
	int minAngle[5];
	int minVelocity[5];
	int maxVelocity[5];
	populateminAngle(EShip, minAngle, getRandom);
	populateminVelocity(EShip, minVelocity, getRandom);
	populatemaxVelocity(EShip, maxVelocity, getRandom);
	
	
};

void getMinMAx(int *min, int *max){
	printf("Enter the min value: ");
	scanf("%d", &min);
	printf("Enter the max value: ");
	scanf("%d", &max);
}
void populateminVelocity(ES *EShip, int *minVelocity, int(*getRandom)(int, int), int(*getMinMAx)(int, int)){

	int min;
	int max;
	getMinMAx(&min, &max);
	for(int i = 0; i < 5; i++){
		minVelocity[i] = getRandom(&min, &max);
	}
	
};
void populatemaxVelocity(ES * EShip, int * maxVelocity, int(*getRandom)(int, int), int(*getMinMAx)(int,int)){
	int min;
	int max;
	getMinMAx(&min, &max);
	for(int i = 0; i < 5; i++){
		maxVelocity[i] = getRandom(&min, &max);
	}

}
void populateminAngle(ES *Eship, int *minAngle, int(*getRandom)(int, int), int(*getMinMAx)(int ,int)){
	int min;
	int max;
	getMinMAx(&min, &max);
	for(int i = 0; i < 5; i++){
		minAngle[i] = getRandom(&min, &max);
	}

}
int getRandom(int min, int max){

		return (rand() % + (max - min + 1)) + min; 
}

void Canvas(int dim_x, int dim_y){

	printf("------------------------------------------------\n");
	printf("---------------Drawing BattleField--------------\n");
	printf("---------------*******************--------------\n");
	int EscortShips;
	printf("Enter the total number of Escort ships: ");
	scanf("%d", &EscortShips);

	//setting the size of the canvas
	
	printf("-------Enter the BattleFiled Dimmensions-------\n");
	printf("-------*********************************-------\n");

	printf("Enter the X dimension value: ");
	scanf("%d", &dim_x);
	printf("Enter the Y dimension value: ");
	scanf("%d", &dim_y);
}


void main_menu(){

	int option;

	do {
		printf("---------------------------------------------------\n");
		printf("*************ADVANCED NAVAL SIMULATOR**************\n");
		printf("***************************************************\n");
		printf("---------------------MAIN MENU---------------------\n");
		printf("---------------1.) Start Simulation----------------\n");
		printf("--------------2.) View Instructions----------------\n");
		printf("------------3.) Simulation Statistics--------------\n");
		printf("---------------------4.) Exit----------------------\n");

		switch(option != 4){
			case 1: 
					
			case 2:

			case 3:

			case 4:
		}
	} while(option != 4);

	

}

int Setup(void (*Canvas)(int, int), 
		  void(*initializingBS)(ES*, void(*populateminAngle)(ES*, int*, int(*)(int,int)), void(*populateminVelocity)(ES*, int*, int(*)(int, int)), void(*populatemaxVelocity)(ES*, int*, int(*)(int ,int))),
		  void(*populateminAngle)(ES*, int*, int(*)(int, int), 
		  void(*populateminVelocity)(ES* , int*, int(*)(int, int), 
		  void(populatemaxVelocity)(ES* , int*, int(*)(int,int))))){

			int MIN;
			int MAX;
			printf("Enter the min and max values: \n");

			//getting the min andmax values from users
			getMinMAx(&MIN, &MAX);
			//generating the random values
			getRandom(MIN, MAX);

			populateminAngle(EShip , *, getRandom);
			populateminVelocity(EShip, minVelocity, getRandom);
			populatemaxVelocity(EShip, maxVelocity, getRandom);
	



}
int main(){

	srand(time(0));

	return 0;
}