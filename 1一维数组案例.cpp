
# include <iostream>
using namespace std;

						//	��ϰ1����ֻС������أ�һ�������м�¼����ֻС�����أ��ҳ�����ӡ���ص�С������

//int main() {
//	int num = 4;
//	int arr[5] = { 300,350,200,400,250 };
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > arr[num]) {
//			num = i;
//		}
//	}
//	cout << "���ص������ǣ�" << arr[num] << endl;
//
//	system("pause");
//	return 0;
//}

						//	��ϰ2������Ԫ�����ã�����һ��5��Ԫ�ص����飬����Ԫ������
/*
int main() {

	int arr[5] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int num = 0;
	for (; start < end; start++, end--) {		//Ҳ����ʹ��while���
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