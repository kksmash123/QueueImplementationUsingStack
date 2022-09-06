// QueueImplementationUsingStack.cpp 
//Queue implementation done using stacks -> two stack needed to implement queue .

#include <iostream>
#include<stack>


using namespace std;


class Queue
{
	stack<int> s1;
	stack<int> s2;
public:
	Queue() {};
	~Queue() {};
	void enqueue(int x);
	int dequeue();


};


void Queue::enqueue(int x)
{
	s1.push(x);
}

int Queue::dequeue()
{
	int x = -1;

	if (s2.empty() )
	{
		if(s1.empty())
		{
			cout << "Queue is empty." << endl;
			return x;
		}
		else
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		
	}
	
	x = s2.top();
	s2.pop();
	return x;
}


int main()
{
	Queue q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	q.enqueue(-1);
	q.enqueue(-2);
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;



}