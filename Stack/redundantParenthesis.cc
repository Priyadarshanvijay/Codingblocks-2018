#include <iostream>
#include <stack>
#include <vector>
using namespace std;

template <typename T>
void print(stack<T> s)
{
	int len = s.size();
	while(len)
	{
		cout<<s.top()<<endl;
		s.pop();
		len--;
	}
}

vector<int> nearestLargestInteger(int arr[], int len)
{
	vector<int> v;
	stack<int> s;
	for(int i = 0; i<len ; i++)
	{
		cout<<i<<endl;
		// cout<<!s.empty()<<" s empty\n";
		if(s.empty()==true)
		{
			cout<<"cond1"<<endl;
			s.push(arr[i]);
			v.push_back(-1);
			// continue;
		}
		else if((s.top())<arr[i])
		{
			cout<<"cond2\n";
			while((s.empty()==false) || (s.top()<arr[i]) )
			{
				cout<<"s.top == "<<s.top()<<endl;
				s.pop();
			}
			cout<<"cond2 executed\n";
			if(s.empty())
			{
				cout<<"cond2,a\n";
				v.push_back(-1);
				s.push(arr[i]);
				// continue;
			}
			else{
				cout<<"cond2,b"<<endl;
				v.push_back(s.top());
				s.push(arr[i]);
				// continue;
			}
		}
		else if((s.top())>arr[i])
		{
			cout<<"cond3"<<endl;
			v.push_back(s.top());
			s.push(arr[i]);
			// continue;
		}
		cout<<v[i]<<endl;
	}
	return v;
}

int main()
{
	/*stack<int> s;
	stack<char> s1;

	int x;
	while(true)
	{
		cin >> x;
		if( x== -1 )
			break;
		s.push(x);
	}
	print<int>(s);
	char y;
	while(true)
	{
		cin >> y;
		if( y== 'z' )
			break;
		s1.push(y);
	}
	print<char>(s1);*/
	int arr[100];
	for(int i = 0; i < 4 ; i++)
	{
			cin >> arr[i];
	} // seg fault
	vector<int> answer = nearestLargestInteger(arr,4);
	for(int i = 0;i<4;i++)
	{
		cout<<answer[i]<<" ";
	}
	cout<<endl;
	return 0;
}