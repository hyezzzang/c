#include <stdio.h>


int main() {
	
	printf("몇개를 입력하시겠습니까?");
	int num;
	scanf("%d", &num);

	printf("숫자를 입력하세요.");
	char bubble[100];

	int i = 0;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &bubble[i]);
	}


	//for (int j = 0; j < num; j++) {

		for (i = 0; i < num; i++) {


			if (bubble[i] > bubble[i + 1]) {

				if(i=num-1)
				int temp = bubble[i];
				bubble[i] = bubble[i + 1];
				bubble[i + 1] = temp;

				printf("%d", bubble[i]);
			}
			
			
		}
		
		
	//}
	
}

	










