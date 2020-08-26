/*
# include <iostream>
using namespace std;

						//	数组中的的元素都是 同一个类型 的

						//	数组是由 连续的内存位置 组成的

	//	数据类型 数组名 [数组长度];
	//	数据类型 数组名 [数组长度] = { 值1, 值2, ...};
	//	数据类型 数组名 [] = { 值1, 值2, ...};

int main() {
	int arr1[5];
	// 用下标赋值
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	arr1[4] = 5;
	//	初始化时没有写完元素，会用0填补
	int arr2[5] = { 1,2,3};

	int arr3[] = { 1,2,3,4,5,6,7,8,9 };	//会自动判断有多少个元素

	//可以利用循环方式访问数组元素
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << '\t';
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << '\t';
	}
	cout << endl;
	for (int j = 0; j < 9 ; j++) {
		cout << arr3[j] << '\t';
	}
	cout << endl;
	system("pause");
	return 0;
}


			//数组名用途：	1、可以获取整个数组在内存空间中的长度	sizeof(arr)
			//				2、可以获取数组在内存中的首地址
			//	tips：sizeof(arr[0])获取第一个元素的长度；sizeof(arr)/sizeof(arr[0])可以得到元素个数

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "数组所占内存空间字节数为： " << sizeof(arr) << endl;
	cout << "数组元素所占内存空间字节数为： " << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为： " << sizeof(arr)/sizeof(arr[0]) << endl;

	cout << "数组首地址为：" << arr << endl;	//地址默认是16进制，如果想看十进制那就是 (int)arr

	cout << "数组第一个元素的地址为：" << &arr[0] << endl;		//访问元素地址要加上 取地址运算符 &
	cout << "数组第二个元素的地址为：" << &arr[1] << endl;		//访问元素地址要加上 取地址运算符 &

													//	可以发现，数组地址就是数组第一个元素的地址

	//	arr = 100;	error----数组名是一个常量，不可以进行赋值操作

	system("pause");
	return 0;
}
*/