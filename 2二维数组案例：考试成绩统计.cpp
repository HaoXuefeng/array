
# include <iostream>
using namespace std;
# include <string>

						//	���Գɼ����������ͬѧ ���ſ�Ŀ ���ܳɼ�
//	����Ӣ��������100��100��100�� ���ģ�90��50��100�� ���壺60��70��80

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
	string name[3] = { "����","����","����" };
	for (int i = 0; i < 3; i++) {
		cout << name[i] << "���ܷ��ǣ�" << sum[i] << endl;
	}


	system("pause");
	return 0;
}
