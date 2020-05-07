#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

 void visit(vector<string>& grid, int x, int y){
    grid[x][y] = '.';
    if(x>0 && grid[x-1][y]=='#')
        visit(grid, x-1, y);
    if(x<grid.size()-1 && grid[x+1][y]=='#')
        visit(grid, x+1, y);
    if (y>0 && grid[x][y-1]=='#')
        visit(grid, x, y-1);
    if (y<grid[0].size()-1 && grid[x][y+1]=='#')
        visit(grid, x, y+1);
}

int numIslands(vector<string>& grid) {
    int res = 0;
    forn(i,grid.size())
        forn(j,grid[i].size())
            if(grid[i][j]=='#'){
                visit(grid, i, j);
                res++;
            }
    return res;
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,m,l,r,white;
	bool f,z1,z2;

	cin>>n>>m;
	vector<string> s(n);
	vector<bool> col(m,false),row(n,false);
	f = z1 = z2 = true;
	forn(i,n)
		cin>>s[i];

	forn(i,n){
		l=-1,r=1001,white=-1;
		forn(j,m){
			if(s[i][j]=='#'){
				if(l==-1)
					l=j;
				r=j;
			}
			else{
				col[j]=true; row[i]=true;
				if(l!=-1 && white==-1)
					white = j;
			}
		}
		if(white!=-1 && white<r)
			f=false;
	}

	forn(i,m){
		l=-1,r=1001,white=-1;
		forn(j,n){
			if(s[j][i]=='#'){
				if(l==-1)
					l=j;
				r=j;
			}
			else if(l!=-1 && white==-1)
				white = j;
		}
		if(white!=-1 && white<r)
			f=false;
	}

	forn(i,m)
		if(!col[i])
			z1=false;

	forn(i,n)
		if(!row[i])
			z2=false;

	if(z1!=z2)
		f=false;

	cout<<(f?numIslands(s):-1)<<endl;

	return 0;
}