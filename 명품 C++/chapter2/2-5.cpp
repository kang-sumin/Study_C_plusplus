/*
* <Enter> Ű�� �Էµ� ������ ���ڵ��� �а�,
�Էµ� ���� 'x'�� ������ ȭ�鿡 ����϶�.
*/

#include <iostream>
#include <cstring>	//strlen()�Լ� ����ϱ� ���� ��ó�� ����
using namespace std;

int main() {
	//c-��Ʈ���� ����Ͽ� ���ڿ��� ó����
	char string[100];
	int count = 0;	//'x'�� ������ ������ ����

	cout << "���ڵ��� �Է��϶�(100�� �̸�)" << endl;
	/*������ ���Ե� ���ڿ��� �Է¹����� �����
	* cin ��ü�� getline()����Լ��� �̿��Ͽ���
	* 
	* cin.getline(char buf[], int size, char delimitChar)
	* buf : Ű����κ��� ���� ���ڿ��� ������ �迭
	* size : buf[] �迭�� ũ��
	* delimitChar : ���ڿ� �Է� ���� �����ϴ� ���� ����
	* -->delimitChar �� default ���� '\n' ��
	*/
	cin.getline(string, 100, '\n');

	//���ڿ��� ���� �˻��ϴ� �� ���� 
	//���ڿ� ũ�⸸ŭ �˻��ϴ°��� ȿ������
	//strlen(string) : ���ڿ� ���� ��ȯ �Լ�
	cout <<"���ڿ� ���� : " << strlen(string) << endl;

	for (int i = 0; i < strlen(string); i++) {
		if (string[i] == 'x') {
			count++;
		}
	}
	
	cout << "x�� ������ " << count << endl;

	return 0;
}