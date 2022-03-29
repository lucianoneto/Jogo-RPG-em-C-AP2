int tempo_recarga=0,luta=1,atordoar=0,recarga_habilidade=0,testador=0;
char op_luta='0';

int batalha(float *ataqueinimigo, float *vidainimigo, float *ataquejogador, float *defesajogador,float *ataquefjogador, int *temporecargamax, float *vidainimigomax)
{
    printf("\n\n*********************************************************************| COMBATE |*********************************************************************\n\n");
    *vidainimigo=*vidainimigomax;
    luta=1;
    do
    {
        printf("\n|\t[1]Atacar(%.2f)\t|\t[2]Habilidade Classe(%.2f)\t|\t[3]Habilidade Ra�a\t|\t[4]Mochila\t|\t\n",*ataquejogador,*ataquefjogador);
        scanf(" %c",&op_luta);
        //////////////////////////////////////////////////
        if(testador>0 && recarga_habilidade==3)
        {
            *ataquejogador-=10;
            *defesajogador-=10;
            testador=0;
        }
        //////////////////////////////////////////////////
        if(atordoar>0)
            atordoar--;
        //////////////////////////////////////////////////
        switch (op_luta)
        {
        case '1':
            printf("\nVoc� ataca o inimigo!\n");
            *vidainimigo=*vidainimigo-*ataquejogador;
            printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida.\n",*ataquejogador,*vidainimigo);
            if(atordoar==0)
            {
                vida_p=(vida_p-(*ataqueinimigo-*defesajogador));
                printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida.\n\n",*defesajogador,(*ataqueinimigo-*defesajogador),vida_p);
            }
            if(recarga_habilidade>0)
                recarga_habilidade--;
            if(tempo_recarga>0)
                tempo_recarga--;
            vidaplayer();
            break;
        case '2':
            if (tempo_recarga!=0)
                printf("\nSua habilidade de classe est� carregando...\n");
            else
            {
                printf("\nVoc� usa sua habilidade, causando dano extra por�m se deixando vulner�vel!\n");
                *vidainimigo=*vidainimigo-*ataquefjogador;
                printf("\nO inimigo recebe -%.2f de dano e fica com %.2f de vida!\n",*ataquefjogador,*vidainimigo);
                tempo_recarga=*temporecargamax;
                if(atordoar==0)
                {
                    vida_p=(vida_p-(*ataqueinimigo-*defesajogador));
                    printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",*ataqueinimigo,vida_p);
                }
                if(recarga_habilidade>0)
                    recarga_habilidade--;
            }
            vidaplayer();
            break;
        case '3':
            if(recarga_habilidade!=0)
                printf("\nSua habilidade de ra�a est� carregando...\n");
            else
            {
                recarga_habilidade=5;
                if(habilidaderaca==1)
                {
                    printf("\n\Voc� utilizou o Grito de Guerra!! Ganhou +10 de ataque e +10 de defesa!!\n");
                    *ataquejogador+=10; // tem que durar 3 rodadas
                    *defesajogador+=10;
                    testador++;
                }
                if(habilidaderaca==2)
                {
                    printf("\nVoc� utilizou a Energia Astral!! Zerou o tempo de recarga da Habilidade de sua classe!!\n");
                    tempo_recarga=0; //zera o tempo de recarga do doente
                }
                if(habilidaderaca==3)
                {
                    printf("\nVoc� utilizou o Pulo de Odin!! Atordoou o advers�rio por 2 rodadas!!\n");
                    atordoar=3;//atordoa os mlk por 2 rodadas.
                }
                if(atordoar==0)
                {
                    vida_p=(vida_p-(*ataqueinimigo-*defesajogador));
                    printf("\nVoc� recebe -%.2f de dano e fica com %.2f de vida.\n",*ataqueinimigo,vida_p);
                }
                if(tempo_recarga>0)
                    tempo_recarga--;
                vidaplayer();
            }
            break;
        case '4':
            mochila123();
            if(atordoar==0)
            {
                vida_p=(vida_p-(*ataqueinimigo-*defesajogador));
                printf("\nVoce bloqueia %.2f, recebe -%.2f de dano e fica com %.2f de vida por ter usado a mochila.\n\n",*defesajogador,(*ataqueinimigo-*defesajogador),vida_p);
            }
            if(recarga_habilidade>0)
                recarga_habilidade--;
            if(tempo_recarga>0)
                tempo_recarga--;
            break;
        }
        if (*vidainimigo<=0)
        {
            if (*ataqueinimigo!=50)
            {
                system("pause");
                system("cls");
                printf("\n************************************************************\n");
                printf("\nVoc� vence a batalha!\n");
                printf("\n+10 pontos!\n");
                printf("\n************************************************************\n");
                system("pause");
                system("cls");
                pontos+=10;
                atordoar=0;
                if(testador>0 && recarga_habilidade>=3)
                {
                    *ataquejogador-=10;
                    *defesajogador-=10;
                    testador=0;
                }
            }
            luta=0;
        }
    }
    while(luta!=0);
    return printf("\n\nSua vida atual � %.2f, seu ataque � %.2f e sua defesa � %.2f .\n\n",vida_p,*ataquejogador,*defesajogador);
}
void verif_equipamentos ()
{
    printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
    printf("\nVida M�xima: %.2f \t Vida Atual: %.2f \t Ataque: %.2f \t Defesa: %.2f \n",vida_pmax,vida_p,ataque_p,defesa_p);
    printf("\nMOCHILA :\n");
    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
    printf("\n\n\n\n_____________________________________________________________________________________________\n\n\n\n");
    system("pause");
    system("cls");
}
void vidaplayer()
{
    if (vida_p<=0)
    {
        fp=fopen("pontuacao.txt","a");
        fprintf(fp,"\n-> %d \t | \t %s",pontos,nome_p);
        fclose(fp);
        system("cls");
        printf("\nVoc� pereceu para a Cripta...Boa sorte na pr�xima tentativa de derrota-la . . .\n");
        system("pause");
        system("cls");
        exit(0);
    }
}
