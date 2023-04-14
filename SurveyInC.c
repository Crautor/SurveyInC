// Você foi contratado para desenvolver um sistema a ser usado em uma enquete. A empresa que o contratou precisa tabelar os resultados da seguinte enquete, feita a uma grande quantidade de organizações:
// Qual o melhor sistema operacional para uso em servidores?
// As possíveis respostas são:
// 1- Windows Server.
// 2 - Unix.
// 3 - Linux.
// 4 - Netware.
// 5 - Mac OS.
// 6 - Outro.
// O programa deverá ler os valores até ser informado o valor 0, que encerra a entrada dos dados. Não deverão ser aceitos valores além dos válidos para o programa (0 a 6).
// Após os dados terem sido completamente informados, o programa deverá calcular a percentual de cada um dos concorrentes.
// Ao final, devem ser mostrados todos os sistemas operacionais com a quantidade de votos e o percentual de cada um.
#include <stdio.h>

int main(){
    int sair=1,win=0,unix=0,linux=0,netwere=0,mac=0,outro=0,voto=0,total=0;
    float winper=0,unixper=0,linuxper=0,netwereper=0,macper=0,outroper=0;

    while (sair!=0)
    {
        printf("Informe seu voto\n");
        printf("1- Windows Server.\n");
        printf("2 - Unix.\n");
        printf("3 - Linux.\n");
        printf("4 - Netware.\n");
        printf("5 - Mac OS.\n");
        printf("6 - Outro.\n");
        printf("digite 0 para sair\n");
        scanf("%d",&voto);
        switch (voto)
        {
        case 0:
            printf("Voce decidiu parar\n");
            sair=0;
            winper=winper/total*100;
            unixper=unixper/total*100;
            linuxper=linuxper/total*100;
            netwereper=netwereper/total*100;
            macper=macper/total*100;
            outroper=outroper/total*100;
            printf("1- Windows Server. = %d que corresponde a %.2f%%\n",win,winper);
            printf("2 - Unix. = %d que corresponde a %.2f%%\n",unix,unixper);
            printf("3 - Linux. = %d que corresponde a %.2f%%\n",linux,linuxper);
            printf("4 - Netware. = %d que corresponde a %.2f%%\n",netwere,netwereper);
            printf("5 - Mac OS. = %d que corresponde a %.2f%%\n",mac,macper);
            printf("6 - Outro. = %d que corresponde a %.2f%%\n",outro,outroper);
            break;
        case 1:
            win+=1;
            winper+=1;
            total+=1;
            break;
        
        case 2:
            unix+=1;
            unixper+=1;
            total+=1;
            break;
        
        case 3:
            linux+=1;
            linuxper+=1;
            total+=1;
            break;
        
        case 4:
            netwere+=1;
            netwereper+=1;
            total+=1;
            break;
        
        case 5:
            mac+=1;
            macper+=1;
            total+=1;
            break;
        
        case 6:
            outro+=1;
            outroper+=1;
            total+=1;
            break;
        default:
            printf("Valor invalido\n");
            break;
        }
    }
}