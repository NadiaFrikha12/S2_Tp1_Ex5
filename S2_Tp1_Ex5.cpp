//Ecrire un programme qui permet de déterminer le nombre de lignes d’un fichier
//ainsi que la longueur de chaque ligne. On suppose que les lignes du fichier sont
//de longueur fixe.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	FILE *fp;
	char nom[10]; //le nom du fichier à ouvrir
	char ligne[100]; //pour désigner chaque ligne du fichier
	int nb=0; //nombre de ligne
	int l=0; //longeur de la ligne
	
	//lire le nom du fichier a ouvrir
	printf("donner le nom du fichier a ouvrir: ");
	gets(nom);
	
	
	//ouvrir le fichier fp en mode read
	fp=fopen(nom,"r");
	
	//verifier si le pointeur du fichier est valide
	if (fp == NULL){
		printf("le fichier n'a pas put etre ouvert");
		return 0;
	}
	
	
	//donner le nombre de ligne
	while ((fgets(ligne,sizeof(ligne),fp)) != NULL){
		nb++;
		l=strlen(ligne);
		// Afficher la longueur de la ligne
		printf("La longueur de la ligne %d est : %d\n", nb, l);
	}
	//afficher le nombre de ligne
	printf("le nombre de ligne : %d",nb);
	
	return 0;
}
