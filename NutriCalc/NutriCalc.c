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

	while (1) {

		Nutrition food[15] = { '\0' };
		puts("指定された栄養成分を計算します。（0で終了）");
		printf("1：タンパク質\t2：脂質\n3：糖質\t\t4：タンパク質と脂質と糖質\n5：食塩相当量\t6：カロリー\n7：すべて\n\n");
		printf("計算する項目を選択してください>>>");
		scanf("%d", &mode);

		if (mode == 0) {
			puts("\n終了します。");
			break;
		}

		else if (mode == 1) {
			double sum_of_protein = 0;
			double sum_of_calories = 0;
			puts("\nタンパク質を実数で入力してください。（最大15個まで、負の数で終了）");
			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf", &food[i].protein);
				if (food[i].protein < 0) {
					break;
				}
				food[i].calories = food[i].protein * 4;
				sum_of_protein += food[i].protein;
				sum_of_calories += food[i].calories;
			}
			printf("\nタンパク質：%.1lfg\nカロリー：%.1lfkcal\n", sum_of_protein, sum_of_calories);
		}

		else if (mode == 2) {
			double sum_of_fat = 0;
			double sum_of_calories = 0;
			puts("\n脂質を実数で入力してください。（最大15個まで、負の数で終了）");
			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf", &food[i].fat);
				if (food[i].fat < 0) {
					break;
				}
				food[i].calories = food[i].fat * 9;
				sum_of_fat += food[i].fat;
				sum_of_calories += food[i].calories;
			}
			printf("\n脂質：%.1lfg\nカロリー：%.1lfkcal\n", sum_of_fat, sum_of_calories);
		}

		else if (mode == 3) {
			double sum_of_carb = 0;
			double sum_of_calories = 0;
			puts("\n糖質を実数で入力してください。（最大15個まで、負の数で終了）");
			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf", &food[i].carb);
				if (food[i].carb < 0) {
					break;
				}
				food[i].calories = food[i].carb * 4;
				sum_of_carb += food[i].carb;
				sum_of_calories += food[i].calories;
			}
			printf("\n糖質：%.1lfg\nカロリー：%.1lfkcal\n", sum_of_carb, sum_of_calories);
		}

		else if (mode == 4) {
			double sum_of_protein = 0;
			double sum_of_fat = 0;
			double sum_of_carb = 0;
			double sum_of_calories = 0;

			puts("\n値を実数で「タンパク質,脂質,糖質」のように入力してください。（最大15個まで、どれかがマイナスで終了）");
			puts("例：2.3,12,23.1");

			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf,%lf,%lf", &food[i].protein, &food[i].fat, &food[i].carb);

				if (food[i].protein < 0 || food[i].fat < 0 || food[i].carb < 0) {
					break;
				}

				food[i].calories = food[i].protein * 4 + food[i].fat * 9 + food[i].carb * 4;
				sum_of_protein += food[i].protein;
				sum_of_fat += food[i].fat;
				sum_of_carb += food[i].carb;
				sum_of_calories += food[i].calories;
			}
			printf("\nタンパク質：%.1lfg\n脂質：%.1lfg\n糖質：%.1lfg\nカロリー：%.1lfkcal\n", sum_of_protein, sum_of_fat, sum_of_carb, sum_of_calories);
		}

		else if (mode == 5) {
			double sum_of_salt = 0;
			puts("\n食塩相当量を実数で入力してください。（最大15個まで、負の数で終了）");
			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf", &food[i].salt);
				if (food[i].salt < 0) {
					break;
				}
				sum_of_salt += food[i].salt;
			}
			printf("\n食塩相当量：%.1lfg\n", sum_of_salt);
		}

		else if (mode == 6) {
			double sum_of_calories = 0;
			puts("\nカロリーを実数で入力してください。（最大15個まで、負の数で終了）");
			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf", &food[i].calories);
				if (food[i].calories < 0) {
					break;
				}
				sum_of_calories += food[i].calories;
			}
			printf("\nカロリー：%.1lfkcal\n", sum_of_calories);
		}

		else if (mode == 7) {
			double sum_of_protein = 0;
			double sum_of_fat = 0;
			double sum_of_carb = 0;
			double sum_of_calories = 0;
			double sum_of_salt = 0;

			puts("\n値を実数で「タンパク質,脂質,糖質,食塩相当量」のように入力してください。（最大15個まで、どれかがマイナスで終了）");
			puts("例：5,10,15.5,1.1");

			for (int i = 0; i < 15; i++) {
				printf("%dつ目：", i + 1);
				scanf("%lf,%lf,%lf,%lf", &food[i].protein, &food[i].fat, &food[i].carb, &food[i].salt);

				if (food[i].protein < 0 || food[i].fat < 0 || food[i].carb < 0 || food[i].salt < 0) {
					break;
				}

				food[i].calories = food[i].protein * 4 + food[i].fat * 9 + food[i].carb * 4;
				sum_of_protein += food[i].protein;
				sum_of_fat += food[i].fat;
				sum_of_carb += food[i].carb;
				sum_of_salt += food[i].salt;
				sum_of_calories += food[i].calories;
			}
			printf("\nタンパク質：%.1lfg\n脂質：%.1lfg\n糖質：%.1lfg\n食塩相当量：%.1lfg\nカロリー：%.1lfkcal\n",
				sum_of_protein, sum_of_fat, sum_of_carb, sum_of_salt, sum_of_calories);
		}
	}

	return 0;
}