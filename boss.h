int lutaboss()
{
    system("color 40");
    ///////////////////////////////////////////////////////////////////////////////////////////////////////fim capitulo 3****///////////////////////////////////////////////////////////////////////////////////////////////////////
    pot_cont();
    batalha(&ataquemob[8],&vidamob[8],&ataque_p,&defesa_p,&ataquef_p,&tempo_recargamax,&vidamobmax[8]);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    if (vidamob[8]<=0)
    {
        system("cls");
        printf("\n************************************************************\n");
        printf("O BOSS estava apenas com uma carca�a e agora apareceu na sua forma final!!!");
        printf("\nAgora a vida do BOSS � de 250!\n");
        printf("\n************************************************************\n");
        system("pause");
        system("cls");
        luta=0;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    if (vidamob[8]<=0)
    {
        printf("Ele nao recebe mais dano facilmente, pois conseguiu uma defesa implac�vel, ela s� vai conseguir ser destru�da se voc� correr para atr�s daquela pedra a esquerda, cont�m um item m�gico destruidor de defesas.\n");
        printf("Correndo at� l� voc� n�o consegue atacar, conseguir� apenas desviar\n");
        printf("*****************************************************************************************************************************\n");
        printf("A� vem um ataque por cima!!!\n");
        printf("[1]Desviar para esquerda                  [2]Continuar correndo, mas com mais velocidade               [3]Desviar para direita\n");
        do
        {
            scanf(" %c",&menuboss);
            switch(menuboss)
            {
            case '1':
                printf("Voc� conseguiu desviar do ataque do BOSS, continue correndo!!!\n");
                interativo=0;
                break;
            case '2':
                printf("O BOSS te atingiu e voc� levou %.2f de dano\n",ataquemob[8]-defesa_p);
                vida_p-=(ataquemob[8]-defesa_p);
                printf("Sua vida � de %.2f",vida_p);
                interativo=0;
                vidaplayer();
                break;
            case '3':
                printf("Voc� conseguiu desviar do ataque do BOSS, continue correndo!!!\n");
                interativo=0;
                break;
            default:
                printf("Op��o Inv�lida\n");
            }
            if (menuboss=='0')
                interativo=1;
        }
        while(interativo!=0);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////
        printf("\nUm momento para respirar, deseja usar a mochila?\n");
        printf("\n\t (1)- Sim! \t (2)- N�o!\n");
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
            }
        }
        while(mochilavariavel1!='0');
        ///////////////////////////////////////////////////////////////////////////////////////////////////////
        printf("A� vem um ataque lateral!!!\n");
        printf("[1]Desviar para esquerda                  [2]Pular e continuar correndo             [3]Desviar para direita\n");
        do
        {
            scanf(" %c",&menuboss);
            switch(menuboss)
            {
            case '1':
                printf("Era um ataque lateral, fez uma escolha errada e levou %.2f de dano!!!\n",ataquemob[8]-defesa_p);
                vida_p-=(ataquemob[8]-defesa_p);
                printf("Sua vida � de %.2f",vida_p);
                interativo=0;
                vidaplayer();
                break;
            case '2':
                printf("Escolha certa!!! Pulou a m�o do BOSS e continuou em frente.\n");
                interativo=0;;
                break;
            case '3':
                printf("Era um ataque lateral, fez uma escolha errada e levou %.2f de dano!!!\n",ataquemob[8]-defesa_p);
                vida_p-=(ataquemob[8]-defesa_p);
                printf("Sua vida � de %.2f",vida_p);
                interativo=0;
                vidaplayer();
                break;
            default:
                printf("Op��o Inv�lida\n");
            }
            if (menuboss=='0')
                interativo=1;
        }
        while(interativo!=0);
    }
    system("pause");
    system("cls");
    printf("*****************************************************************************************************************************\n");
    printf("Voc� encontrou o item m�gico destruidor de defesas implac�veis, ative ele para consegui destruir a prote��o do BOSS e conseguir atac�-lo\n");
    do
    {
        printf("[1]Utilizar o item m�gico\n");
        scanf(" %c",&menuboss);
        switch(menuboss)
        {
        case '1':
            printf("A prote��o do BOSS foi destru�da!!!Mas nao por completo...\n");
            interativo=0;
            break;
        default:
            printf("Op��o Inv�lida\n");
        }
        if (menuboss=='0')
            interativo=1;
    }
    while(interativo!=0);
    system("pause");
    system("cls");
    printf("*****************************************************************************************************************************\n");
    printf("Agora que o BOSS est� com quase a mesma defesa de o pr�ncipio, a batalha contra ele continua, mas dessa vez com uma mec�nica diferente...\n");
    printf("O BOSS est� com partes fracas espalhadas pelo corpo, e algumas de suas partes s�o invulner�veis, boa sorte encontrando-as!!\n");
    system("pause");
    system("cls");
    printf("*****************************************************************************************************************************\n");
    printf("[1]Atacar o p� do BOSS                  [2]Atacar o joelho do BOSS             [3]Atacar a canela do BOSS\n");
    do
    {
        scanf(" %c",&menuboss);
        switch(menuboss)
        {
        case '1':
            printf("O p� dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataquemob[8]-defesa_p);
            vida_p-=(ataquemob[8]-defesa_p);
            printf("Sua vida � de %.2f",vida_p);
            interativo=0;
            vidaplayer();
            break;
        case '2':
            printf("Escolha certa!!! O BOSS sofreu dano, provavelmente � uma de suas partes fracas!!\n");
            interativo=0;
            break;
        case '3':
            printf("A canela dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataquemob[8]-defesa_p);
            vida_p-=(ataquemob[8]-defesa_p);
            printf("Sua vida � de %.2f",vida_p);
            interativo=0;
            vidaplayer();
            break;
        default:
            printf("Op��o Inv�lida\n");
        }
        if (menuboss=='0')
            interativo=1;

    }
    while(interativo!=0);
    system("pause");
    system("cls");
    printf("*****************************************************************************************************************************\n");
    printf("[1]Atacar o p� do BOSS                  [2]Atacar o joelho do BOSS             [3]Atacar a canela do BOSS\n");
    do
    {
        scanf(" %c",&menuboss);
        switch(menuboss)
        {
        case '1':
            printf("O p� dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataquemob[8]-defesa_p);
            vida_p-=(ataquemob[8]-defesa_p);
            printf("Sua vida � de %.2f",vida_p);
            vidaplayer();
            break;
        case '2':
            printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");

            break;
        case '3':
            printf("A canela dele � invulner�vel!! E ele acabou te dando um chute certeiro que te deu %.2f de dano.\n",ataquemob[8]-defesa_p);
            vida_p-=(ataquemob[8]-defesa_p);
            printf("Sua vida � de %.2f",vida_p);
            vidaplayer();
            break;
        default:
            printf("Op��o Inv�lida\n");
        }
        if (menuboss=='0')
            interativo=1;
        if (menuboss=='1')
        {
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("-HAHAHAHA,voc� jamais encontrar� minha parte fraca!! Disse o BOSS\n");
            printf("As partes invulner�veis se tornaram imposs�veis de serem atacadas\n");
            printf("[1]Ataque o Joelho!\n");
            do
            {
                scanf(" %c",&menuboss2);
                switch(menuboss2)
                {
                case '1':
                    printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");
                    interativo2=0;
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
                if (menuboss2=='1')
                {
                    system("pause");
                    system("cls");
                    printf("*****************************************************************************************************************************\n");
                    printf("O BOSS est� de joelhos e voc� tem mais partes fracas para atacar!!!\n");
                    printf("[1]Olhos                       [2]Pesco�o\n");

                    do
                    {
                        scanf(" %c",&menuboss3);
                        switch(menuboss3)
                        {
                        case '1':
                            printf("Ele levou muito dano por ser sua parte fraca, mas levantou e segue firme ao combate!!\n");
                            interativo3=0;
                            interativo=0;
                            break;
                        case '2':
                            printf("Ele levou muito dano por ser sua parte fraca, mas levantou e seguiu firme ao combate!!\n");
                            interativo3=0;
                            interativo=0;
                            break;
                        default:
                            printf("Op��o Inv�lida\n");
                        }
                    }
                    while(interativo3!=0);

                    if (menuboss=='0')
                        interativo=1;
                }
            }
            while(interativo2!=0);
        }
        if (menuboss=='0')
            interativo=1;
        if (menuboss=='2')
        {
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("O BOSS est� de joelhos e voc� tem mais partes fracas para atacar!!!\n");
            printf("[1]Olhos                       [2]Pesco�o\n");
            do
            {
                scanf(" %c",&menuboss2);
                switch(menuboss2)
                {
                case '1':
                    printf("Ele levou muito dano por ser sua parte fraca, mas levantou e segue firme ao combate!!\n");
                    interativo2=0;
                    interativo=0;
                    break;
                case '2':
                    printf("Ele levou muito dano por ser sua parte fraca, mas levantou e seguiu firme ao combate!!\n");
                    interativo2=0;
                    interativo=0;
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
            }
            while(interativo2!=0);
            if (menuboss=='0')
                interativo=1;
        }
        if (menuboss=='3')
        {
            system("pause");
            system("cls");
            printf("*****************************************************************************************************************************\n");
            printf("-HAHAHAHA,voc� jamais encontrar� minha parte fraca!! Disse o BOSS\n");
            printf("As partes invulner�veis se tornaram imposs�veis de serem atacadas\n");
            printf("[1]Ataque o Joelho!\n");
            do
            {
                scanf(" %c",&menuboss2);
                switch(menuboss2)
                {
                case '1':
                    printf("Escolha certa!!! O BOSS sofreu dano e caiu!!\n");
                    interativo2=0;
                    break;
                default:
                    printf("Op��o Inv�lida\n");
                }
                if (menuboss2=='3')
                {
                    system("pause");
                    system("cls");
                    printf("*****************************************************************************************************************************\n");
                    printf("O BOSS est� de joelhos e voc� tem mais partes fracas para atacar!!!\n");
                    printf("[1]Olhos                       [2]Pesco�o\n");
                    do
                    {
                        scanf(" %c",&menuboss3);
                        switch(menuboss3)
                        {
                        case '1':
                            printf("Ele levou muito dano por ser sua parte fraca, mas levantou e segue firme ao combate!!\n");
                            interativo3=0;
                            interativo=0;
                            break;
                        case '2':
                            printf("Ele levou muito dano por ser sua parte fraca, mas levantou e seguiu firme ao combate!!\n");
                            interativo3=0;
                            interativo=0;
                            break;
                        default:
                            printf("Op��o Inv�lida\n");
                        }
                    }
                    while(interativo3!=0);
                    if (menuboss=='0')
                        interativo=1;
                }
            }
            while(interativo2!=0);
        }

        if (menuboss=='0')
            interativo=1;
    }
    while(interativo!=0);
    system("pause");
    system("cls");
    printf("*****************************************************************************************************************************\n");
    printf("\nDepois de todo esse tempo nessa aventura dentro da Cripta desconhecida, aparece um ser do bem que te joga um arco e flechas enfeiti�ado, dizendo o seguinte:\n");
    printf("\nAcerte a mente dele, n�o a cabe�a, mas sim a sua mente... isso � o que o derrotar�!!!\n");
    system("pause");
    system("cls");
    printf("*****************************************************************************************************************************\n");
    printf("\nVoc� tenta se focar, esvaziar sua pr�pria mente para enchergar a dele ...\n");
    printf("\nQuando percebe, que o gigante se acalmou, a Cripta se silenciou... tudo parecia um �nico ser...\n");
    printf("\nEra tudo... voc� ...\n");
    printf("\nSua mente . . . \n");
    do
    {
        printf("[1]Utilizar o arco e flecha\n");
        scanf(" %c",&menuboss);
        switch(menuboss)
        {
        case '1':
            printf("\nO BOSS finalmente foi morto, caindo no ch�o e se dissolvendo...\n");
            interativo=0;
            break;
        default:
            printf("Op��o Inv�lida\n");
        }
        if (menuboss=='0')
            interativo=1;
    }
    while(interativo!=0);
}
