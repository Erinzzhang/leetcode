
class Stack{
public:
	void init(){ nums = 0; }; //初始化成員函式
	void push(int data); //宣告存入一個整數的函式
	int pop(); //宣告取出一個整數的函式
	int odd_array[N]; //堆疊的陣列
private:
	int nums; //用來記錄堆疊中的資料數
};
void Stack::push(int data) //在Stack外定義push函數
{
	odd_array[nums++] = data;
}
int Stack::pop() //在Stack外定義pop函數
{
	if (nums != 0){
		return odd_array[--nums];
	}
}

void main(){
	Stack stack1, stack2; //定義2個物件
	stack1.init(); stack2.init(); //初始化
	for (int i=1; i < 2 * N; i=i+2){   
			stack1.push(i);
	} //將N個奇數序列放置stack1
	int s;
	for (int j = 0; j < M; j++){
		int top = stack1.pop();
		if (top % Factor == 0){
			stack2.push(top);
			s++;
		}
	} //從stack1上面拿出M個資料，將Factor的倍數的資料放入stack2
	int k;
	while (k < N-M){
			cout << stack1.pop() << " ";
			k++;
	} //印出stack1
	cout << endl;
	while (s >0){
		cout << stack2.pop() << " ";
		s--;
	} //印出stack2
	system("pause");
}
