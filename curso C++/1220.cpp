#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	int num;
	int lista[1000];
	int real, centavos;
	double valorMaior, valorMenor, total;
	while(true){
		total = 0;
		cin>>num;
		if(num == 0) break;
		for(int i = 0; i < num;i++){
			scanf("%d.%d", &real, &centavos);
			lista[i] = (real * 100) + centavos;
			total += lista[i];
		}
		valorMaior = 0;
		valorMenor = 0;
		total = ((double) total) / num;
		
		for(int i = 0; i < num; i++){
                    if(lista[i] < total){
                            valorMenor += ((int)(total - lista[i]))/100.0;
                    }
                    else{
                          valorMaior += ((int)(lista[i] - total))/100.0;
                    }
            }
            
            if(valorMenor > valorMaior){
                          printf("$%.2f\n",valorMenor);
            }else{
                  printf("$%.2f\n",valorMaior);
            }
	}

	return 0;
}
