#include<iostream>
#include<string>
using namespace std;

class Score {
public:
	string CName;
	int score;
	void SetScore(int score) {
		this->score = score;
	}
};

class Student {
public:
	string SName;
	Score s[4];
	Student() {
		for (size_t i = 0; i < 4; i++)
		{
			s[i].CName = "δ����";
			s[i].score = 0;
		}
	}
	void SetScore() {
		for (size_t i = 0; i < 4; i++)
		{
			string CName;
			int score;
			cout << "������γ����ƣ�";
			cin >> CName;
			cout << "������γ̷�����";
			cin >> score;
			s[i].CName = CName;
			s[i].SetScore(score);
		}
	}
	void ShowScore() {
		for (size_t i = 0; i < 4; i++)
		{
			cout << "�γ���Ϊ��" << s[i].CName;
			cout << "������Ϊ��" << s[i].score << endl;
		}
	}
};
int main() {
	Student s1;
	s1.SetScore();
	s1.ShowScore();
	return 0;
}