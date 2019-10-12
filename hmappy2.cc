#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m;
	cin >> n >> m;
	long long int balloons[100000], candies[10000];
	long long int sumBalloons = 0;
	for(long long int i = 0; i < n; i++){
		cin >> balloons[i];
		sumBalloons += balloons[i];
	}
	for (long long int i = 0; i < n; ++i)
	{
		cin >> candies[i];
	}
	long long int ans;
	if(sumBalloons <= m){
		ans = 0;
		cout << ans;
	}
	else{
		multimap< long long int, pair<long long int, long long int> >candiballoon;

		for(long long int i = 0; i < n; i++){
			long long int ans =  balloons[i]*candies[i];
			//candiballoon[ans] = make_pair(candies[i], balloons[i]);
			candiballoon.insert(make_pair(ans, make_pair(candies[i], balloons[i])));
			}
			
		while(m--){
			multimap<long long int, pair<long long int, long long int> > :: iterator it = candiballoon.end();
			it--;
			it->second.second--;
			long long int ans = it->second.first*it->second.second;
			candiballoon.insert(make_pair(ans, make_pair(it->second.first, it->second.second) ));
			multimap<long long int, pair<long long int, long long int> > :: iterator me = candiballoon.find(it->first);
			candiballoon.erase(me);
			// for(map<long long int, pair<long long int, long long int> > :: iterator i = candiballoon.begin(); i != candiballoon.end(); i++){
			// 	cout << i->first << " " << i->second.first << " " << i->second.second << endl;
			// 
			}

			multimap<long long int, pair<long long int, long long int> > :: iterator i = candiballoon.end();
			i--;
			cout << i->first;
}
}

// 5 3
// 3 2 1 4 5
// 3 2 1 4 5