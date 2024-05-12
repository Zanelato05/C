#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3, n4, n5, senha;
	int a1, a2, a3, a4, a5;
	int acertoulocal = 0;
	int acertounumero = 0;
	int vidas = 0;
	float menu;
	int dificuldade;
	
	do{
		
		cout << "                                           SEJA BEM-VINDO AO JOGO DA SENHA!\n\n";
		cout << "                   Seu objetivo � tentar acertar uma senha aleat�ria em um certo n�mero de tentativas.\n\n\n\n\n";
		cout << "                                                     MENU INICIAL\n\n";
		cout << "                                             1- Jogar   2- Sobre  3- Fim: ";
		cin >> menu;
		system("cls");
		
	if(menu == 1){
		break;
		
	}else if(menu == 2){
		cout << "\nEste � o jogo MASTER MIND, conhecido nacionalmente como o JOGO DA SENHA.\nFoi o jogo de tabuleiro mais bem-sucedido dos anos 70.\n";
		cout << "O objetivo principal do jogador era descobrir a ordem correta das cores.\n";
		cout << "Foi inspirado nisso que o professor Eduardo Alvez da Silva prop�s este trabalho.\nNo entanto, diferentemente da vers�o original, ";
		cout << "hoje vamos trabalhar com n�meros.\nVoc� ter� que desvendar qual � a senha do jogo atrav�s de dicas que ser�o exibidas no console.\n\n";
		cout << "Produzido por: (Lucas Zanelato, Rafael Marques e Lucas Francelino em Maio de 2024).\n\n";
		system ("pause");
		system("cls");
		
	}else if(menu == 3){
		cout << "Obrigado por participar at� aqui!";
		return 0;
		
	}else{
		cout << "N�mero digitado inv�lido. Tente novamente!\n\n";
		system ("pause");
		system("cls");
		
	}
	}while(menu == 2 || menu != 1 || menu != 3);
	system("cls");
	
	while(dificuldade != 1 || dificuldade != 2 || dificuldade != 3){
	
	cout << "                                                ESCOLHA A DIFICULDADE\n\n" << "                                          1- F�cil  2- M�dio  3- Dif�cil: ";
	cin >> dificuldade;
	system("cls");
		
	if(dificuldade == 1){
	break;
		
	}else if(dificuldade == 2){
	break;
		
	}else if(dificuldade == 3){
	break;
		
	}else{
	cout << "Valor inv�lido. Tente novamente!\n\n";
	system ("pause");
	system("cls");
		
	}
	}
    
    cout << "REGRA: � v�lido somente n�meros entre 1 e 6, e nenhum d�gito pode se repetir!\n\n\n";
    
    if(dificuldade == 2){
		
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
    
    do {
        a4 = (rand() % 6) + 1;

    } while(a4 == a3 || a4 == a2 || a4 == a1);
    	
    	cout << "Nesse n�vel voc� precisa descobrir uma senha de 4 d�gitos em apenas 10 tentativas. BOA SORTE!";
    	cout << "\n\n\n\n";
		system("pause");
		system("cls");
    
   do {
   	
        if (vidas < 10) {
            
            vidas++;
            
            cout << "TENTATIVA " << vidas;
			
			do{
	
            cout << "\nD�gite a senha: ";
            cin >> senha;
    
            n1 = senha / 1000;     
            n2 = (senha % 1000) / 100;
            n3 = (senha % 100) / 10;   
            n4 = senha % 10;  
            
            if(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4){
            	cout << "\nATEN��O: senha inv�lida. S�o permitidos apenas 4 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
            	system("pause");
    			cout << "\n\n";
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6){
				cout << "\nATEN��O: senha inv�lida. S�o permitidos apenas 4 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 );
    	
            if (n1 == a1) {
                acertoulocal++;
                acertounumero++;
            } else if (n1 == a2 || n1 == a3 || n1 == a4) {
                acertounumero++;
            }
            
            if (n2 == a2) {
                acertoulocal++;
                acertounumero++;
            } else if (n2 == a1 || n2 == a3 || n2 == a4) {
                acertounumero++;
            }
            
            if (n3 == a3) {
                acertoulocal++;
                acertounumero++;
            } else if (n3 == a1 || n3 == a2 || n3 == a4) {
                acertounumero++;
            }
 			if (n4 == a4) {
                acertoulocal++;
                acertounumero++;
            } else if (n4 == a1 || n4 == a2 || n4 == a3) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumero << " n�meros " << endl << "e " << acertoulocal  << " n�meros est�o na posi��o correta\n\n" << endl;
            
       		 } else {
            cout << "\n\nVOC� PERDEU A COMBINA��O ERA " << a1 << a2 << a3 << a4;
            return 0;
        }
        
        acertounumero = 0;
        acertoulocal = 0;
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 || n4 != a4);
}
    
    if(dificuldade == 1){
    	
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
        	
    	cout << "Nesse n�vel voc� precisa descobrir uma senha de 3 d�gitos em apenas 8 tentativas. BOA SORTE!";
    	cout << "\n\n\n";
		system("pause");
		system("cls");
    	
	do {
   	
        if (vidas < 8) {
            
            vidas++;
            
            cout << "TENTATIVA " << vidas;
			
			do{
	
            cout << "\nD�gite a senha: ";
            cin >> senha;
       
            n1 = (senha % 1000) / 100;
            n2 = (senha % 100) / 10;   
            n3 = senha % 10;  
            
            if(n1 == n2 || n1 == n3 || n2 == n3){
            	cout << "\nSenha inv�lida. S�o permitidos apenas 3 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
            	system("pause");
    			cout << "\n\n";
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 ){
				cout << "\nSenha inv�lida. S�o permitidos apenas 3 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n2 == n3 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 );
    	
            if (n1 == a1) {
                acertoulocal++;
                acertounumero++;
            } else if (n1 == a2 || n1 == a3 ) {
                acertounumero++;
            }
            
            if (n2 == a2) {
                acertoulocal++;
                acertounumero++;
            } else if (n2 == a1 || n2 == a3 ) {
                acertounumero++;
            }
            
            if (n3 == a3) {
                acertoulocal++;
                acertounumero++;
            } else if (n3 == a1 || n3 == a2 ) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumero << " n�meros " << endl << "e " << acertoulocal  << " n�meros est�o na posi��o correta\n\n" << endl;
                    
       		 } else {
            cout << "\n\nVOC� PERDEU A COMBINA��O ERA " << a1 << a2 << a3;
            return 0;
        }
        
        acertounumero = 0;
        acertoulocal = 0;
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 );
}
    if(dificuldade == 3){
    	
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
    
    do {
        a4 = (rand() % 6) + 1;

    } while(a4 == a3 || a4 == a2 || a4 == a1);
    
    do {
        a5 = (rand() % 6) + 1;

    } while(a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4);
    	
    	cout << "Nesse n�vel voc� precisa descobrir uma senha de 5 d�gitos em apenas 12 tentativas. BOA SORTE!";
    	cout << "\n\n\n";
		system("pause");
		system("cls");
	
	do {
   	
        if (vidas < 12) {
            
            vidas++;
            
            cout << "TENTATIVA " << vidas;
			
			do{
	
            cout << "\nD�gite a senha: ";
            cin >> senha;
    
    		n1 = senha / 10000;
            n2 = (senha % 10000) / 1000;     
            n3 = (senha % 1000) / 100;
            n4 = (senha % 100) / 10;   
            n5 = senha % 10;  
            
            if(n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5|| n2 == n3 || n2 == n4 || n2 == n5|| n3 == n4 || n3 == n5 || n4 == n5){
            	cout << "\nSenha inv�lida. S�o permitidos apenas 5 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 || n5 < 1 || n5 > 6){
				cout << "\nSenha inv�lida. S�o permitidos apenas 5 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5|| n2 == n3 || n2 == n4 || n2 == n5|| n3 == n4 || n3 == n5 || n4 == n5 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 || n5 < 1 || n5 > 6 );
    	
            if (n1 == a1) {
                acertoulocal++;
                acertounumero++;
            } else if (n1 == a2 || n1 == a3 || n1 == a4 || n1 == a5) {
                acertounumero++;
            }
            if (n2 == a2) {
                acertoulocal++;
                acertounumero++;
            } else if (n2 == a1 || n2 == a3 || n2 == a4 || n2 == a5) {
                acertounumero++;
            }
            if (n3 == a3) {
                acertoulocal++;
                acertounumero++;
            } else if (n3 == a1 || n3 == a2 || n3 == a4 || n3 == a5) {
                acertounumero++;
            }
 			if (n4 == a4) {
                acertoulocal++;
                acertounumero++;
            } else if (n4 == a1 || n4 == a2 || n4 == a3 || n4 == a5) {
                acertounumero++;
            }
            if (n5 == a5) {
                acertoulocal++;
                acertounumero++;
            } else if (n5 == a1 || n5 == a2 || n5 == a3 || n5 == a4) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumero << " n�meros " << endl << "e " << acertoulocal  << " n�meros est�o na posi��o correta\n\n" << endl;
            
       		 } else {
            cout << "\n\nVOC� PERDEU A COMBINA��O ERA " << a1 << a2 << a3 << a4 << a5;
            return 0;
        }
        
        acertounumero = 0;
        acertoulocal = 0;
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 || n4 != a4 || n5 != a5);
}

    cout << "PARAB�NS VOC� DESCOBRIU A SENHA!";

	return 0;
}
