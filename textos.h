void introducao()
{
    printf("\nIntrodu��o : A Cripta!!!\n");
    printf("\n\n\nVoc� acorda em um local desconhecido, sua cabe�a d�i e voc� se sente perdido.\n\nVoc� andando lentamente avista uma figura que se aproxima . . .\n\nUma figura sombria encanpuzada, te encarando ... Voc� sente calafrios, ent�o pergunta :\t-Quem � voc�? Que lugar � esse? Como vim parar aqui? \n\n");
    system("pause");
    system("cls");
    printf("\n\n\nO estranho devolve de maneira ir�nica : -A pergunta correta a se fazer �: Quem � voc� ... hahahaaha.... Bem Vindo a Cripta crian�a.\n");
    system("pause");
    system("cls");
    printf("\n\n\nVoc� pensa consigo mesmo : -Realmente, quem sou eu...\tE se esfor�a para buscar em sua mem�ria . . .");
    system("pause");
    system("cls");
    printf("\n\n*********************************************************************| CRIA��O DE PERSONAGEM |*********************************************************************\n\n");
    system("pause");
    printf("\nSeleciona sua Classe :\n\n");
    printf("\n\n\n(1)- Guerreiro\n\n");
    printf("\n*Os Guerreiros possuem enormes habilidade no combate pelo fato de usarem uma espada e um escudo, fazendo com que sejam ofensivos at� mesmo na defesa.\n");
    printf("\nAtaque [16.3] | Vida [130.2] | Armadura [10.1] | Habilidade [Usa seu escudo para atingir o inimigo] | Dano Habilidade [30.5] | Tempo de Recarga [3 Turnos]\n");
    printf("\n\n\n(2)- Arqueiro\n\n");
    printf("\n*Os Arqueiros possuem extrema velocidade em seu ataque, fazendo com que isso compense a sua fragilidade, extermina os inimigos facilmente.\n");
    printf("\nAtaque [14.9] | Vida [110.9] | Armadura [12.2] | Habilidade [D� 3 rajadas r�pidas de flechas] | Dano Habilidade [40.9] | Tempo de Recarga [2 Turnos]\n");
    printf("\n\n\n(3)- Berseker\n\n");
    printf("\n*Os Bersekers possuem ataques poderosos com seus machados, e tamb�m s�o um pouco resistentes, o que compensa a sua lentid�o\n");
    printf("\nAtaque [18.1] | Vida [120.1] | Armadura [7.9] | Habilidade [Usa seu machado para um ataque forte] | Dano Habilidade [27.3] | Tempo de Recarga [4 Turnos]\n");
}
void criacaoraca()
{
    printf("\nSeleciona sua Ra�a :\n\n");
    printf("\n\n\n(1)- Humano\n\n");
    printf("\nOs Humanos possuem gostos, moral, costumes e h�bitos variados. S�o acusados de possu�rem pouco respeito pela historia. Mas � natural que os humanos, com sua vida relativamente curta e culturas em constante altera��o, tenham uma mem�ria coletiva menor do que os an�es e os elfos.\nHabilidade �nica: 'Grito de guerra' que faz com que, ao utilizada, ganhe mais defesa e dano de ataque por 2 rodadas.\n");
    printf("\n\n\n(2)- Elfo\n\n");
    printf("\nOs Elfos amam a liberdade, a variedade e a auto-express�o. Eles tendem fortemente aos aspectos mais gentis do caos. Geralmente, valorizam e protegem a liberdade dos outros t�o bem quanto a sua, sendo em sua maioria bondosos.\nHabilidade �nica: 'Energia astral', que faz com que zere o tempo de recarga da habilidade da classe do personagem.\n");
    printf("\n\n\n(3)- An�o\n\n");
    printf("\nOs An�es s�o reconhecidos por serem bons mineradores e mestres art�fices. Eles s�o guerreiros indom�veis, fortes e resistentes. Os an�es s�o reconhecidos facilmente pela altura, que n�o passa de um metro e meio.\nHabilidade �nica: 'Pulo de Odin', em que ele se arremessa no ar e atordoa o inimigo por 2 rodadas.\n");
}
void capitulo1_1()
{
    printf("\nCap�tulo 1 : O In�cio de uma Jornada!!!\n");
    printf("\n*************************************************************| Agora sua jornada come�a pela Cripta . . . |*************************************************************\n");
    printf("\nSem saber o porque de estar aqui, ou se quer como veio parar nesse lugar, ainda sente uma liga��o com ele, algo de alguma forma no fundo dessa Cripta o chama, e voc� responde esse chamado . . .\n");
    printf("\nVoc� olha para tr�s e v� a escada de onde veio, olha ao redor e percebe que est� em uma esp�cie de grande sal�o com enormes colunas ornamentadas, por�m est�o bem desgastadas, parece abandonado... \n");
    printf("\nEnt�o voc� decide verificar a integridade de seus equipamentos : \n");
    system("pause");
    system("cls");
    printf("\nSua armadura e espada parecem intactos, algo sobre as escritas na l�mina da arma lhe da uma sensa��o de nostalgia ...\n\nVoc� abre sua mochila e n�o encontra muito ...\n");
    printf("\nMOCHILA :\n");
    for (cont_mochila=0; cont_mochila<5; cont_mochila++)
        printf ("\t(%i)- %s\n",cont_mochila+1,mochila[cont_mochila]);
    printf("\nPor �ltimo encontra um objeto estranho em seu bolso, com um anel met�lico em volta, e runas que n�o consegue compreender entalhadas em seu acabamento, tem uma vaga lembran�a de que esse amuleto est� relacionado com sua chegada a Cripta.\n");
    printf("\nAp�s checar seus equipamentos voc� estava comendo quando sente uma presen�a, ent�o se vira. . .\n");
    system("pause");
    printf("\nUm goblim se egueirando para te pegar desprevinido, voc� se lan�a para o lado, se preparando para o combate, ele produz um barulho estridente com uma adaga em m�os vai para cima de voc� ...");
    system("pause");
    system("cls");
    strcpy(mochila[2],"Vazio");
}
void capitulo1_2()
{
    printf("\nAinda ofegante tenta se sintonizar com a realidade, e realiza que n�o poder� vacilar, n�o aqui, ent�o se endireita tenta focar sua mente e segue em frente, para uma porta no final do sal�o ...\n");
    printf("\nVoc� verifica a pr�xima sala... ela n�o � t�o grande,percebe que existem coisas jogadas pelo ch�o mas parece livre, ent�o atravessa a grande porta de metal...\n");
    system("pause");
    system("cls");
    printf("\nVasculhando o local, voc� encontra umas anota��es perto de uma mochila rasgada, apesar de n�o entender o que significam, encontra um s�mbolo que se parece ser o n�mero '4', e pensa o porque de aquilo estar ali...\n");
    printf("\nSaindo da sala segue para um corredor, as paredes de pedra parecem bem �midas, o lugar � empoeirado e parece ter v�rias pilhas de ossos espalhadas.\n");
    printf("\n� percept�vel que h� algo errado com esse lugar, e voc� n�o est� t�o surpreso, esperava isso, s� n�o pode dizer certamente o que foi fazer ali.");
    system("pause");
    system("cls");
    printf("\nCaminhando pelos longos corredores de pedra, com ilumina��o a base de tochas, voc� se depara com a entrada para uma sala ...\n");
    printf("\nDeseja entrar na sala ?\n");
    printf("\n\t(1)- Sim! \t (2)- N�o!");
}
void capitulo1_3()
{
    printf("\nSaindo da sala voc� segue caminhando... O corredor come�a a enlarguecer, e olhando para os lados v� diversas portas feitas de um metal enferrujando, no entanto n�o parece ser uma boa id�ia explorar esse lugar...\n");
    printf("\nAtrav�s das grades das portas parece haver criaturas, � melhor n�o se arriscar, voc� segue sorrateiramente ... encontra diversos esqueletos pendurados ou pregados ao longo dessa sala que parece intermin�vel ...\n");
    printf("\nSe esgueirando pelo lado direito da sala voc� enxerga movimenta��o do outro lado, ent�o se esconde nas sombras de uma gigante coluna retangular...\n");
    system("pause");
    printf("\nN�o consegue ver o que era, mas ja se foi, se sente aliviado ... no entanto quando voc� vai sair de cobertura percebe que o esqueleto escorado na parede ao seu lado est� diferente, ele n�o est� pendurado ...\n");
    printf("\nEle ent�o grune e tenta te acertar com a espada em sua m�o, por sorte voc� escapa dessa, mas agora precisa se defender . . .\n");
    system("pause");
    system("cls");
}
void capitulo1_4()
{
    printf("\nVoc� ainda n�o pode parar pra ver seus itens devido ao perigo eminente, � preciso apenas seguir em frente...\n");
    printf("\nCom vida por�m amea�ado nesse lugar voc� quer sair logo dali, � poss�vel ver a sa�da, no entanto ...");
    printf("\nAparece um Goblin para atrapalhar sua sa�da!!!");
    system("pause");
    system("cls");
}
void capitulo1_5()
{
    printf("\nExiste uma esp�cie de di�rio no ch�o... voc� o pega...\n");
    system("pause");
    printf("\nNele voc� l� sobre um her�i que tentou se aventurar por essa Cripta, e buscava algum objetivo no final dela, tem algo sobre um ciclo a ser quebrado, mas � dif�cil entender com as p�ginas t�o mofadas...\n");
    printf("\nVoc� come�a a se lembrar... sua casa, seu lar, seus treinamentos com seu mestre, seus companheiros, sua vinda at� a Cripta, e um branco...\n");
    system("pause");
    system("cls");
    printf("\n- � isso, eu tenho um prop�sito, eu preciso cumprir com as expectativas de meu mestre, preciso me tornar um her�i, eu posso n�o lembrar de tudo ainda, mas vou at� o fim disso, � o que esperam de mim...\n");
    printf("\nInspirado pelas mem�rias que retomou, voc� tem um senso de que � necessitado para alguma causa, as pessoas com as quais voc� se importa e se importam contigo dependem disso, voc� precisa ter sucesso...\n");
    system("pause");
    system("cls");
}
void capitulo2_1()
{
    printf("\nCap�tulo 2 : Se aprofundando na Cripta!!!\n");
    printf("\n*************************************************************| Sua jornada continua no pr�ximo n�vel da Cripta . . . |*************************************************************\n");
    printf("\n... Ap�s continuar descendo na Cripta, voc� se encotra cada vez mais perto de seu objetivo final...\n");
}
void capitulo2_2()
{
    printf("\nContinuando a retomar suas mem�rias, voc� se lembra de seu mestre Hirko, que o treinou para que conclu�sse essa miss�o, mesmo sem lembrar de qual era e o porque, voc� sabe que as respotas est�o aqui em algum lugar...\n");
    printf("\nVoc� ja est� caminhando a algum tempo, e desde que desceu mais na Cripta ela parece estar se modificando, as paredes de pedras cinzentas agora s�o blocos de calc�rio, tem areia pelo ch�o al�m de teias de aranha por todo lado.\n");
    printf("\nAparenta estar em uma catacumba, e desde que entrou est� a caminhar com uma tocha para iluminar seu caminho...\n");
    system("pause");
    system("cls");
    printf("\nAgora descendo mais um lance de escadas voc� encontra escritas e desenhos que parecem contar uma hist�ria...\n");
    printf("\nNela um animal afugentado percorre uma floresta perdida, tentando encontrar uma sa�da, mas sempre volta ao mesmo local, com muito medo dos seus arredores, mas a �nica coisa que o persegue � sua pr�pria sombra...\n");
    printf("\nIsso lhe ecoa na mente, mas n�o parece fazer muito sentido...\n");
    system("pause");
    system("cls");
    printf("\nEnt�o voc� decide partir, quando virando o final do corredor voc� enxerga uma sombra se mexendo e parece ser um inimigo, ser� melhor usar o elemento surpresa para ataca-lo ou tentar se esgueirar...\n");
    system("pause");
}
void capitulo2_3()
{
    printf("Voc� perdeu sua tocha gra�as a esse ocorrido, mas n�o foi um grande problema...\n");
    system("pause");
    system("cls");
    printf("\nDepois desse evento infortuno, voc� por sorte encontra uma tocha presa a parede, ent�o pensa ser um bom momento para usar sua mochila agora que parece seguro e pegar a tocha para ajudar a iluniar o caminho...\n");
}
void capitulo2_4()
{
    printf("\nAgora pronto para seguir, com a tocha em m�os voc� segue andando pela Cripta...\n");
    system("pause");
    system("cls");
    printf("\nVoc� encontra uma mochila perto a um cadaver, voc� primeiramente checa se ele est� realmente morto e ele realmente aparenta estar... Ent�o voc� vasculha a mochila...\n");
}
void capitulo2_5()
{
    printf("\nANOTA��ES: -...Ent�o � preciso tomar cuidado, diversos desafios est�o por vir... mas no final � preciso enfrentar... se n�o coseguir derrota-lo... Acho que estou ficando louco, tenho a impress�o que � imposs�vel sair daqui.\n");
    printf("\nVoc� reflete sobre o que conseguiu ler, e lembra que de fato havia alguma obst�culo final a ser derrotado, seu mestre havia dito a ele -'...no final, algo o aguarda, voc� vai entender o real desafio quando alcan�ar teu objetivo...'.\n");
    printf("\nEnt�o voc� levanta e segue seu caminho...\n");
    system("pause");
    system("cls");
}
void enigma()
{
    printf("\nCaminhando pelos corredores voc� avista saida para uma �rea maior com tochas e grandes est�tuas que aparentam ser eg�pcias\n");
    printf("\nVoc� entra nessa nova sala, andando com cautela voc� atravessa entre as est�tuas gigantes com labaredas de fogo at� uma enorme porta que bloqueia seu caminho, e nela uma escrita...\n");
    printf("\nExiste tamb�m um mecanismo no ch�o de placa de press�o que quando voc� pisa uma est�tua ao seu lado se vira para ti...\n");
    system("pause");
    printf("\n'Ao amanhecer, possu� quatro patas, ao entardecer apenas duas e ao anoitecer possu� tr�s . . . ' \n");
    printf("\n -Uma charada..., eu ja escutei essa antes... preciso descobrir a resposta para seguir meu caminho...e algo me diz que � melhor eu n�o errar...\n");
    printf("\n -Patas... � prov�vel que seja um animal...\n");
    printf("\n\t (1)- Esfinge! \t (2)- Macaco! \t (3)- Homem! \t (4)- Camelo! \t (5)- Cobra \t (6)- Falc�o\n");
}
void fim_enigma()
{
    printf("\nAs portas se abrem e uma ventania passa por voc�... ent�o, com sua tocha em m�os voc� segue pela porta e desce pela escadaria . . . \n");
    system("pause");
    system("cls");
}
void capitulo3_1()
{
    printf("\nCap�tulo 3 : A descida para a escurid�o!!!\n");
    printf("\n*************************************************************| Voc� continua a se aprofundar na Cripta . . . |*************************************************************\n");
    printf("\n... Voc� segue descendo nas profundezas da Cripta, saindo daquela �rea anterior sente que desafios maiores ainda est�o por vir...\n");
    printf("\nEnt�o decide para um momento para repor as energias e olhar seu equipamento atual :\n");
}
void capitulo3_2()
{
    printf("\nDurante essa transi��o, voc� veio explorando os arredores e se depara com uma mesa de madeira que parecia ser de um alquimista...\n");
    system("pause");
    printf("\nVoc� deseja interagir com ela, quem sabe n�o encontra uma po��o...\n");
}
void capitulo3_3()
{
    printf("\nContinuando seu caminho � poss�vel ver a mudan�a no cen�rio...\n");
    printf("\nAs paredes parecem o interior de uma caverna, o espa�o aumentou relativamente, machas de sangues s�o frequentes, cabe�as penduradas, alguns amuletos de adora��o como ornametons improvisados com ossos e estacas de madeira...\n");
    system("pause");
    system("cls");
    printf("\nDerrepente uma lan�a � jogada em sua dire��o, voc� apenas tem tempo de sair em parte do caminho, tomando -20 de dano...\n");
    system("pause");
    vida_p-=20;
    printf("\nUm troll avan�a em sua dire��o com tudo empunhando um tronco gigante . . .\n");
    system("pause");
    system("cls");
}
void capitulo3_4()
{
    printf("\nOfegante ap�s a luta, voc� procura um local para descansar... e percebe que existe uma abertura mais a frente...\n");
    printf("\nVoc� entra e se senta, decide comer um pouco de comida que havia achado mais cedo...\n");
    system("pause");
    system("cls");
    printf("\nRefletindo um pouco sobre o que est� acontecendo voc� v� mensagens de socorro nas paredes marcadas a sangue...\n");
    printf("\nVoc� tenta manter sua cabe�a centrada no objetivo, mas at� isso come�a a ser duvidoso para ti... parece que um incerteza come�a a tomar conta de ti...\n");
    system("pause");
    system("cls");
    printf("\n -Preciso continuar, preciso chegar ao final, n�o importa o que eu pense, tenho que fazer isso por eles...\n");
    printf("\nMas at� sobre 'eles',as pessoas das quais voc� se importa, voc� come�a a se questionar, ser� que realmente vale a pena levar isso adiante por conta deles, voc� nem sabe aonde quer chegar...\n");
    system("pause");
    system("cls");
    printf("\nSe levantando, voc� repara em um tipo de altar de adora��o e decide verifica-lo...\n");
    printf("\nEle � constituido de madeiras e cordas que amarram ossos a ele, num formato bem estranho, com um desenho ao fundo, parece ser para alguma divindade...\n");
    printf("\nCertamente pertence as criaturas aqui embaixo, ser� que deve interagir com isso . . .\n");
}
void capitulo3_5()
{
    printf("\nSaindo do lugar onde voc� estava, voc� escuta um barulho estranho se aproximando, quando percebe um bando de orcs correndo pelo corredor v�o na sua dire��o ...\n");
    printf("\nA unica op��o a correr, ent�o voc� guarda sua espada e come�a a correr o mais r�pido poss�vel...\n");
    system("pause");
    system("cls");
    printf("\nPassa por diversas salas e objetos estranhos, virando nas curvas que encontra, at� chegar a uma pilha de corpos numa entrada estranha, e tem a chance de se esconder ali...\n");
    printf("\nVoc� n�o conseguiria correr mais, ent�o sem pensar entra passa pelas teias entra ali e entra na pilha tentando ficar im�vel, o bando passa por ali, o ch�o treme...\n");
    system("pause");
    system("cls");
    printf("\nQuando a �rea parece estar livre de inimigos voc� sai da pilha de corpos, por�m o local parecia o covil de uma aranha...\n");
    printf("\nEla desce do teto e cai entre voc� e a sa�da, ela parece diferente, bem maior que outras aranhas vai ser preciso tomar um cuidado extra . . .\n");
}
void capitulo3_6()
{
    printf("A luta contra a Aranha Gigante dropou o Peitoral de Mithril, que aumentou sua defesa em 2, sua defesa agora � de %.2f\n",defesa_p);
    system("pause");
    system("cls");
    printf("\nAinda meio tonto, voc� sai do covil da aranha e segue para uma escadaria de pedregulhos que leva para baixo...\n");
    printf("\nAo final do corredor que voc� se esncontra existe um outro altar, esse parece diferente dos outros... existem escritas nele e em volta, por�m voc� n�o as entende...\n");
    printf("\nExistem dois buracos, que s�o poss�veis de colocar a m�o . . .\n");
}
void capitulo3_7()
{
    printf("\n... Ap�s mais um per�odo de caminhada voc� se depara com uma porta de madeira em seu caminho...\n");
    system("pause");
    printf("\nVoc� olha pelo buraco da fechadura e v� um orc dentro da sala, mas tamb�m alguns livros em cima de uma mesa que te chamam a aten��o, eles podem te ajudar nessa jornada ...\n");
    printf("\nEnt�o voc� empunha sua arma, e chuta com tudo a porta, e avn�a em dire��o ao orc . . .\n");
    system("pause");
    system("cls");
}
void capitulo3_8()
{
    printf("\nCom o orc derrotado voc� consegue ler os livros em seguran�a...\n");
    system("pause");
    printf("\nNeles vo� encontra anota��es sobre seu amuleto, o que te trouxe a Cripta, ele � uma esp�cie de chave, que da a dire��o a ela...\n");
    printf("\nEnt�o voc� se recorda de seu mestre, Hiroko, que lhe entregou esse amuleto quando se formou um guerreiro a muito tempo atr�s... ent�o retoma um pouco de confian�a e segue seu caminho...\n");
    printf("\n� percept�vel que o objetivo final est� pr�ximo, ent�o voc� tenta se manter firme para o que vier...\n");
    system("pause");
    system("cls");
    printf("\nFinalmente voc� chega a uma grande abertura onde um port�o com grades de ferro est� levantado, quando voc� passa por ele, eles se fecham...\n");
    system("pause");
    printf("\nAdentrando esse local escuro, voc� perde no��o de tempo, de tato, de audi��o...\n");
    printf("\nUm urro o surpreende e ecoa em toda sua mente, como se algu�m gritasse dentro de sua cabe�a... voc� cai no ch�o, mas rapidamente se levanta...\n");
    printf("\nEncontra uma pequena abertura que a luz conseguia passar, ent�o � uma boa oportunidade de usar sua mochila antes de continuar...\n");
}
void capitulo_final()
{
    printf("\nChegando no fim da Cripta, voc� se depara com um gigante que estava aguardando na sa�da, e a �nica maneira de passar por ele � derrotando-o.\n");
    printf("\nCap�tulo Final : O Confronto com seu objetivo final!!!\n");
    printf("\n*************************************************************| ? ? ? |*************************************************************\n");
    printf("\nSem saber o que esperar do que est� por vir, voc� pensa que vai poder finalmente sair desse lugar assim que acabar, que todo o sofrimento vai ter fim...\n");
    printf("\nVoc� n�o se sente mais tanto um her�i da hist�ria mas sim uma pessoa infortuna...\n");
    system("pause");
    printf("\nSua cabe�a come�a a embaralhar e voc� tem a sensa��o de dejavu, como se ja tivesse estado ali antes . . .\n");
    system("pause");
    system("cls");
    printf("\nMas voc� vai ao final disso, ent�o no final da escada, voc� caminha pelo corredor que aumenta... chegando a uma enorme abertura onde voc� avista um mostro gigante e deformado no que parece ser um enorme fo�o...\n");
    printf("\nVoc� tenta focar sua mente que parece quebrada e parte para o confronto . . .\n");
    system("pause");
    system("cls");
    printf("\n\n*******************************************************************| O GUARDI�O |*******************************************************************\n\n");
    printf("\nO guardi�o se levanta e ruge ...\n");
    printf("\n -O que veio fazer aqui?\n");
    printf("\nVoc� sente um calafrio e responde :\n");
    printf("\n -Vim acabar com isso!\n");
    printf("\nO guardi�o ri.....\n");
    printf("\n- Hahahahah.... Acha que pode me derrotar? Voc� sabe muito bem o que vai acontecer, isso nunca vai acabar... Esse lugar � amaldi�oado, eu sou amaldi�oado... voc� � amaldi�oado . . . \n");
    printf("\nPor final, voc� responde e parte pra cima...\n");
    printf("\n -S� sei que tenho que tentar... eu n�o vou desistir!\n");
}
void texto_final ()
{
    printf("\nNo mesmo momento em que o corpo do BOSS se dissolve, cai um papel com o n�mero '9', fazendo uma conex�o com o '4' que havia encontrado no come�o do jogo.\n");
    system("pause");
    system("cls");
    printf("\nAgora, tudo fazia sentido, enquanto voc� era sugado para uma luz t�o brilhante que n�o conseguia ver nada... voc� se realiza...\n");
    printf("\nEsses confrontos, esses desafios, essa Cripta, tudo isso que voc� passou... toda essa luta � algo teu, sua luta constante, com voc� mesmo, sua luta com sua mente, sua Cripta . . .\n");
    printf("\nEnt�o, voc� � levado de volta...\n");
}
