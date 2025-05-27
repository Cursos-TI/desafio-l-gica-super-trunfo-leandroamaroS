#include <stdio.h>

int main() {

    int codigoestado01, codigoestado02;
    char nomeestado01 [50];
    char nomeestado02 [50];
    char capital01 [50];
    char capital02 [50];
    unsigned long int populacao01;
    unsigned long int populacao02;
    float area01;
    float area02;
    float pib01;
    float pib02;
    int pontoturistico01;
    int pontoturistico02;
    float densidadepopulacional01;
    float densidadepopulacional02;
    float pibpercapita01;
    float pibpercapita02;
    float superpoder01;
    float superpoder02;
    int atributo1;
    int atributo2;
    int atributo3;
    int atributo4;


    printf("Digite o codigo do estado da carta 01: \n");
        scanf("%d", &codigoestado01);

    printf("Digite o nome do estado da carta 01: \n");
        scanf("%s", nomeestado01);

    printf("Digite o nome da capital da carta 01: \n");
        scanf("%s", capital01);

    printf("Digite o número da População da carta 01: \n");
        scanf("%ld", &populacao01);

    printf("Digite o número da área da carta 01: \n");
        scanf("%f", &area01);

    printf("Digite o PIB da carta 01: \n");
       scanf("%f", &pib01);

    printf("Digite a quantidade de ponto turístico da carta 01: \n");
       scanf("%d", &pontoturistico01);

    densidadepopulacional01 = populacao01 / area01;

    pibpercapita01 = pib01 / populacao01;

    superpoder01 =  (populacao01 + area01 + pib01 + pontoturistico01 + pibpercapita01 + 1/densidadepopulacional01);

    printf(" O código do estado é: %d \n", codigoestado01);
    printf(" O nome do estado é: %s \n", nomeestado01);
    printf(" O nome da capital é: %s \n", capital01);
    printf(" A população: %ld \n", populacao01);
    printf(" A área: %.2f \n", area01);
    printf(" O PIB: %.2f \n", pib01);
    printf(" Quantidade de ponto turístico: %d \n", pontoturistico01);
    printf(" A desidade populacional : %.2f hab/km² \n", densidadepopulacional01);
    printf(" O pib per capita : %.2f reais \n" , pibpercapita01);
    printf(" O valor do superpoder é : %.2f \n", superpoder01);

    
    printf(" Digite o primeiro atributo para comparar com o seu adversário : \n");

    printf(" 1. população. \n");
    printf(" 2. área. \n");
    printf(" 3. pib. \n");
    printf(" 4. Quantidade de pontos turisticos. \n");
    printf(" 5. densidade populacioanl. \n");
       scanf("%d" , &atributo1);
    printf(" ok ! voçe escolheu %d. \n" , atributo1);

    switch (atributo1)
    {
    case 1:
    printf(" jogador da carta %d escolheu : Populacao - \n" , codigoestado01);
        break;
        case 2:
        printf(" o jogador da carta %d escolheu :Área - \n" , codigoestado01);
        break;
        case 3:
        printf(" o jogador da carta %d escolheu : Pib - \n", codigoestado01);
        break;
        case 4:
        printf("o jogador da carta %d escolheu : Quantidade de pontos turisticos. - \n" , codigoestado01);
        break;
        case 5:
        printf(" o jogador da carta %d escolheu : Densidade populacional. \n", codigoestado01);
        break;
    }

 printf(" Digite o segundo atributo para comparar com o seu adversário : \n");

    printf(" 1. população. \n");
    printf(" 2. área. \n");
    printf(" 3. pib. \n");
    printf(" 4. Quantidade de pontos turisticos. \n");
    printf(" 5. densidade populacioanl. \n");
       scanf("%d" , &atributo2);
    printf(" ok ! voçe escolheu %d. \n" , atributo2);

    switch (atributo2)
    {
    case 1:
    printf(" jogador da carta %d escolheu : Populacao - \n" , codigoestado01);
        break;
        case 2:
        printf(" o jogador da carta %d escolheu :Área - \n" , codigoestado01);
        break;
        case 3:
        printf(" o jogador da carta %d escolheu : Pib - \n", codigoestado01);
        break;
        case 4:
        printf("o jogador da carta %d escolheu : Quantidade de pontos turisticos. - \n" , codigoestado01);
        break;
        case 5:
        printf(" o jogador da carta %d escolheu : Densidade populacional. \n", codigoestado01);
        break;
    default: printf("opcao invalida. \n");
    break;
    }



    printf("Digite o codigo do estado da carta 02: \n");
    scanf("%d", &codigoestado02);

    printf("Digite o nome do estado da carta 02: \n");
        scanf("%s", nomeestado02);

     printf("Digite o nome da capital da carta 02: \n");
        scanf("%s", capital02);

    printf("Digite o número da População da carta 02: \n");
        scanf("%ld", &populacao02);

    printf("Digite o número da área da carta 02: \n");
        scanf("%f", &area02);

    printf("Digite o PIB da carta 02: \n");
        scanf("%f", &pib02);

    printf("Digite a quantidade de ponto turístico da carta 02: \n");
        scanf("%d", &pontoturistico02);

    densidadepopulacional02 = populacao02 / area02;

    pibpercapita02 = pib02 / populacao02;

    superpoder02 = ( populacao02 + area02 + pib02 + pontoturistico02 + pibpercapita02 + 1/densidadepopulacional02);

    printf(" O código do estado é: %d \n", codigoestado02);
    printf(" O nome do estado é: %s \n", nomeestado02);
    printf(" O nome da capital é: %s \n", capital02);
    printf(" A população: %ld \n", populacao02);
    printf(" A área: %.2f \n", area02);
    printf(" O PIB: %.2f \n", pib02);
    printf(" Quantidade de ponto turístico: %d \n", pontoturistico02);
    printf(" A desidade populacional : %.2f hab/km² \n", densidadepopulacional02);
    printf(" O pib per capita : %.2f reais \n" , pibpercapita02);
    printf(" O valor do superpoder é : %.2f \n", superpoder02);

    printf(" Digite um atributo para comparar com o seu adversário : \n");

    printf(" 1. população. \n");
    printf(" 2. área. \n");
    printf(" 3. pib. \n");
    printf(" 4. Quantidade de pontos turisticos. \n");
    printf(" 5. densidade populacioanl. \n");
    scanf("%d" , &atributo3);
    printf(" ok! voçe escolheu %d \n." , atributo3);
  


    switch (atributo3)
    {
    case 1:
    printf(" jogador da carta %d escolheu : Populacao - \n" , codigoestado02);
        break;
        case 2:
        printf(" o jogador da carta %d escolheu :Área - \n" , codigoestado02);
        break;
        case 3:
        printf(" o jogador da carta %d escolheu : Pib - \n", codigoestado02);
        break;
        case 4:
        printf("o jogador da carta %d escolheu : Quantidade de pontos turisticos. - \n" , codigoestado02);
        break;
        case 5:
        printf(" o jogador da carta %d escolheu : Densidade populacional. \n", codigoestado02);
        break;
    
    default:
    printf(" opcao invalida! \n");
        break;
    }

    printf(" Digite o segundo atributo para comparar com o seu adversário : \n");

    printf(" 1. população. \n");
    printf(" 2. área. \n");
    printf(" 3. pib. \n");
    printf(" 4. Quantidade de pontos turisticos. \n");
    printf(" 5. densidade populacioanl. \n");
    scanf("%d" , &atributo4);
    printf(" ok! voçe escolheu %d \n." , atributo4);

    if (atributo1 == atributo2){
         printf (" jogo empatou! \n");

    } else if( atributo1 > atributo2)
    
    {   printf(" Nome dos estados caparados : %s x %s \n", nomeestado01, nomeestado02);
        printf(" Atributos comparados :\n %d x %d \n", atributo1, atributo2);
        printf(" Parabéns!!! O jogador da carta %d venceu. \n", codigoestado01);
    
    }else {
        printf(" Nome dos estados caparados : %s x %s \n", nomeestado01, nomeestado02);
        printf(" Atributos comparados :\n %d x %d \n", atributo1, atributo2);
        printf(" parabéns!!! O jogador da carta %d venceu. \n", codigoestado02 );
    }