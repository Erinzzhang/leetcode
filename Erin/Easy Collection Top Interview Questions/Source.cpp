#include<iostream>
#define N 20
#define M 10
#define Factor 3
using namespace std;

class Stack{
public:
	void init(){ nums = 0; }; //��l�Ʀ����禡
	void push(int data); //�ŧi�s�J�@�Ӿ�ƪ��禡
	int pop(); //�ŧi���X�@�Ӿ�ƪ��禡
	int odd_array[N]; //���|���}�C
private:
	int nums; //�ΨӰO�����|������Ƽ�
};
void Stack::push(int data) //�bStack�~�w�qpush���
{
	odd_array[nums++] = data;
}
int Stack::pop() //�bStack�~�w�qpop���
{
	if (nums != 0){
		return odd_array[--nums];
	}
}

void main(){
	Stack stack1, stack2; //�w�q2�Ӫ���
	stack1.init(); stack2.init(); //��l��
	for (int i=1; i < 2 * N; i=i+2){   
			stack1.push(i);
	} //�NN�ө_�ƧǦC��mstack1
	int s;
	for (int j = 0; j < M; j++){
		int top = stack1.pop();
		if (top % Factor == 0){
			stack2.push(top);
			s++;
		}
	} //�qstack1�W�����XM�Ӹ�ơA�NFactor�����ƪ���Ʃ�Jstack2
	int k;
	while (k < N-M){
			cout << stack1.pop() << " ";
			k++;
	} //�L�Xstack1
	cout << endl;
	while (s >0){
		cout << stack2.pop() << " ";
		s--;
	} //�L�Xstack2
	system("pause");
}