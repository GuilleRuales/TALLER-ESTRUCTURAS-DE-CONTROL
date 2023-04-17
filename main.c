#include <stdio.h>

int main(){
int a , llantas = 0, pastillas = 0, embrague = 0, faro = 0, radiador = 0 , cedula[10];
float total_llantas  , total_pastillas , total_embrague , total_faro , total_radiador , DESC , TOTAL , SUBTOTAL;
char op, productos, nombre[16];  
a = 0;

do {
  printf ("\nDigite la letra A si desea facturar el producto\n");
  printf ("Digite la letra B si desea imprimir la factura\n");
  printf ("Digite la letra C si desea salir\n");
  printf ("\nElija una opción\n");  
  scanf(" %c", &op); 

  if ((op == 'a')||(op == 'b')||(op == 'c'))
  {
    switch (op)
    { 
      case 'a':
        do{
          printf ("\na) Llantas (Precio: $150)\n");
          printf ("b) Kit Pastillas de freno (Precio: $55)\n");
          printf ("c) Kit de embrague (Precio: $180)\n");
          printf ("d) Faro (Precio: $70)\n");
          printf ("e) Radiador (Precio: $120)\n");
          printf("\nElija una opción:\n");
          scanf (" %c", &productos);

          
        if ((productos == 'a')||(productos == 'b')||(productos == 'c')||(productos == 'd')||(productos == 'e'))
        { 
        
        switch (productos)
        {
          case 'a':
            do{
              printf ("\nLLANTAS\n");
              printf ("¿Cuantas unidades de llantas desea?\n");
              scanf (" %i", &llantas);
            if (llantas < 0)
            {
              printf("\nIngrese un valor valido\n");
            }
            }while (llantas < 0);            
          break;
          case 'b':
            do{
              printf ("\nKIT PASTILLAS DE FRENO\n");
              printf ("¿Cuantas unidades de kit pastillas de freno desea?\n");
              scanf (" %i", &pastillas);
            if (pastillas < 0)
            {
              printf("\nIngrese un valor valido\n");
            }
            }while (pastillas < 0);
          break;
          case'c':
            do{
              printf ("\nKIT DE EMBRAGUE\n");
              printf ("¿Cuantas unidades de kit de embrague desea?\n");
              scanf (" %i", &embrague);
            if (embrague < 0)
            {
              printf("\nIngrese un valor valido\n");
            }
            }while (embrague < 0);
          break;
          case 'd':
            do{
              printf ("\nFARO\n");
              printf ("¿Cuantas unidades de faro desea?\n");
              scanf (" %i", &faro);
            if (faro < 0)
            {
              printf("\nIngrese un valor valido\n");
            }
            }while (faro < 0);
          break;
          case 'e':
            do{
              printf ("\nRADIADOR\n");
              printf ("¿Cuantas unidades de radiador desea?\n");
              scanf (" %i", &radiador);
            if (radiador < 0)
            {
              printf("\nIngrese un valor valido\n");
            }
            }while (radiador < 0);
          break;
          default:
          break;
            printf("\nNO HAY ESTA OPCION\n");
        }  

        do{
        printf("\n¿Desea seguir facturando un producto?\n"); 
        printf("\n    Digite: 1 = SI   O   2 = NO \n");
        scanf(" %i", &a);

          if ((a != 1)||(a != 2))
          { 
          }
        }while ((a != 1)&&(a != 2));
        }  
      }while (a != 2);
          
      break;
      case 'b':
        printf ("\nIngresar nombre para facturacion: ");
        scanf("%s",&nombre[16]);      
        printf ("Ingresar cedula para facturacion: ");
        scanf(" %i",&cedula[10]);  
        total_llantas = llantas*150;
        total_pastillas = pastillas*55;
        total_embrague = embrague*180;
        total_faro = faro*70;
        total_radiador = radiador*120;

        TOTAL = total_llantas + total_pastillas + total_embrague + total_faro + total_radiador;

        if ((TOTAL >=101)&&(TOTAL <= 500))
        {
         DESC = (0.05 * TOTAL)/100;
        }
        else if ((TOTAL >=501)&&(TOTAL <= 1000))
        {
          DESC = (0.07 * TOTAL)/100;
        }
        else if (TOTAL > 1000)
        {
          DESC = (0.1 * TOTAL)/100;
        }
        SUBTOTAL = TOTAL - DESC;

        printf("\nPRODUCTO                  CANTIDAD        PRECIO        TOTAL\n");
        if (llantas > 0)
        {
          printf("\nLLANTAS                      %i             $ 150      $ %.2f\n",llantas , total_llantas);
        }
        if (pastillas > 0)
        {
        printf("kIT PASTILLAS DE FRENO       %i             $  55      $ %.2f\n", pastillas , total_pastillas);
        }
        if (embrague > 0)
        {
        printf("KIT DE EMBRAGUE              %i             $ 180      $ %.2f\n", embrague , total_embrague);
        }
        if (faro > 0)
        {
        printf("FARO                         %i             $  70      $ %.2f\n", faro , total_faro);
        }
        if (faro > 0)
        {
        printf("RADIADOR                     %i             $ 120      $ %.2f\n", radiador , total_radiador);
        }
        printf("\nDESCUENTO                                             $ %.2f\n", DESC);
        printf("TOTAL SIN DESCUENTO                                   $ %.2f\n", TOTAL);
        printf("SUBTOTAL                                              $ %.2f\n", SUBTOTAL);
        printf("\nTOTAL FINAL                                           $ %.2f\n", SUBTOTAL);
      
      break;
      case'c':
        printf("\nGRACIAS POR ELEGIRNOS\n");
      break;
      default:
      break;
        printf("\nNO HAY ESTA OPCION\n");
    }
  }
  else
  {
   printf("\nNO HAY ESTA OPCION\n"); 
  }
}while (op != 'c');

  
return 0;
}