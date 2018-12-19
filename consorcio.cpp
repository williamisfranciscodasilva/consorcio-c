#include <conio.h>
#include <stdio.h>
main()
{
	float tot_val, tot_pres, val_pres,pres_pag, pres_pen, tot_pag, sal_dev;
	
	printf("Digite o valor total: ");
	scanf("%f",&tot_val);
	printf("Digite o total de prestacoes: ");
	scanf("%f",&tot_pres);
	val_pres = tot_val / tot_pres;
	printf("Total de prestacoes pagas: ");
	scanf("%f",&pres_pag);
	pres_pen = tot_pres - pres_pag;
	tot_pag = val_pres * pres_pag;
	sal_dev = tot_val - tot_pag;
	
	printf("Valor total: %f",tot_val);
	printf("\nTotal de prestacoes: %f",tot_pres);
	printf("\nValor da prestacao: %f",val_pres);
	printf("\nPrestacoes pagas: %f",pres_pag);
	printf("\nPrestacoes pendentes: %f",pres_pen);
	printf("\nTotal pago: %f",tot_pag);
	printf("\nSaldo devedor: %f",sal_dev);
	getch();
}
