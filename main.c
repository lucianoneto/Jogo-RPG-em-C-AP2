#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
int item_escolha=0,cont_mochila,teste_mochila=0,pre_teste,char_int=0,cont_mochila2,cont_pot_dano=0,cont_pot_defesa=0,i,j=0;
char mochila[5][50]= {{"Po��o de Vida Pequena"},{"Vazio"},{"Vazio"},{"Vazio"},{"Vazio"}},cont_mochila_char;
char op_menu,sair_menu;
///////////////////////////////////////////////////////////////////////////////////////////////////////
char menu_introducao,menu_introducao2;
///////////////////////////////////////////////////////////////////////////////////////////////////////
char op_criacao='0',op_encontro='0',nome_p[35];
int cont1,aux1=0,tempo_recargamax=0,raca=0,classe=0,game_over=0,genero=0,genero1=0,habilidaderaca=0;
float vida_pmax=0,vida_p=1,ataque_p=0,defesa_p=0,ataquef_p=0;
///////////////////////////////////////////////////////////////////////////////////////////////////////
char tesouro,menutesouro,tesouro2,tesouro3,menutesouro2,armadilha,armadilha1,mochilavariavel,mochilavariavel1,armadilha3,armadilha4;
int cont_item=0,add_item=0,armazenar;
///////////////////////////////////////////////////////////////////////////////////////////////////////
char pot_p[30]="Po��o de Vida Pequena",pot_m[30]="Po��o de Vida M�dia",pot_g[30]="Po��o de Vida Grande";
char pot_rec[30]="Po��o de Recupera��o Completa",pot_a[30]="Po��o de Ataque",pot_d[30]="Po��o de Defesa";
///////////////////////////////////////////////////////////////////////////////////////////////////////
float ataquemob[9]= {20.5,22.5,25.5,28.5,30.5,25.5,40.5,35.5,50.5}, vidamob[9]= {30,35,18,42,22,60,70,40,100}, vidamobmax[9]= {30,35,18,42,22,60,70,40,100};
///////////////////////////////////////////////////////////////////////////////////////////////////////
char menuboss,menuboss2,menuboss3;
int interativo,interativo2,interativo3;
///////////////////////////////////////////////////////////////////////////////////////////////////////
FILE *fp;
char ch;
int pontos=0;
typedef struct dados
{
    char raca,genero,classe;
}criacao;
criacao per;
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include "combate.h"
#include "mochila.h"
#include "textos.h"
#include "textos_mobs.h"
#include "boss.h"
#include "armadilha.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL,"portuguese");
    fp=fopen("pontuacao.txt","r");
    if (fp==NULL)
    {
        fclose(fp);
        fp=fopen("pontuacao.txt","w");
    }
    fprintf(fp,"PONTUA��ES :");
    fclose(fp);
    system("cls");
    do
    {
        system("cls");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\t| CRIPTA SOMBRIA  |\t\t\t\t\t\t\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t*********************************************************\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(1)- ENTRAR NA CRIPTA!!!      \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(2)- Pontua��es!              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(3)- Escolha de Layouts!      \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(4)- Resetar Pontua��es!      \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(5)- Cr�ditos!                \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t(0)- SAIR DO JOGO!            \t\t*\n");
        printf("\t\t\t\t\t\t\t*\t\t                              \t\t*\n");
        printf("\t\t\t\t\t\t\t*********************************************************\n");
        printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
        setbuf(stdin,NULL);
        scanf("%c",&op_menu);
        switch (op_menu)
        {
        case '0':
        {
            do
            {
                system("cls");
                printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                printf("\nTem certeza que n�o deseja jogar mais ?\n");
                printf("\n (1)- SIM!\t\t(2)- N�O!\n");
                printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                setbuf(stdin,NULL);
                scanf("%c",&sair_menu);
                if (sair_menu=='1')
                {
                    system("cls");
                    printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                    printf("\nAt� a pr�xima aventura, a Cripta o aguarda . . . \n\n");
                    printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                }
                else if (sair_menu=='2')
                    op_menu='9';
                else
                {
                    printf("\nEscolha Inv�lida!\n");
                    system("PAUSE");
                    system("cls");
                }
            }
            while((sair_menu!='1') && (sair_menu!='2'));
            break;
        }
        case '1':
        {
            ////////////////////////////////////////////////////////
            printf("\nRole-playing game, tamb�m conhecido como RPG, � um tipo de jogo em que os jogadores assumem pap�is de personagens e criam narrativas colaborativamente.\n");
            printf("Voc� deseja ir para um menu de introdu��o do jogo, ou gostaria de come�ar a jogar agora ?\n");
            printf("--Pressione 1 para introdu��o\n");
            printf("--Pressione 0 para come�ar a jogar\n");
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&menu_introducao);
                switch (menu_introducao)
                {
                case '0':
                    break;
                case '1':
                {
                    do
                    {
                        printf("\nEscolha a op��o que deseja abrir:\n");
                        printf("[1]SISTEMA DE ATAQUE\n");
                        printf("[2]SISTEMA DE CRIA��O DE PERSONAGENS\n");
                        printf("[3]SISTEMA DE A��O DO JOGO\n");
                        printf("[4]SISTEMA DE VIDA\n");
                        printf("[5]SISTEMA DE ARMAZENAR ITENS\n");
                        printf("[6]SISTEMA DE INTERA��O DO JOGO\n");
                        printf("[0]SAIR\n");
                        setbuf(stdin,NULL);
                        scanf("%c",&menu_introducao2);
                        switch (menu_introducao2)
                        {
                        case '0':
                            menu_introducao='0';
                            break;
                        case '1':
                        {
                            printf("\nO jogo possui dois modos de ataques, um forte e um simples, sendo que o simples pode ser utilizado toda hora, e o forte tem um pequeno tempo de recarga para ser utilizado novamente.Tamb�m possui um sistema de defesa em que o jogador vai poder intercalar entre as escolhas, atacar ou defender. Cada ra�a possui um n�vel de defesa diferente, ou seja, alguma delas pode ter mais defesa que a outra, do mesmo jeito que uma vai ter mais ataque que a outra.\n");
                            break;
                        }
                        case '2':
                        {
                            printf("\n\nVoc� vai poder escolher qual a classe de seu personagem, sendo as op��es:\n");
                            printf("\n\n--Guerreiro\n");
                            printf("--Berserker\n");
                            printf("--Arqueiro\n");
                            printf("\n\nVoc� tamb�m vai poder escolher qual vai ser a ra�a de seu personagem, sendo as op��es:\n");
                            printf("\n\n--Humano\n");
                            printf("--An�o\n");
                            printf("--Elfo\n");
                            printf("\n\nE al�m disso, escolher� seu 'nick', que � o nome do seu personagem dentro do jogo, e o seu g�nero.\n");
                            break;
                        }
                        case '3':
                        {
                            printf("\nO RPG � jogado por meio de op��es que o jogo d� para o usu�rio, ou seja, dar� op��es do tipo:\n");
                            printf("\n\n[1]Ataque\n");
                            printf("[2]Ataque forte\n");
                            printf("[3]Defesa\n");
                            printf("[4]Mochila\n");
                            printf("\n\nEm que ele pode fazer a escolha que quiser por meio dessas op��es, cada op��o pode determinar um futuro diferente para o jogador.O jogo todo � baseado nesse sistema de escolhas.\n");
                            break;
                        }
                        case '4':
                        {
                            printf("\nO jogador vai levar dano durante o jogo inteiro por causa das criaturas que tem na Cripta, ent�o ele vai ter que administrar bem suas po��es de vida que v�o poder serem utilizadas pela mochila, se suas po��es acabarem e acontecer do jogador morrer, ele simplesmente perde o jogo, n�o tem um sistema de ressurrei��o.\n");
                            break;
                        }
                        case '5':
                        {
                            printf("\nA mochila do jogo caber� 5 itens, sendo assim, o jogador precisa administrar seu espa�o muito bem.O jogo n�o permite que os itens ficam dentro um do outro como nos RPGs de costume, ou seja, se voc� tem duas po��es de vida, elas ir�o ocupar 2 espa�os diferentes.Os equipamentos do personagem n�o ficar�o na mochila, e sim no corpo dele, ent�o n�o ocupar�o espa�o.\n");
                            break;
                        }
                        case '6':
                        {
                            printf("\nO jogo procura interagir com o personagem de diversas maneiras, em que far� com que ele pense para nao tomar uma decis�o errada, por exemplo:\n");
                            printf("\n\n--Pode aparecer perguntas para o jogador responder do nada, sendo que se ele acertar, pode ser premiado, mas se errar pode haver puni��es.\n");
                            printf("--O jogo possui armadilhas para que o usu�rio pense nas op��es de escolha para sair, pode sair ileso ou ferido, e vale lembrar que o sistema de vida do jogo � dif�cil, se ela zerar, � Game Over.\n");
                            printf("--N�o ter� intera��es com personagens n�o-jog�veis dentro do jogo.\n");
                            break;
                        }
                        default:
                            printf("Escolha uma das op��es dadas:\n");
                            break;
                        }
                    }
                    while(menu_introducao2!='0');
                }
                break;
                default:
                    printf("Escolha uma das op��es dadas!\n");
                    break;
                }
            }
            while(menu_introducao!='0');
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            system("cls");
            printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\n Entrando na Cripta . . . \n");
            printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            introducao();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&per.classe);
                if (per.classe>'9')
                    per.classe='6';
                switch (per.classe)
                {
                case '1':
                    ataque_p=16.3;
                    vida_pmax=130.2;
                    defesa_p=10.1;
                    ataquef_p=30.5;
                    tempo_recargamax=3;
                    classe=1;
                    habilidaderaca=1;
                    break;
                case '2':
                    ataque_p=14.9;
                    vida_pmax=110.9;
                    defesa_p=12.2;
                    ataquef_p=40.9;
                    tempo_recargamax=2;
                    classe=1;
                    habilidaderaca=2;
                    break;
                case '3':
                    ataque_p=18.1;
                    vida_pmax=120.1;
                    defesa_p=7.9;
                    ataquef_p=27.3;
                    tempo_recargamax=4;
                    habilidaderaca=3;
                    classe=1;
                    break;
                default:
                    printf("\nSelecione umas das op��es dadas!\n");
                    break;
                }
            }
            while(classe!=1);
            system("cls");
            criacaoraca();
            do
            {
                scanf(" %c",&per.raca);
                switch (per.raca)
                {
                case '1':
                    habilidaderaca=1;
                    raca=1;
                    break;
                case '2':
                    habilidaderaca=2;
                    raca=1;
                    break;
                case '3':
                    habilidaderaca=3;
                    raca=1;
                default:
                    printf("Selecione umas das op��es dadas!");
                    break;
                }
            }
            while(raca!=1);
            system("cls");

            system("cls");
            printf("\n\n\nSelecione seu G�nero\n\n");
            printf("(1)- Masculino  |   (2)- Feminino\n");
            do
            {
                scanf(" %c",&per.genero);
                switch (per.genero)
                {
                case '1':
                    genero=1;
                    genero1=1;
                    break;
                case '2':
                    genero=2;
                    genero1=1;
                    break;
                default:
                    printf("Selecione umas das op��es dadas!");
                    break;
                }
            }
            while(genero1!=1);
            system("cls");
            if (genero==1)
                printf("Digite o nome do seu aventureiro : \n\n");
            else
                printf("Digite o nome da sua aventureira : \n\n");
            setbuf(stdin,NULL);
            scanf("%s",&nome_p);
            system("cls");
            printf("\n*********************************************************************| Agora sua jornada come�a pela Cripta . . . |*********************************************************************\n");
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            printf("\t- %s\n",nome_p);
            if (genero==1)
                printf("\t- Homem\n");
            else
                printf("\t- Mulher\n");

            if (tempo_recargamax==3)
                printf("\t- Guerreiro\n");
            else if (tempo_recargamax==2)
                printf("\t- Arqueiro\n");
            else if (tempo_recargamax==4)
                printf("\t- Berseker\n");

            if (habilidaderaca==1)
                printf("\t- Humano\n");
            else if (habilidaderaca==2)
                printf("\t- Elfo\n");
            else if (habilidaderaca==3)
                printf("\t- An�o\n");
            printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
            system("pause");
            system("cls");
            vida_p=vida_pmax;
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo1_1();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            texto_goblin();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            pot_cont();
            batalha(&ataquemob[0],&vidamob[0],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[0]);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo1_2();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&tesouro);
                switch(tesouro)
                {
                case '1':
                    printf("\n\nEnquanto caminhava pelo corredor, voce pisa em uma placa de pressao e ela ativa ...\n");
                    printf("Voce precisa agir rapido!!! O que voce faz?\n\n");
                    printf("\n|\t[1]Se abaixa.\t|\t[2]Rola para frente.\t|\t[3]Se esquiva para o lado.\t|\t\n");
                    menutesouro='0';
                    break;
                case '2':
                    menutesouro='0';
                    break;
                default:
                    printf("Op��o inv�lida!\n");
                    if(tesouro=='0')
                        menutesouro='1';
                }
            }
            while(menutesouro!='0');
            if (tesouro=='1')
            {
                armadilha_1();
                system("pause");
                system("cls");
                printf("\n************************************************************\n");
                printf("\nVoc� supera a armadilha!\n");
                printf("\n+5 pontos!\n");
                printf("\n************************************************************\n");
                system("pause");
                system("cls");
                pontos+=5;
            }
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo1_3();
            texto_esqueleto();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            pot_cont();
            batalha(&ataquemob[1],&vidamob[1],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[1]);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nVoc� encontrou uma Po��o de Vida M�dia com o inimigo!\n");
            add_mochila(pot_m);
            system("pause");
            system("cls");
            /////////////////////////////////////////////////////////////////////////////////
            capitulo1_4();
            /////////////////////////////////////////////////////////////////////////////////
            texto_goblin();
            /////////////////////////////////////////////////////////////////////////////////
            pot_cont();
            batalha(&ataquemob[0],&vidamob[0],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[0]);
            /////////////////////////////////////////////////////////////////////////////////
            printf("Voce ganha Po��o de Vida M�dia ao derrotar o Goblin.\n");
            add_mochila(pot_m);
            /////////////////////////////////////////////////////////////////////////////////
            system("pause");
            system("cls");
            /////////////////////////////////////////////////////////////////////////////////
            printf("\nChegando a sa�da um barulho de correntes ecoa pela sala ... voc� olha pra cima e parece uma armadilha, diversas correntes com l�minas descem do teto . . . voc� pode correr em frente para a sa�da ou ficar para tr�s e enfrentar seja o que for que ativou esse dispositivo.");
            printf("\n\t(1)- Correr para a sa�da! \t (2)- Evitar a armadilha!");

            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armadilha_2();
                    armazenar=1;
                    break;
                case '2':
                    printf("Decidiu ficar para desativar a armadilha n� ? Mas aparece um Esqueleto de Elite para enfrent�-lo!\n");
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            /////////////////////////////////////////////////////////////////////////////////
            if (armazenar==1)
            {
                /////////////////////////////////////////////////////////////////////////////////
                texto_aranha();
                /////////////////////////////////////////////////////////////////////////////////
                pot_cont();
                batalha(&ataquemob[2],&vidamob[2],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[2]);
                /////////////////////////////////////////////////////////////////////////////////
                if (vidamob[2]<=0)
                {
                    armazenar=0;
                    /////////////////////////////////////////////////////////////////////////////////
                    printf("\nVoc� encontrou uma Po��o de Vida M�dia com o inimigo!\n");
                    add_mochila(pot_m);
                    /////////////////////////////////////////////////////////////////////////////////
                    system("pause");
                    system("cls");
                    /////////////////////////////////////////////////////////////////////////////////
                }
            }
            if (armazenar==2)
            {
                ////////COLOCAR LUTA CONTRA ESQUELETO ELITE
                texto_esqueleto_e();
                /////////////////////////////////////////////////////////////////////////////////
                pot_cont();
                batalha(&ataquemob[3],&vidamob[3],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[3]);
                /////////////////////////////////////////////////////////////////////////////////
                printf("\nVoc� encontrou uma Po��o de Vida Grande com o inimigo!\n");
                add_mochila(pot_g);
                ////////////////////////////////////////////////////////////////////////////////////////////////////
                system("pause");
                system("cls");
            }
            system("pause");
            system("cls");
            printf("\n************************************************************\n");
            printf("\nVoc� supera a armadilha!\n");
            printf("\n+5 pontos!\n");
            printf("\n************************************************************\n");
            system("pause");
            system("cls");
            pontos+=5;
            printf("\nCom a porta para aquele lugar que mais parecia uma pris�o fechada, existe apenas uma entrada para esse cub�culo que voc� se encontra, voc� pode usar sua mochila ...\n");
            printf("\n\t(1)- Usar mochila! \t (2)- N�o usar!");
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&mochilavariavel);
                switch(mochilavariavel)
                {
                case '1':
                    mochila123();
                    mochilavariavel1='0';
                    break;
                case '2':
                    system("pause");
                    system("cls");
                    mochilavariavel1='0';
                    break;
                default:
                    printf("Op��o inv�lida!\n");
                    mochilavariavel1='1';
                    break;
                }
            }
            while(mochilavariavel1!='0');
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo1_5();
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 1****
            capitulo2_1();
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nE nesse caminho voc� encontrou uma Po��o de Vida Pequena...\n");
            add_mochila(pot_p);
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nSeus status e equipamentos agora s�o :\n");
            verif_equipamentos();
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo2_2();
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\n\t (1)- Atacar! \t (2)- Esgueirar-se!");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    printf("Voc� encontrou uma Po��o M�dia de Vida logo a frente!!\n");
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
            {
                ////////////////////////////////////////////////////////////////////////////////////////////////////
                texto_mumia();
                ////////////////////////////////////////////////////////////////////////////////////////////////////
                pot_cont();
                batalha(&ataquemob[5],&vidamob[5],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[5]);
                ////////////////////////////////////////////////////////////////////////////////////////////////////
                system("pause");
                system("cls");
                printf("A M�mia deixou cair uma ma�� que d� aumento de +10 na sua vida m�xima!!\n");
                vida_pmax+=10;
                printf("Sua vida m�xima que antes era %.2f, agora � de : %.2f",(vida_pmax-10),vida_pmax);
            }
            if (armazenar==2)
            {
                printf("A Po��o de Vida foi adicionada a mochila!\n");
                add_mochila(pot_m);
            }
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nAp�s seguir um pouco mais a frente voc� se depara com tr�s passagens, e acaba sendo obrigado a escolher um caminho . . .\n");
            printf("\n\t (1)- Da esquerda! \t (2)- Do meio! \t (3)- Da direita!\n");
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armadilha_3();
                    armadilha4='0';
                    break;
                case '2':
                    armadilha_4();
                    armadilha4='0';
                    break;
                case '3':
                    texto_zumbi();
                    ////////////////////////////////////////////////////////////////////////////////////////////////////
                    pot_cont();
                    batalha(&ataquemob[4],&vidamob[4],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[4]);
                    ////////////////////////////////////////////////////////////////////////////////////////////////////
                    if (vidamob[4]<=0)
                    {
                        system("cls");
                        printf("\n************************************************************\n");
                        printf("\nVoc� vence a batalha!\n");
                        printf("\n************************************************************\n");
                        system("pause");
                        system("cls");
                        //////////////////////////////////////////////////
                        printf("\nVoc� encontrou uma Po��o de Vida M�dia com o inimigo!\n");
                        add_mochila(pot_m);
                    }
                    ////////////////////////////////////////////////////////////////////////////////////////////////////
                    system("pause");
                    system("cls");
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo2_3();
            printf("\n\t (1)- Usar mochila! \t (2)- N�o usar!");
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    mochila123();
                    printf("Ao fechar a mochila voc� se depara com uma aranha!!!!\n");
                    system("pause");
                    system("cls");
                    texto_aranha();
                    ////////////////////////////////////////////////////////////////////////////////////////////////////
                    pot_cont();
                    batalha(&ataquemob[2],&vidamob[2],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[2]);
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("\nOp��o inv�lida\n");
                    armadilha4='1';
                }
            }
            while(armadilha4!='0');
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo2_4();
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nNela voc� adquiri 1 Po��o de Vida Pequena e 1 Po��o de Defesa, al�m de algumas anota��es...\n");
            add_mochila(pot_d);
            add_mochila(pot_p);
            system("pause");
            system("cls");
            ////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo2_5();
            ////////////////////////////////////////////////////////////////////////////////////////////////////ENIGMA////////////////////////////////////////////////////////////////////////////////////////////////////
            enigma();
            ////////////////////se errar toma flechada -20 de vida/ textinho pra cada opcao/ e texto dele realizando quando escolhe a 3 do pq � a certa
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    printf("Esfinge? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                    vidaplayer();
                    break;
                case '2':
                    printf("Macaco? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                    vidaplayer();
                    break;
                case '3':
                    printf("Resposta certa !!\n");
                    printf("O homem ao nascer anda com 4 patas, vulgo engatinhando, no meio de sua vida com 2 patas, vulgo com os p�s, e quando est� velho, usa bengala, o que o faz ter 3 patas\n");
                    armadilha4='0';
                    break;
                case '4':
                    printf("Camelo? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                    vidaplayer();
                    break;
                case '5':
                    printf("Cobra? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                    vidaplayer();
                    break;
                case '6':
                    printf("Falc�o? Resposta errada....\n");
                    printf("Voc� leva 20 de dano com uma flechada\n");
                    vida_p=vida_p-20;
                    printf("Sua vida atual � de %.2f",vida_p);
                    vidaplayer();
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }

            }
            while(armadilha4!='0');
            system("pause");
            system("cls");
            printf("\n************************************************************\n");
            printf("\nVoc� supera o enigma!\n");
            printf("\n+10 pontos!\n");
            printf("\n************************************************************\n");
            system("pause");
            system("cls");
            pontos+=10;
            ////////////////////FIM ENGIMA
            fim_enigma();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 2****///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo3_1();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nSeus status e equipamentos agora s�o :\n");
            verif_equipamentos();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nDeseja utilizar a mochila?\n");
            printf("\n\t (1)- Usar mochila! \t (2)- N�o usar!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    mochila123();
                    armadilha4='0';
                    break;
                case '2':
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    armadilha4='1';
                    break;
                }
            }
            while(armadilha4!='0');
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo3_2();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\n\t (1)- Iteragir! \t (2)- Passar direto!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armadilha_5();
                    armadilha4='0';
                    break;
                case '2':
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo3_3();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////combate com troll lanceiro///////////////////////////////////////////////////////////////////////////////////////////////////////
            texto_troll();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            pot_cont();
            batalha(&ataquemob[7],&vidamob[7],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[7]);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("O Troll dropou uma Po��o de dano!!\n");
            add_mochila(pot_d);
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo3_4();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\n\t (1)- Interagir! \t (2)- Seguir seu caminho! \t (3)- Destruir o altar!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    vida_pmax+=5;
                    vida_p=vida_pmax;
                    printf("Ao interagir com o Altar voc� recuperou sua vida totalmente e ainda ganhou um b�nus de +5, sua vida � de %.2f\n",vida_p);
                    armadilha4='0';
                    break;
                case '2':
                    printf("Um zumbi surge de uma pilha de ossos e te ataca!!\n");
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////LUTA COM ZUMBI///////////////////////////////////////////////////////////////////////////////////////////////////////
                    texto_zumbi();
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////
                    pot_cont();
                    batalha(&ataquemob[4],&vidamob[4],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[4]);
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////
                    system("pause");
                    system("cls");
                    printf("O Zumbi dropou Po��o de Vida Pequena e Po��o de Defesa!!\n");
                    system("pause");
                    system("cls");
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////
                    add_mochila(pot_m);
                    add_mochila(pot_d);
                    //////////////////////////////////////////////////////////////////////////////////////////////////////
                    armadilha4='0';
                    break;
                case '3':
                    vida_p-=20;
                    printf("Ao destruir o Altar voc� levou 20 de dano, sua vida � de %.2f\n",vida_p);
                    ataque_p+=1;
                    defesa_p+=1;
                    printf("Mas aumentou seu ataque e sua defesa em 1, sendo agora respectivamente: %.2f e %.2f\n",ataque_p,defesa_p);
                    vidaplayer();
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            system("pause");
            system("cls");
            printf("\n************************************************************\n");
            printf("\nVoc� supera a armadilha!\n");
            printf("\n+5 pontos!\n");
            printf("\n************************************************************\n");
            system("pause");
            system("cls");
            pontos+=5;
            capitulo3_5();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////LUTA CONTR ARANHA GIGANTE///////////////////////////////////////////////////////////////////////////////////////////////////////
            texto_aranha();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            pot_cont();
            batalha(&ataquemob[2],&vidamob[2],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[2]);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            defesa_p+=2;
            capitulo3_6();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\n\t (1)- Colocar a m�o no esquerdo! \t (2)- Colocar a m�o no direito! \t (3)- Colocar em ambos! \t (4)- Seguir teu caminho!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    printf("Voc� encontrou uma Po��o de Vida Pequena!!\n");
                    add_mochila(pot_p);
                    armadilha4='0';
                    break;
                case '2':
                    printf("Voc� encontrou uma Po��o de Ataque!!\n");
                    add_mochila(pot_a);
                    armadilha4='0';
                    break;
                case '3':
                    printf("Colocando a m�o nos 2, o Altar se quebrou e voc� levou 20 de dano!!\n");
                    vida_p-=20;
                    printf("Sua vida atual � de %.2f",vida_p);
                    vidaplayer();
                    armadilha4='0';
                    break;
                case '4':
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            system("pause");
            system("cls");
            printf("\n************************************************************\n");
            printf("\nVoc� supera o enigma!\n");
            printf("\n+10 pontos!\n");
            printf("\n************************************************************\n");
            system("pause");
            system("cls");
            pontos+=10;
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo3_7();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////luta com orc///////////////////////////////////////////////////////////////////////////////////////////////////////
            texto_orc();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            pot_cont();
            batalha(&ataquemob[6],&vidamob[6],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[6]);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            system("pause");
            system("cls");
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            capitulo3_8();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\n\t (1)- Usar mochila! \t (2)- N�o usar!\n");
            armadilha4='1';
            do
            {
                setbuf(stdin,NULL);
                scanf("%c",&armadilha3);
                switch(armadilha3)
                {
                case '1':
                    armazenar=1;
                    armadilha4='0';
                    break;
                case '2':
                    armazenar=2;
                    armadilha4='0';
                    break;
                default:
                    printf("Op��o inv�lida\n");
                    if (armadilha3=='0')
                        armadilha4='1';
                }
            }
            while(armadilha4!='0');
            if (armazenar==1)
                mochila123();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            printf("\nContinuando a caminha sem saber por quanto tempo, voc� encontra uma descida e uma luz diferente ao final dela, ent�o voc� respira fundo e segue para o seu destino final . . .\n");
            capitulo_final();
            lutaboss();
            ///////////////////////////////////////////////////////////////////////////////////////////////////////
            texto_final();
            system("pause");
            system("cls");
            printf("\n************************************************************\n");
            printf("\nVoc� vence a batalha contra o BOSS!\n");
            printf("\n+150 pontos!\n");
            printf("\n************************************************************\n");
            system("pause");
            system("cls");
            pontos+=150;
            fp=fopen("pontuacao.txt","a");
            fprintf(fp,"\n-> %d \t | \t %s",pontos,nome_p);
            fclose(fp);
            ///////////////////////////////////////////////////////////////////////////////////////////////////////fim do boss / game///////////////////////////////////////////////////////////////////////////////////////////////////////
            break;
        }
        case '2':
            printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            fp=fopen("pontuacao.txt","r");
            printf("\n\n");
            while((ch=fgetc(fp))!=EOF)
                printf("%c",ch);
            fclose(fp);
            printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("pause");
            system("cls");
            break;
        case '3':
            do
            {
                system("cls");
                printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                printf("\nEscolha uma das combina��es de cores a baixo, para personalizar o visual.\n");
                printf("\n[0] Fundo preto e letra branca. (padr�o)\n");
                printf("\n[1] Fundo branco e letra preta.\n");
                printf("\n[2] Fundo amarelo e letra preta.\n");
                printf("\n[3] Fundo verde-�gua e letra preta.\n");
                printf("\n[4] Fundo preto e letra verde.\n");
                printf("\n[5] Sair.\n");
                printf("\n\n\n\n\n\n________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
                setbuf(stdin,NULL);
                scanf("%c",&op_criacao);
                switch(op_criacao)
                {
                case '0':
                    system("color 0F");
                    break;
                case '1':
                    system("color F0");
                    break;
                case '2':
                    system("color E0");
                    break;
                case '3':
                    system("color 30");
                    break;
                case '4':
                    system("color 0A");
                    break;
                case '5':
                    printf("\nRetornando ao menu.\n");
                    system("pause");
                    system("cls");
                    break;
                default:
                    printf("\nOp��o Inv�lida!\n");
                    break;
                }
            }
            while(op_criacao!='5');
            break;
        case '4':
        {
            do
            {
                system("cls");
                printf("\nDeseja mesmo resetar suas pontua��es ?\n");
                printf("\n(1)- Sim! \t (2)- N�o!\n");
                setbuf(stdin,NULL);
                scanf("%c",&op_menu);
                if(op_menu=='1')
                {
                    fp=fopen("pontuacao.txt","w");
                    fprintf(fp,"PONTUA��ES :");
                    fclose(fp);
                    op_menu='2';
                }
            }
            while(op_menu!='2');
        }
        break;
        case '5':
        {
            system("cls");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\n Cr�ditos :\n");
            printf("\n\t - Gustavo Borges Guimar�es\n\t - Hugo Francisco\n\t - Luciano Neto\n");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
            break;
        }
        case '7':
        {
            system("cls");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\nAna!!!\n");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
            break;
        }
        case '9':
        {
            system("cls");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            printf("\nPaula!!!\n");
            printf("\n\n\n\n\n\n_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n\n\n\n");
            system("PAUSE");
            break;
        }
        default:
        {
            printf("\nEscolha Inv�lida!\n");
            system("PAUSE");
            break;
        }
        }
    }
    while(op_menu!='0');
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
