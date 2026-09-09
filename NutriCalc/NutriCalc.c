//栄養成分の計算用
#include<stdio.h>

typedef struct {
	double protein;
	double fat;
	double carb;
	double salt;
	double calories;
} Nutrition;

int main() {
	int mode;
	Nutrition food[15] = { '\0' };
	puts("指定された栄養成分を計算します（カロリーは5以外すべて出力されます）");
	printf("1：タンパク質\t2：脂質\n3：糖質\t\t4：タンパク質と脂質と糖質\n5：食塩相当量\t6：カロリー\n7：すべて\n\n");
	printf("計算する項目を選択してください>>>");
	scanf("%d", &mode);

	if (mode == 1) {
		double sum_of_protein = 0;
		double sum_of_calories = 0;
		puts("\nタンパク質を実数で入力してください。（最大15個まで、0で終了）");
		for (int i = 0; i < 15; i++) {
			printf("%dつ目：", i + 1);
			scanf("%lf", &food[i].protein);
			if (food[i].protein == 0) {
				break;
			}
			food[i].calories = food[i].protein * 4;
			sum_of_protein += food[i].protein;
			sum_of_calories += food[i].calories;
		}
		printf("\nタンパク質：%.1lfg\nカロリー：%.1lfkcal\n", sum_of_protein, sum_of_calories);
	}

	return 0;
}