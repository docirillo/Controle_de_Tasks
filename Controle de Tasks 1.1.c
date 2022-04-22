#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	
	//Variáveis
	system("cls");
	FILE *dados;
	FILE *sessao;
	char dateStr [9];
	char timeStr [9];
	int qtd_task, tp_task, taskdb=0, taskexp=0, taskirr=0, taskrr=0, tasksxs=0, taskttr=0, taskurl=0;
	double tempo, soma_db=0, soma_exp=0, soma_irr=0, soma_rr=0, soma_sxs=0, soma_ttr=0, soma_url=0;
	
	
	//Entrada de Dados
	_strdate(dateStr);
	sessao = fopen("sessao.txt", "w");
	while(tp_task!=10){
	printf("\n===== Selecione o tipo da Task: \n 1 - DB\n 2 - EXP\n 3 - IRR\n 4 - RR\n 5 - SXS\n 6 - TTR\n 7 - URL\n 8 - Opções\n");
	scanf("%i", &tp_task);
		
	
	switch (tp_task){
	
	case 1:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_db = soma_db + tempo;
		taskdb++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados, "TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;
		
		
	case 2:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_exp = soma_exp + tempo;
		taskexp++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;	
	
	case 3:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_irr = soma_irr + tempo;
		taskirr++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;
	
	case 4:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_rr = soma_rr + tempo;
		taskrr++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;	
	
	case 5:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_sxs = soma_sxs + tempo;
		tasksxs++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;
	
	case 6:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_ttr = soma_ttr + tempo;
		taskttr++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;
	
	case 7:
		_strtime(timeStr);
		dados = fopen("backup_controledetasks.txt", "a");
		fprintf(dados, "Data: %s - Hora: %s\n", dateStr, timeStr);
		printf("Digite a duração da task(em minutos, com vírgula): ");
		scanf("%lf", &tempo);
		soma_url = soma_url + tempo;
		taskurl++;
		printf("TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fprintf(dados,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
		fclose(dados);
	break;
		
			
	}
	
	
	}
	_strtime(timeStr);
	fprintf(sessao, "Data: %s - Hora: %s\n", dateStr, timeStr);
	fprintf(sessao,"TEMPO TOTAL || TASKS\nDB : %.2lf   - %i\nEXP: %.2lf   - %i\nIRR: %.2lf   - %i\nRR : %.2lf   - %i\nSxS: %.2lf   - %i\nTTR: %.2lf   - %i\nURL: %.2lf   - %i\n", soma_db, taskdb, soma_exp, taskexp, soma_irr, taskirr, soma_rr, taskrr, soma_sxs, tasksxs, soma_ttr, taskttr, soma_url, taskurl);
	fclose(sessao);
	fclose(dados);
	

	
}


