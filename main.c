//BIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
//VARIAVEIS
        float preco[20], precoNF, NFPreco_Produto[20];
        int a=0, x=0, v=0, rel=0, y, i, aux, cod_exclui, troca;
        int codigo[20], estoque[20], codigoNF[20], codigoVenda[v], NFCod_Produto[20], NFCod[20], NFEstoque_Produto[20], procura_cod, procura_est, vetor_ref;
        int op_Menu_Pricipal, op_Menu_Estoque, op_Menu_Venda, op_Menu_Relat, opGeral, teste, teste_est;

//INICIO
        do
        {
        printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nInforme o que voce deseja fazer : \n[1] - Gerenciar Estoque\n[2] - Registrar Venda\n[3] - Gerar Relatorio\n[4] - Sair\nSua escolha : ");
        scanf ("%d", &op_Menu_Pricipal);
        system ("cls");

         switch (op_Menu_Pricipal)
         {
         case 1:
                do
                {
                printf ("GERENCIAMENTO DE ESTOQUE\n\nO que voce desejar fazer:\n[1] - Incluir novo cadastro\n[2] - Alterar cadastro especifico\n[3] - Excluir cadastro\n[4] - Voltar\nSua escolha: ");
                scanf ("%d", &op_Menu_Estoque);
                system ("cls");
                   switch (op_Menu_Estoque)
                   {
                   case 1:
                       //INCLUSAO DE CADASTRO
                          do
                          {
                          printf ("GERENCIAMENTO DE ESTOQUE\n\nINCLUSAO DE NOVO CADASTRO\n\n");
                          teste=0;
                                 do
                                 {
                                 teste=0;
                                 printf ("Informe o codigo do produto: ");
                                 scanf ("%d", &codigo[x]);
                                 for (i=0; i<x; i++)
                                 {
                                        if (codigo[x]==codigo[i])
                                        {
                                        printf ("ERRO - O codigo ja existe\n");
                                        teste=1;
                                        }
                                 }
                                 }
                                 while(teste==1);
                                 //INCLUSAO DE PRECO DO PRODUTO
                                 do
                                 {
                                 teste=0;
                                 printf ("Informe o preco unitario: ");
                                 scanf ("%f", &preco[x]);
                                        if (preco[x]<=0)
                                        {
                                        printf ("ERRO - Preco invalido\n");
                                        teste=1;
                                        }
                                 }
                                 while (teste==1);
                                 //INCLUSAO DA QUANTIDADE DO PRODUTO
                                 do
                                 {
                                 teste=0;
                                 printf ("Informe a quantidade de produtos no estoque: ");
                                 scanf ("%d", &estoque[x]);
                                        if (estoque[x]<0)
                                        {
                                        printf ("ERRO - Estoque negativo\n");
                                        teste=1;
                                        }
                                 }
                                 while (teste==1);
                          printf ("\n\nDeseja incluir novo produto?\n[1] - Sim\n[2] - Nao\nSua Escolha: ");
                          scanf ("%d", &teste);
                          x++;
                          rel++;
                          system ("cls");
                          }
                          while (teste==1);
                          system ("cls");
                          printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                          break;
                   case 2:
                          do
                          {
                          printf ("GERENCIAMENTO DE ESTOQUE\n\nALTERACAO DE CADASTRO ESPECIFICO");
                          teste=0;
                                 if (x==0)                                  {
                                 printf ("Nenhum produto em estoque\n");
                                 }
                                 else
                                 {
                                        printf ("\n\nInforme o codigo do produto: ");
                                        scanf ("%d", &procura_cod);
                                        for (i=0; i<x; i++)
                                        {
                                        teste=0;
                                                   if (procura_cod==codigo[i])
                                                 {
                                                 do
                                                   {
                                                   teste=0;
                                                   printf ("Informe o preco unitario: ");
                                                   scanf ("%f", &preco[i]);
                                                          if (preco[x]<=0)
                                                        {
                                                        printf ("ERRO - Preco invalido\n");
                                                        teste=1;
                                                        }
                                                 }
                                                   while (teste==1);
                                                   do
                                                   {
                                                   teste=0;
                                                   printf ("Informe a quantidade de produtos no estoque: ");
                                                   scanf ("%d", &estoque[i]);
                                                                if (estoque[x]<0)
                                                        {
                                                        printf ("ERRO - Estoque negativo\n");
                                                        teste=1;
                                                        }
                                                   }
                                                   while (teste==1);
                                                   teste=1;
                                                   i=x;
                                           }
                                   }
                                         if (teste==0)
                                  {
                                        printf ("\nERRO - Codigo nao encontrado\n");
                                  }
                                  }
                          printf ("\nDeseja alterar outro cadastro?\n[1] - Sim\n[2] - Nao\nSua escolha: ");
                          scanf ("%d", &teste);
                          system ("cls");
                          }
                          while (teste==1);

                          system ("cls");
                          printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   case 3:
                          do
                          {
                                printf ("GERENCIAMENTO DE ESTOQUE\n\nEXCLUSAO DE CADASTRO\n");
                          printf ("Informe o codigo a ser excluido: ");
                          scanf ("%d", &procura_cod);
                          teste=0;
                                 for (i=0; i<x; i++)
                                 {
                                        if (procura_cod==codigo[i])
                                        {
                                        printf ("Codigo Encontrado!\nExcluido com sucesso!");
                                        teste=1;
                                        cod_exclui=i;
                                        i=x;
                                        //EXCLUSAO DE PRODUTO CADASTRADO
                                           for (i=cod_exclui; i<x; i++)
                                           {
                                           codigo[i]=codigo[i+1];
                                           preco[i]=preco[i+1];
                                           estoque[i]=estoque[i+1];
                                           }
                                        rel=rel-1;
                                        x=x-1;
                                        }
                                }

                                 if (teste==0)
                                 {
                                 printf ("Codigo nao encontrado!");
                                 }
                          printf ("\n\nDeseja excluir outro cadastro?\n[1] - Sim\n[2] - Nao\nSua Escolha:");
                          scanf ("%d", &teste);
                          system ("cls");
                          }
                          while (teste==1);
                          system ("cls");
                          printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   case 4:
                          opGeral=2;
                   break;
                   default:
                          printf ("Opcao invalida\n\n");
                          printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de estoque\n[2] - Voltar ao menu pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   }
                system ("cls");
                }
                while (opGeral==1);
         break;
         case 2:
                do
                {
                printf ("VENDAS\n\nO que voce desejar fazer:\n[1] - Registrar Venda\n[2] - Ver Nota Fiscal Especifica\n[3] - Relatorio de NFs\n[4] - Voltar\nSua escolha: ");
                scanf ("%d", &op_Menu_Venda);
                system ("cls");
                   switch (op_Menu_Venda)
                   {
                   case 1:
                          do
                          {
                          printf ("VENDAS\n\nREGISTRAR VENDA\n");
                                 do
                                 {
                                 teste=0;
                                 printf ("Informe o codigo da Nota Fiscal: ");
                                 scanf ("%d", &procura_cod);
                                 for (i=0; i<=v; i++)
                                 {
                                        if (procura_cod==NFCod[i])
                                        {
                                        teste=1;
                                        i=v+1;
                                        }
                                        else
                                        {
                                           if (i==v)
                                           {
                                                 NFCod[v]=procura_cod;
                                                 teste=0;
                                           }
                                        }
                                 }
                                 if (teste==1)
                                 {
                                   printf ("ERRO - O codigo ja existe\n");
                                   }
                                 }
                                 while(teste==1);
                                 do
                                 {
                                 printf ("\nInforme o codigo do produto: ");
                                 scanf ("%d", &procura_cod);
                                        for (i=0; i<x; i++)
                                        {
                                           if (procura_cod==codigo[i])
                                           {
                                           printf ("Codigo encontrado!!\n");
                                           vetor_ref=i;
                                           i=x;
                                           teste=0;
                                           NFCod_Produto[v]=procura_cod;
                                           }
                                           else
                                           {
                                           teste=1;
                                           }
                                        }
                                        if (teste==1)
                                        {
                                        printf ("Codigo nao encontrado!!\n");
                                        }
                                 }
                                 while(teste==1);
                                 do
                                 {
                                 teste_est=0;
                                 printf ("Informe a quantidade de produtos vendidos: ");
                                 scanf ("%d", &procura_est);
                                        if (procura_est<=0)
                                        {
                                        printf ("ERRO - Estoque invalido\n");
                                        teste_est=1;
                                        }
                                        else
                                        {
                                           if (procura_est>estoque[vetor_ref])
                                           {
                                           printf ("ERRO - Nao ha esta quantidade em estoque\n");
                                           teste_est=1;
                                           }
                                           else
                                           {
                                           estoque[vetor_ref]=estoque[vetor_ref]-procura_est;
                                           NFEstoque_Produto[v]=procura_est;
                                           }
                                        }
                                 }
                                 while (teste_est==1);

                                        precoNF=procura_est*preco[vetor_ref];
                                        printf ("O total da nota e de: %.2f\n\n", precoNF);
                                        NFPreco_Produto[v]=precoNF;

                                   v++;

                          printf ("\nDeseja registrar outra venda?\n[1] - Sim\n[2] - Nao\nSua escolha: ");
                          scanf ("%d", &teste);
                          system ("cls");
                          }
                          while (teste==1);
                          printf ("VENDAS\n\nO que deseja fazer:\n[1] - Voltar ao menu de Vendas\n[2] - Voltar ao menu pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   case 2:
                          do
                          {
                                  do
                                  {
                                  printf ("Informe o codigo da Nota Fiscal: ");
                                  scanf ("%d", &procura_cod);
                                  if (v==0)
                                  {
                                  printf ("Nao existem notas fiscais registradas\n");
                                  }
                                  else
                                  {
                                           teste=0;
                                         for (i=0; i<=v; i++)
                                         {
                                         if (procura_cod==NFCod[i])
                                                {
                                                 printf ("O codigo da Nota Fiscal e: %d\n", NFCod[i]);
                                                 printf ("O codigo do produto vendido e: %d\n", NFCod_Produto[i]);
                                                 printf ("A quantidade vendida e: %d\n", NFEstoque_Produto[i]);
                                                 printf ("O preco da Nota Fiscal e: %.2f\n", NFPreco_Produto[i]);
                                                 teste=1;
                                                }
                                                 }
                                                 {
                                                if (teste==0)
                                                {
                                                printf ("\nERRO - Codigo nao encontrado\n");
                                                }
                                         }

                                  }
                                  }
                                         while (teste==0);
                          printf ("\nDeseja ver outra Nota Fiscal?\n[1] - Sim\n[2] - Nao\nSua escolha: ");
                          scanf ("%d", &teste);
                          system ("cls");
                          }
                          while(teste==1);
                          printf ("VENDAS\n\nO que deseja fazer:\n[1] - Voltar ao menu de Vendas\n[2] - Voltar ao menu pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   case 3:
                          do
                          {
                                  troca=0;
                                 for (i=0; i<v; i++)
                                 {
                                          if (NFCod[i]>NFCod[i+1])
                                        {
                                        aux=NFCod[i+1];
                                        NFCod[i+1]=NFCod[i];
                                        NFCod[i]=aux;
                                        troca=1;
                                        }
                                 }
                          }
                          while (troca==1);
                          printf ("##CODIGO NOTA FISCAL  # COD.PROD. VENDIDO #  QTI. VENDIDA  #  PRECO TOTAL ##\n\n");
                          for (i=0; i<v; i++)
                          {
                          printf ("##   %d      #               %d               #         %d      #     %.2f    ##\n", NFCod[i], NFCod_Produto[i], NFEstoque_Produto[i], NFPreco_Produto[i]);
                          }
                          printf ("\nRelatorio concluido\n\n");
                          printf ("\nVENDAS\n\nO que deseja fazer:\n[1] - Voltar ao menu de Vendas\n[2] - Voltar ao menu pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   case 4:
                                opGeral=2;
                   break;
                   default:
                          printf ("Opcao invalida\n\n");
                          printf ("\nO que deseja fazer:\n[1] - Voltar ao menu de Vendas\n[2] - Voltar ao menu pricipal\nSua escolha: ");
                          scanf ("%d", &opGeral);
                   break;
                   }
                system ("cls");
                }
                while (opGeral==1);
         break;
         case 3:
                do
                {
                printf ("RELATORIOS\n\nQual tipo de relatorio que voce deseja gerar:\n[1] - Estoque completo\n[2] - Produto especifico\n[3] - Estoque zerado\n[4] - Voltar\nSua escolha: ");
                scanf ("%d", &op_Menu_Relat);
                system ("cls");
                   switch (op_Menu_Relat)
                 {
                   case 1:
                          printf ("RELATORIOS\n\nRELATORIO COMPLETO DE ESTOQUE\n\n");
                                 if (x==0)
                                 {
                                 printf ("Nenhum produto em estoque\n");
                                 }
                                 else
                                 {
                                 do
                                 {
                                 troca=0;
                                        for (i=0; i<rel; i++)
                                          {
                                                 if (codigo[i]>codigo[i+1])
                                           {
                                           aux=codigo[i+1];
                                           codigo[i+1]=codigo[i];
                                           codigo[i]=aux;

                                           aux=preco[i+1];
                                           preco[i+1]=preco[i];
                                           preco[i]=aux;

                                           aux=estoque[i+1];
                                           estoque[i+1]=estoque[i];
                                           estoque[i]=aux;
                                           troca=1;
                                           }
                                   }
                                 }
                                 while (troca==1);
                                        for (i=0; i<rel; i++)
                                        {
                                        printf ("##Codigo: %d\t##Preco: R$ %.2f\t##Quantidade em Estoque:%d\n", codigo[i], preco[i], estoque[i]);
                                        }
                                 }
                   printf ("\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                   scanf ("%d", &opGeral);
                   break;
                   case 2:
                          printf ("RELATORIOS\n\nRELATORIO DE PRODUTO ESPECIFICO\n");
                                 if (x==0)
                                 {
                                 printf ("\nNenhum produto em estoque\n");
                                 }
                                 else
                                 {
                                        printf ("Informe o codigo: ");
                                        scanf ("%d", &procura_cod);
                                        for (i=0;i<=x; i++)
                                        {
                                           if (procura_cod==codigo[i])
                                           {
                                        printf ("\n##Codigo: %d\t##Preco: R$ %.2f\t##Quantidade em Estoque:%d\n", codigo[i], preco[i], estoque[i]);
                                           i=x+1;
                                           }
                                           else
                                           {
                                                   if (i==x)
                                                   {
                                                   printf ("\nCodigo nao encotrado\n");
                                                   }
                                           }
                                        }
                                 }
                   printf ("\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                   scanf ("%d", &opGeral);
                   break;
                   case 3:
                          printf ("RELATORIOS\n\nRELATORIO DE PRODUTOS COM ESTOQUE ZERADO\n\n");
                          teste=0;
                                 if (x==0)
                                 {
                                 printf ("\nNenhum produto em estoque\n");
                                 }
                                 else
                                 {
                                        printf ("Estao com o estoque zerado os seguintes produtos:\n");
                                 do
                                 {
                                 troca=0;
                                        for (i=0; i<rel; i++)
                                          {
                                                 if (codigo[i]>codigo[i+1])
                                           {
                                           aux=codigo[i+1];
                                           codigo[i+1]=codigo[i];
                                           codigo[i]=aux;

                                           aux=preco[i+1];
                                           preco[i+1]=preco[i];
                                           preco[i]=aux;
                                           }
                                   }
                                 }
                                 while (troca==1);
                                        for (i=0; i<rel; i++)
                                        {
                                           if (estoque[i]==0)
                                           {
                                           printf ("# Codigo: %d # Preco: %.2f #\n", codigo[i], preco[i]);
                                           teste=1;
                                           }
                                        }
                                        if (teste==0)
                                        {
                                        printf ("Nao ha nenhum produto com estoque zerado");
                                          }
                                 }
                   printf ("\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                   scanf ("%d", &opGeral);
                   break;
                   case 4:
                          opGeral=2;
                   default:
                          printf ("Opcao invalida\n\n");
                   break;
                   }
                system ("cls");
                }
                while (opGeral==1);
         break;
         case 4:
                printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\n");
                opGeral=0;
                system ("pause");
         break;
         default:
                printf ("Opcao invalida\n\n");
                system ("pause");
                system ("cls");
                opGeral=2;
         break;
         }
        }
        while (opGeral==2);
}
//FIM
