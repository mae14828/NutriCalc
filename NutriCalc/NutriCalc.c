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

	return 0;
}