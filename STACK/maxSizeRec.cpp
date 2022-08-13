// Simple and understandable code :-
#include<bits/stdc++.h>
using namespace std;
int R,C;

vector<int> calculateNSL(int arr[],int n){
	vector<int> res;
	stack<int> s;
	
	for(int i=0;i<n;i++){
		while(!s.empty() && arr[i]<=arr[s.top()]){
			s.pop();
		}
		
		if(s.empty()){
			res.push_back(-1);
		}else{
			res.push_back(s.top());
		}
		s.push(i);
	}
	
	return res;
}

vector<int> calculateNSR(int arr[],int n){
	vector<int> res;
	stack<int> s;
	
	for(int i=n-1;i>=0;i--){
		while(!s.empty() && arr[i]<=arr[s.top()]){
			s.pop();
		}
		
		if(s.empty()){
			res.push_back(-1);
		}else{
			res.push_back(s.top());
		}
		s.push(i);
	}
	reverse(res.begin(),res.end());
	return res;
}

int largestArea(int arr[],vector<int> &NSL,vector<int> &NSR){
	int n=NSL.size();
	int maxArea=0;
	int currArea;
	
	for(int i=0;i<n;i++){
		int leftInclusive=(NSL[i]==-1?0:NSL[i]+1);
		int rightInclusive=(NSR[i]==-1?n-1:NSR[i]-1);
		
		currArea=(rightInclusive-leftInclusive+1)*arr[i];
		if(currArea>maxArea){
			maxArea=currArea;
		}
	}
	return maxArea;
}

int maxAreaUnderHistogram(int arr[],int n){
	vector<int> NSL=calculateNSL(arr,n);
	vector<int> NSR=calculateNSR(arr,n);
	
	return largestArea(arr,NSL,NSR);
}

int main(){
	R=C=4;
	int A[][C]={{ 0, 1, 1, 0 },
				 { 1, 1, 1, 1 },
				 { 1, 1, 1, 1 },
				 { 1, 1, 0, 0 }};
				 
	int arr[4];
	int maxArea=0;
	int currArea=0;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(i==0){
				arr[j]=A[i][j];
			}else{
				if(A[i][j]){
					arr[j]+=1;
				}else{
					arr[j]=0;
				}
			}
		}
		currArea=maxAreaUnderHistogram(arr,C);
		if(currArea>maxArea){
			maxArea=currArea;
		}
	}
	
	cout<<"Maximum area : "<<maxArea;
}
