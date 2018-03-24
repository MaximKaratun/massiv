#include <stdio.h>
#include <Windows.h>

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	loop:
	
	int q;
	puts("Ââåäèòå êîë-âî ÷èñåë, êîòîðûå âû õîòèòå ââåñòè: ");
	scanf("%i", &q);
	
	int array[q];
	puts("Ââåäèòå ÷èñëà: ");
	for(int i = 0; i < q; i++)		scanf("%i", array + i);
	
	int delta;
	puts("Ââåäèòå êîë-âî ïåðåñòàíîâîê: ");
	scanf("%i", &delta);
	
	if(delta >  q)	goto loop;
	
	int direction;
	puts("Ââåäèòå íàïðàâëåíèå(1 - âëåâî èëè 2 - âïðàâî): ");
	scanf("%d", &direction);
	
	if((direction != 1) && (direction != 2))	goto loop;
	
	int new_array[q];
	
	if(direction == 2)
	{
		for(int i = 0; i < q - delta; i++)		*(new_array + i + delta) = *(array + i);
		for(int i = 0; i < delta ;i++)		*(new_array + i) = 0;
	}
	else
	{
		for(int i = 0; i < q - delta; i++)				*(new_array + i) = *(array + i + delta);
		for(int i = q; i > q - delta - 1;i--)		*(new_array + i) = 0;
	}
	
	puts("--------------------------\n");
	for(int i = 0;i < q; i++)	printf("%d ", *(new_array + i));
	
	return 0;
}
