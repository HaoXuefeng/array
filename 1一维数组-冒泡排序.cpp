/*
# include <iostream>
using namespace std;

								//	冒泡排序：最常用的排序方法，对数组内元素进行排序
					//	1、比较相邻的两个元素，如果第一个比第二个大，那就交换它们两个
					//	2、对每一对相邻的元素做同样的操作，执行完毕后，找到第一个最大值
					//	3、重复以上步骤，每轮次比较次数-1，直到不需要比较

int main() {
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前的数组：" << endl;
	for (int i = 0; i < 9; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	//开始排序
	//总共排序轮数 = 元素个数 - 1；i表示轮数，所以i < 9 - 1;	轮数从0开始
	for (int i = 0; i < 9 - 1; i++) {
		//内层循环对比	排序次数 = 元素个数 - 当前轮数 - 1		（实际上就是冒泡排序，在第i轮，已经确认了 i+1 个最大值）
		//														排序次数 = 元素个数 - （当前轮数 + 1）
		for (int j = 0; j < 9 - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}

	}
	cout << "排序后的数组：" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}
*/