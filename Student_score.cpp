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
			s[i].CName = "未定义";
			s[i].score = 0;
		}
	}
	void SetScore() {
		for (size_t i = 0; i < 4; i++)
		{
			string CName;
			int score;
			cout << "请输入课程名称：";
			cin >> CName;
			cout << "请输入课程分数：";
			cin >> score;
			s[i].CName = CName;
			s[i].SetScore(score);
		}
	}
	void ShowScore() {
		for (size_t i = 0; i < 4; i++)
		{
			cout << "课程名为：" << s[i].CName;
			cout << "，分数为：" << s[i].score << endl;
		}
	}
};
int main() {
	Student s1;
	s1.SetScore();
	s1.ShowScore();
	return 0;
}