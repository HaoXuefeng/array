
# include <iostream>
using namespace std;

						//	练习1、五只小猪称体重：一个数组中记录了五只小猪体重，找出并打印最重的小猪体重

//int main() {
//	int num = 4;
//	int arr[5] = { 300,350,200,400,250 };
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > arr[num]) {
//			num = i;
//		}
//	}
//	cout << "最重的体重是：" << arr[num] << endl;
//
//	system("pause");
//	return 0;
//}

						//	练习2、数组元素逆置：声明一个5个元素的数组，并将元素逆置
/*
int main() {

	int arr[5] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int num = 0;
	for (; start < end; start++, end--) {		//也可以使用while语句
		num = arr[start];
		arr[start] = arr[end];
		arr[end] = num;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}
*/