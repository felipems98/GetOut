#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>


//--------------------
//declara��o Fun��o de tutorial 
tutorial();
void PtIntroducao();
//--------------------------------

//=============================
// fun��es sonoras
void intro(){
	Beep (659,300);
	Beep (349,300);
	Beep (698,300);
	Beep (369,300);
	Beep (739,650);
	
}

//------------------------------------
//Defini��o de variaveis Globais
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
//Fun��es Of History ou adicionais
//-----------------------------------------------

//Fun��o chamada para introduzir o tutorial.
tutorial(){
    printf("Bem vindo(a) ao tutorial, %s \n", nome);
    system("pause");
    printf("durante o jogo, varios dialogos e narrativas v�o sendo apresentados na tela. \n");
    system("pause");
    printf("em alguns momentos ser�o necessario realizar a��es, ue ser�o demarcadas com um numero especifico. \nBasta apenas digitar o numero correspondente a a��o desejada e apertar ENTER em seguida. \n Lembrando que deve ser utilizado apenas numeros para as respostas");
    system("pause");
    printf("Lembrando que todas as suas decis�es ter�o consequencias no desenvolver da historia e no seu final, ent�o escolha sabiamente.");
    system("pause");
    printf("DIVIRTA-SE!!");

    }
    
    
// Fun��o chamada para repostas invalidas
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
    printf("este jogo ainda est� incompleto, divirta-se com este beta \n");
    system("pause");

    printf("--------------------------------------------------------------\n");
    printf("               benvindo(a) ao Tente Fugir\n");
    printf("--------------------------------------------------------------\n");
    intro();
    system("pause");
    printf("Qual o seu nome? \n");
    gets(nome);
    //printf("%s", nome);
    printf("Ol� %s, voc� esta prestes a entrar em uma aventura dentro de um lugar desconhecido, \nOnde seu unico objetivo � sair com vida. \n\n", nome);
    printf("Quer fazer um breve tutorial antes de come�ar?\n");
    
    //---------------------------
    //Pergunta do tutorial
    //-------------------------
        do{
        printf("1 - sim\n");
        printf("2 - n�o\n");
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
    		printf("bom...ent�o....VAMOS COME�AR \n");
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
	//come�o do game
    //------------------
    
    
    
    //---------------------------
    //PT1: Indrodu��o
    //--------------------------
    void PtIntroducao(){
    
        printf("%s: Heey! acorde!\n", guard1);
        system ("pause");
        printf("\nVoc� com muito esfor�o consegue abrir os olhos.\n");
        system("pause");
        printf("\n%s: Achei que tinha te acertado forte demais. Se voc� tivesse morrido nao teria a menor gra�a.\n", guard1);
        system("pause");
        printf("\n\nA unica coisa que vc se lembra � de estar voltando pra casa depois de um dia de aula. Voc� � um universitario,\nestuda no periodo noturno.\n");
        printf("A ultima vez que lembra de ter consciencia foi antes de entrar em um beco,\num corte de caminho perto de sua casa\n \n \n \n \n");
        system("pause");
        
        
        //------------------------
        //Primeira Parte: Escurid�o
        //-------------------------
		printf("\n Com muito esfor�o, voc� consegue se sentar.\n");
        system("pause");
        printf("\nVoc� est� em uma cela escura. A unica luz que ali entra � a da lua cheia, atravez de uma abertura na parede selada\npor barras de ferro. Uma especie de janela\n");
        system("pause");
        printf("\nPercebendo um homem do outro lado de uma porta com grades, vestindo um capuz preto, impossibilitando sua identifica��o,\n voc� pensa em perguntar...\n");
        system("pause");
        do{
        	//--------------
        	//Perguntas
        	//-------------
            printf("\n1 - 'Onde eu estou?' \n2 - 'Quem � voc�?' \n3 - 'O que aconteceu?' \n4 - Voc� n�o faz mais nenhuma pergunta.\n");
            scanf("%d", r);
            //CONDI�OES DA RESPOSTA

                if (*r == 1){
                    printf("\n%s: Muito boa pergunta, sinceramente eu achei que n�o iria perguntar nunca.\nVoc� esta no Santuario. Sim...Santuario.\nEu dei outra ideia de nome mas eles nao aceitaram.\n", guard1);
                    loop = 1;
                }
                else if(*r == 2){

                    printf("\n%s: Ah sim, verdade, esqueci de me apresentar, eu sou o primeiro guardi�o. me chamo ESCURID�O\n", guard1);

                    strcpy(guard1 , "Escurid�o");
                    loop = 1;
                    printf("Voc� conheceu o primeiro guardi�o");
                }
                else if(*r == 3){
                    printf("\n%s: Claro, Claro. Voc� foi escolhido para a purifica��o\nVoc� foi escolhido para ser testado, se sobreviver\npode se considerar purificado, do contrario...bem....voc� morre. Meio Obviu n�?", guard1);
                    loop = 1;
                    	fflush(stdin);
                    	do{
                    		printf("\n1 - Purifica��o? do que est� falando? \n2 - Morrer? Por favor me tire daqui!\n3 - Voltar ");
                    		scanf("%d", r2);
                    		 if(*r2 ==  1){
                    		 	printf("\n %s: Sim, sim. N�o te contaram nada sobre isso? Droga sempre sobra pra mim.\n", guard1);
                    		 	system ("pause");
                    		 	printf("%s: Todo ano n�s, os veteranos da fraternidade B... ah � n�o posso falar de qual somos. Enfim.\n Todos os anos n�s fazemos a purifica��o com um calouro selecionado. Se voc� sobreviver a todos os testes, pode se tornar um de n�s. Se n�o...bom... voc� ja sabe", guard1);
							 	loop = 1;
							 }
							 else if(*r2 == 2){
							 	printf("%s: Nah nah, ainda n�o. Voc� n�o tem escolhas, precisa passar pelos testes.");
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
///FIM Introdu��o

//Inicio PT 1: Escurid�o


void Escuridao(){
	r=&resp;
	r2=&resp2;	
	printf("Ao fundo voc� escuta barulho de coisas caindo. %s olha instaneamente para a dire��o do barulho." guard1);
	system("pause");
	printf("\n%s: Droga! N�o saia daqui que eu ja volto", guard);
	system("pause");
	printf("Em seguida ele sai e te deixa sozinho na cela escura.")
	system("pause");
	
	
	
}







