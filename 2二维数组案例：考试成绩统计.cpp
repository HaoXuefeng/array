
# include <iostream>
using namespace std;
# include <string>

						//	考试成绩，输出三名同学 三门科目 的总成绩
//	语数英：张三：100，100，100； 李四：90，50，100； 王五：60，70，80

int main() {
	int scores[3][3] =
	{
		{ 100,100,100 },
		{ 90,50,100 },
		{ 60,70,80 }
	};
	int sum[3] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i] += scores[i][j];
		}
	}
	string name[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++) {
		cout << name[i] << "的总分是：" << sum[i] << endl;
	}


	system("pause");
	return 0;
}
