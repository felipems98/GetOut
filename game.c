#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>


//--------------------
//declaração Função de tutorial 
tutorial();
void PtIntroducao();
//--------------------------------

//=============================
// funções sonoras
void intro(){
	Beep (659,300);
	Beep (349,300);
	Beep (698,300);
	Beep (369,300);
	Beep (739,650);
	
}

//------------------------------------
//Definição de variaveis Globais
//-----------------------------------
char nome[20];
char guard1[20] = "???";
char guard2[20] = "???";
char guard3[20] = "???";
char guard4[20] = "???";

int loop=0;
int loop2=0;
int resp;
int resp2;
int *r;
int *r2;


//-----------------------------------------------
//Funções Of History ou adicionais
//-----------------------------------------------

//Função chamada para introduzir o tutorial.
tutorial(){
    printf("Bem vindo(a) ao tutorial, %s \n", nome);
    system("pause");
    printf("durante o jogo, varios dialogos e narrativas vão sendo apresentados na tela. \n");
    system("pause");
    printf("em alguns momentos serão necessario realizar ações, ue serão demarcadas com um numero especifico. \nBasta apenas digitar o numero correspondente a ação desejada e apertar ENTER em seguida. \n Lembrando que deve ser utilizado apenas numeros para as respostas");
    system("pause");
    printf("Lembrando que todas as suas decisões terão consequencias no desenvolver da historia e no seu final, então escolha sabiamente.");
    system("pause");
    printf("DIVIRTA-SE!!");

    }
    
    
// Função chamada para repostas invalidas
void respInv(){
	printf("Resposta Invalida.\n");
}



//------------------------------------
//Main Menu do jogo
//-----------------------------------
int main(){


r=&resp;
r2=&resp2;

    //-------setando linguagem em portugues-------
    setlocale(LC_ALL, "Portuguese");
    //--------------------------------------------
    printf("este jogo ainda está incompleto, divirta-se com este beta \n");
    system("pause");

    printf("--------------------------------------------------------------\n");
    printf("               benvindo(a) ao Tente Fugir\n");
    printf("--------------------------------------------------------------\n");
    intro();
    system("pause");
    printf("Qual o seu nome? \n");
    gets(nome);
    //printf("%s", nome);
    printf("Olá %s, você esta prestes a entrar em uma aventura dentro de um lugar desconhecido, \nOnde seu unico objetivo é sair com vida. \n\n", nome);
    printf("Quer fazer um breve tutorial antes de começar?\n");
    
    //---------------------------
    //Pergunta do tutorial
    //-------------------------
        do{
        printf("1 - sim\n");
        printf("2 - não\n");
        scanf("%d",r);
        if(*r == 1){
    //---------------------------	
    //pula para a func tutorial
    //--------------------------
            tutorial();
            loop = 1;
        }
        
    //--------------------------
    //Caso algum numero diferente dos especificos seja selecionado.
        else if (*r == 2){
    		printf("bom...então....VAMOS COMEÇAR \n");
    		loop = 1;
	}
    
        else{
        	respInv();
        	
	}
            
        }
        while(loop ==0);
system ("pause");
    printf(" \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n ");
     PtIntroducao();
	 return 0;
}



	//------------------
	//começo do game
    //------------------
    
    
    
    //---------------------------
    //PT1: Indrodução
    //--------------------------
    void PtIntroducao(){
    
        printf("%s: Heey! acorde!\n", guard1);
        system ("pause");
        printf("\nVocê com muito esforço consegue abrir os olhos.\n");
        system("pause");
        printf("\n%s: Achei que tinha te acertado forte demais. Se você tivesse morrido nao teria a menor graça.\n", guard1);
        system("pause");
        printf("\n\nA unica coisa que vc se lembra é de estar voltando pra casa depois de um dia de aula. Você é um universitario,\nestuda no periodo noturno.\n");
        printf("A ultima vez que lembra de ter consciencia foi antes de entrar em um beco,\num corte de caminho perto de sua casa\n \n \n \n \n");
        system("pause");
        
        
        //------------------------
        //Primeira Parte: Escuridão
        //-------------------------
		printf("\n Com muito esforço, você consegue se sentar.\n");
        system("pause");
        printf("\nVocê está em uma cela escura. A unica luz que ali entra é a da lua cheia, atravez de uma abertura na parede selada\npor barras de ferro. Uma especie de janela\n");
        system("pause");
        printf("\nPercebendo um homem do outro lado de uma porta com grades, vestindo um capuz preto, impossibilitando sua identificação,\n você pensa em perguntar...\n");
        system("pause");
        do{
        	//--------------
        	//Perguntas
        	//-------------
            printf("\n1 - 'Onde eu estou?' \n2 - 'Quem é você?' \n3 - 'O que aconteceu?' \n4 - Você não faz mais nenhuma pergunta.\n");
            scanf("%d", r);
            //CONDIÇOES DA RESPOSTA

                if (*r == 1){
                    printf("\n%s: Muito boa pergunta, sinceramente eu achei que não iria perguntar nunca.\nVocê esta no Santuario. Sim...Santuario.\nEu dei outra ideia de nome mas eles nao aceitaram.\n", guard1);
                    loop = 1;
                }
                else if(*r == 2){

                    printf("\n%s: Ah sim, verdade, esqueci de me apresentar, eu sou o primeiro guardião. me chamo ESCURIDÃO\n", guard1);

                    strcpy(guard1 , "Escuridão");
                    loop = 1;
                    printf("Você conheceu o primeiro guardião");
                }
                else if(*r == 3){
                    printf("\n%s: Claro, Claro. Você foi escolhido para a purificação\nVocê foi escolhido para ser testado, se sobreviver\npode se considerar purificado, do contrario...bem....você morre. Meio Obviu né?", guard1);
                    loop = 1;
                    	fflush(stdin);
                    	do{
                    		printf("\n1 - Purificação? do que está falando? \n2 - Morrer? Por favor me tire daqui!\n3 - Voltar ");
                    		scanf("%d", r2);
                    		 if(*r2 ==  1){
                    		 	printf("\n %s: Sim, sim. Não te contaram nada sobre isso? Droga sempre sobra pra mim.\n", guard1);
                    		 	system ("pause");
                    		 	printf("%s: Todo ano nós, os veteranos da fraternidade B... ah é não posso falar de qual somos. Enfim.\n Todos os anos nós fazemos a purificação com um calouro selecionado. Se você sobreviver a todos os testes, pode se tornar um de nós. Se não...bom... você ja sabe", guard1);
							 	loop = 1;
							 }
							 else if(*r2 == 2){
							 	printf("%s: Nah nah, ainda não. Você não tem escolhas, precisa passar pelos testes.");
							 	loop2 = 1;
							 	
							 }
							 else if(*r2 == 3){
							 	
							 	loop2 = 0;
							 	
							 }
							 else{
							 	respInv();
							 	loop2 = 1;
							 }
							 
						}
						while (loop2 !=0);
                    		 
                }
                else if(*r == 4){
                    loop = 0;
                }
                else
                    respInv();
            }
            while (loop !=0);
            //FIM PERGUNTAS
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
///FIM Introdução

//Inicio PT 1: Escuridão


void Escuridao(){
	r=&resp;
	r2=&resp2;	
	printf("Ao fundo você escuta barulho de coisas caindo. %s olha instaneamente para a direção do barulho." guard1);
	system("pause");
	printf("\n%s: Droga! Não saia daqui que eu ja volto", guard);
	system("pause");
	printf("Em seguida ele sai e te deixa sozinho na cela escura.")
	system("pause");
	
	
	
}







