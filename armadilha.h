void armadilha_1()
{
    do
    {
        setbuf(stdin,NULL);
        scanf("%c",&tesouro2);
        switch(tesouro2)
        {
        case '1':
            printf("\nVoc� rapidamente se joga ao ch�o, cortando seu braco em um espinho pr�ximo, perdendo 5 de vida.\n");
            vida_p=(vida_p-5);
            printf("\nPor esta decis�o, voc� desvia das flechas que subtamente apareceram em seu caminho, mas acaba machucado.\n");
            menutesouro2='0';
            vidaplayer();
            break;
        case '2':
            printf("\nVoc� utiliza sua grande agilidade para em um rapido movimento rolar para frente.\n");
            printf("\nAs flechas que subtamente apareceram nao te atingem, voce sai ileso.\n");
            menutesouro2='0';
            break;
        case '3':
            printf("\nVoce num reflexo desliza para o lado.\n");
            printf("\nFlechas surgem e voce e pego de surpresa, perdendo 15 de vida.\n");
            vida_p=(vida_p-15);
            menutesouro2='0';
            vidaplayer();
            break;
        default:
            printf("Op��o inv�lida!\n");
            if (tesouro2=='0')
                menutesouro2='1';
        }
    }
    while(menutesouro2!='0');
    printf("\n************************************************************\n");
    printf("Voc� encontrou um ba� do tesouro nessa sala cheia de armadilhas!! Nele cont�m Po��o de Vida Grande\n");
    printf("\n************************************************************\n");
    system("pause");
    system("cls");
    add_mochila(pot_g);
    menutesouro='0';
}

void armadilha_2()
{
    printf("Armadilha causou muito dano!!!Sua vida � de %.2f\n",vida_p-20);
    vida_p-=20;
    printf("Al�m de tomar dano da armadilha, aparece uma aranha!!\n");
    armazenar=1;
    armadilha4='0';
    vidaplayer();
}
void armadilha_3()
{
    vida_p=vida_p-15;
    printf("V�rios filhotes de aranha pulam em voc�!!! Voc� perde 15 de vida, sua vida atual � de %.2f\n",vida_p);
    system("pause");
    system("cls");
    vidaplayer();
}
void armadilha_4()
{
    vida_p=vida_p-15;
    printf("Voc� sem querer pisou num piso que ativou uma armadilha, uma flecha vem em alta velocidade e te atinge, fazendo-o perder 15 de vida, sua vida atual � de %.2f\n",vida_p);
    system("pause");
    system("cls");
    vidaplayer();
}
void armadilha_5()
{
    printf("Voc� conseguiu uma Po��o de Recupera��o Completa!!\n");
    vida_p-=45;
    printf("Mas como consequ�ncia, encostou sua m�o em um �cido e perdeu 45 de vida, sua vida atual � de %.2f\n",vida_p);
    add_mochila(pot_rec);
    system("pause");
    vidaplayer();
}
