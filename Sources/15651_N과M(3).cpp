#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> arr;
	
void Answer(int toPick)
{
	if(toPick==0)
	{
		for(auto p:arr)
			cout<<p<<' ';
		cout<<'\n';
		return;
	}
	
	for(int i=1; i<=n; i++)
	{
		arr.push_back(i);
		Answer(toPick-1);
		arr.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>n>>m;
	
	Answer(m);
	
	return 0;
}
