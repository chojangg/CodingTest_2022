#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> sv;	// ���ڿ� vector ����
	string name;
	cout << "�̸��� 5�� �Է��ض�" << endl;
	for (int i = 0; i < 5; i++) {		// �� �ٿ� �� ���� 5���� �̸��� �Է¹޴´�
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0);		// vector�� ù ����
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i])		// sv[i]�� ���ڿ��� name���� �������� �ڿ� ����(max �˰���)
			name = sv[i];		// name�� sv[i]�� ���ڿ��� ����
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
}