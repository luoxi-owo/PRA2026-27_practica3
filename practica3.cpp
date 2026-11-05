#include <limits>
#include <algorithm>
#include <iostream>

int moneda(int v[],int c){
	int min=std::numeric_limits<int>::max();
	std::vector<int> numeros;
	std::vector<std::vector<int>> m(sizeof(v), std::vector<int>(c+1, 0));
	n=sizeof(v);
	m[0,0]=0;

	for(int j=0;j<=c+1;j++){
		if(j>v[0] && m[0,j-v[0]] != None){
			m[0,j]=1+m[0,j-v[0]];
		}
	}
	for(int i=1;i<=n;i++){
		m[i,0]=0;
		for(int j=1;j<=m+1){
			if(j<v[i] || m[i,j-v[i]==None]){
				m[i,j]=v[i+1];
			}ifelse(m[i-1,j]!=None){
				m[i,j]=min(m[i-1,j],1+m[i,j-1]);
			}else{
				m[i,j]=1+m[i,j-m[i]];
			}
		}
	}	
	return m[n-1,c]	
	}
	
	











}
