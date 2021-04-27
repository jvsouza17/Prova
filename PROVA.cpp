// Nome: Jo�o Victor �lvares
// Matr�cula: UC21106304
// Curso: Engenharia de software

#include <stdio.h> 		// biblioteca principal em linguagem c, cont�m fun��es de entrada e sa�da
#include <locale.h> 		// biblioteca para usar a l�ngua portuguesa
#include <stdlib.h> 		// biblioteca para mudar a cor do sistema
#include <string.h> 		// biblioteca para reconhecer o comando strlen
#include <ctype.h> 		// biblioteca para reconhecer o comando tolower

int main () { //�nicio do c�digo
    setlocale(LC_ALL, "Portuguese");		// reconhecimento da l�ngua portuguesa
    system("color 02"); 		// mudan�a de cor no sistema 
    
    int sessoes, idade, espectadores, i, maiorDeIdadeM=0, maiorDeIdadeF=0, crianca=0, adolescente=0, adulto=0, idoso=0, homem=0, mulher=0; 		// declara��es de inteiro
    char filme[40], sexo, pessoas; 		// declara��es de char
    
    printf("Seja bem vindo ao Cinemark!\n"); 		// boas vindas ao usu�rio
    printf("Quantas sess�es de filme voc� deseja?"); 		// perguntar quantas sess�es o usu�rio deseja
    scanf("%d", &sessoes); 		// reconhecer a pergunta acima e associar a sess�es
    
    while(sessoes != 2) { 		// �nicio do while, aceitar exatamente 2
        printf("Quantas sess�es de filme voc� deseja?"); 		// perguntar quantas sess�es o usu�rio deseja novamente
        scanf("%d", &sessoes); 		// reconhecer a pergunta acima e associar a sess�es
    } // final do while
    system("cls"); 		// limpar a tela no sistema
    fflush(stdin); 		// limpar o buffer de mem�ria
    
    printf("Qual o filme?"); 		// perguntar o filme para o usu�rio
    fgets(filme,40,stdin); 		// reconhecer a pergunta acima, o fgets � necess�rio caso o filme tenha mais de uma palavra
    
	while(strlen(filme) <= 2) { 		// in�cio do while, se o char filme tiver 2 ou menos caracteres deve perguntar o filme novamente ao usu�rio
        printf("Digite o nome do filme!\n"); 		// alertar o us�ario
        printf("Qual o filme?"); 		// digite o nome do filme
        fgets(filme,40,stdin); 		// reconhecer a pergunta acima, o fgets � necess�rio caso o filme tenha mais de uma palavra
        } // final do while
        
        fflush(stdin); 		//limpar o buffer de mem�ria
        system("cls"); 		// limpar a tela no sistema
    
    printf("Quantas pessoas assistir�o ao filme? (M�nimo 10 pessoas)"); 		// perguntar o n�mero de pessoas que ver�o o filme
    scanf("%d", &espectadores); 		// reconhecer a pergunta acima e associar a espectadores
    
    while(espectadores <= 9) { 		// �nicio do while, definindo que n�o pode abaixo de 10 pessoas
        printf("M�nimo 10 pessoas\n"); 		// alertando o usu�rio sobre o m�nimo de pessoas
        printf("Quantas pessoas assistir�o ao filme? (M�nimo 10 pessoas)"); 		// perguntando novamente ao usu�rio quantas pessoas assistir�o ao filme 
        scanf("%d", &espectadores); 		// reconhecer a pergunta acima e associar a espectadores
    } // final do while
    system("cls"); 		// limpar a tela no sistema
      
        for(i = 1; i <= espectadores; i++) { 		// �nicio do for, o 'i' vai aumentando em uma unidade at� chegar ao n�mero de espectadores
            do { // �nicio do do while
                printf("Qual o sexo?"); 		// perguntar ao usu�rio qual o sexo, depende do n�mero de espectadores
                fflush(stdin); 		// limpar o buffer de mem�ria
                scanf("%c", &sexo); 		// reconhecer a pergunta acima e associar a sexo
                sexo = tolower(sexo); 		// reconhecer a resposta da pergunta sempre como 'm' ou 'f' M�NUSCULO
            } while(sexo != 'm' && sexo != 'f'); 		// final do do while, enquanto for diferente de 'm' e 'f' vai perguntar eternamente
            if(sexo == 'm') { 		// �nicio do if, se sexo for masculino o sistema repete os homens
				homem++; 		// repeti��o de homens de acordo com o n�mero de espectadores		
			}if(sexo == 'f') { 		// �nicio do if, se sexo for feminino o sistema repete as mulheres
				mulher++; 		//  repeti��o de mulheres de acordo com o n�mero de espectadores
			} // final do if
			do { 		// �nicio do do while
                printf("Qual a idade?"); 		// perguntar ao usu�rio a idade, depende do n�mero de espectadores
                scanf("%d", &idade); 		// reconhecer a pergunta acima e associar a idade
            } while(idade < 3 || idade > 100); 		// final do do while, se a idade n�o estiver entre 3 e 100 ir� perguntar eternamente              
            if(idade >= 3 && idade <= 13) { 		// �nicio do if, se a idade for entre 3 e 13
                printf("Crian�a\n", crianca); 		// aparece crin�a no sistema
                crianca++; 		// repeti��o de crian�as de acordo com o n�mero de espectadores
            } else if(idade >= 14 && idade <= 17) { 		// se a idade for entre 14 e 17
                printf("Adolescente\n", adolescente);		 // aparece adolescente no sistema
                adolescente++; 		// repeti��o de adolescentes de acordo com o n�mero de espectadores
            } else if(idade >= 18 && idade <= 64) { 		// se a idade for entre 18 e 64
                printf("Adulto\n", adulto); 		// aparece adulto no sistema
                adulto++; 		// repeti��o de adultos de acordo com o n�mero de espectadores
            } else if(idade >= 65 && idade <= 100) {		// se a idade for entre 65 e 100 
            	printf("Idoso\n", idoso); 		// aparece idoso no sistema
            	idoso++; 		// repeti��o de idosos de acordo com o n�mero de espectadores
        	} 
		if(idade >= 18 && sexo == 'm') { 		// in�cio do if, se a idade for igual ou maior de 18 e o sexo for 'm' o sistema repete o n�mero de homens maiores de idade
			maiorDeIdadeM++; 		// repeti��o dos homens maiores de idade de acordo com o n�mero de espectadores
		} // final do if 							
		if(idade >= 18 && sexo == 'f') {  		// �nicio do if, se a idade for igual ou maior de 18 e o sexo for 'f' o sistema repete o n�mero de mulheres maiores de idade
			maiorDeIdadeF++; 		// repeti��o das mulheres maiores de idade de acordo com o n�mero de espectadores 
		} // final do if		  	 
		} // final do for
					 
	fflush(stdin); 		// limpar o buffer
	system("cls"); 		// limpar a tela no sistema
		
		// tabela final	
		system("cls"); 		//limpar a tela
		printf("====================================\n"); 		// design da tabela
		printf("Seus dados:\n"); 		// aparecer 'Seus dados' e pular uma linha, no sistema
		printf("Filme: %s", filme); 		//mostrar o nome do filme
		printf("Pessoas que assistiram o filme: %d\n", espectadores); 		// n�mero de pessoas que assistiram o filme
		printf("N�mero de crian�as: %d\n", crianca); 		// indicar o n�mero de crian�as
		printf("N�mero de adolescentes: %d\n", adolescente); 		// indicar o n�mero de adolescentes
		printf("N�mero de adultos: %d\n", adulto); 		// indicar o n�mero de adultos
		printf("N�mero de idosos: %d\n", idoso); 		// indicar o n�mero de idosos     
		printf("N�mero de homens: %d\n", homem); 		// indicar o n�mero de homens
		printf("N�mero de mulheres: %d\n", mulher); 		// indicar o n�mero de mulheres
		fflush(stdin); 		// limpar o buffer
		printf("Homens maiores de idade: %i\n", maiorDeIdadeM); 		// indicar o n�mero de homens maiores de idade
		printf("Mulheres maiores de idade: %i\n", maiorDeIdadeF); 		// indicar o n�mero de mulheres maiores de idade	
		printf("Muito obrigado pela presen�a, volte sempre!\n"); 		// mensagem de despedida
		printf("===================================="); 		// design da tabela	
// conforme descrito no livro c�digo limpo, eu acredito que meu c�digo possui uma boa escolha de nomes. 

return 0; 		// serve para informar ao compilador que ocorreu tudo certo com a fun��o main()
} // final do c�digo
