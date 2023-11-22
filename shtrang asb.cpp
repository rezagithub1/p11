#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int tolmabda = 0;
int arzmabda = 0;
int tolmaghsad = 1;
int arzmaghsad = 2;

/*cout<<"tol mabda:";
cin>>tolmabda;
cout<<endl;
cout<<"arzmabda:";
cin>>arzmabda;
cout<<endl;
cout<<"tol maghsad:";
cin>>tolmaghsad;
cout<<endl;
cout<<"arzmaghsad:";
cin>>arzmaghsad;
cout<<endl;*/
pair<int,int> mabda{tolmabda,arzmabda};
pair<int,int> maghsad{tolmaghsad,arzmaghsad};
		
vector<pair<int,int>> visited;
pair<int,int> asb{0,0};

bool is_in_v(pair<int,int> asb)
{
	
	
	for(auto position:visited)
	{
		if(position==asb)
		{
			return true;
		}
	} 	
	return false;
}	

	
bool dfs()
{
	if(asb==maghsad)
	{
		cout<<"residimo residim.."<<endl;
		
		for(auto pos : visited)
		{
			cout<<"<"<<pos.first<<","<<pos.second<<">";
		}
		cout<<endl;
	}
		
	//right_d
	
	asb={mabda.first+1,mabda.second+2};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;
		
	}
	//r_u
	asb={mabda.first-1,mabda.second+2};
	if((asb.first)>=0 && (asb.second)>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{	
			return true;
		}
		mabda=asb;
		
	}
	//l-u
	asb={mabda.first-1,mabda.second-2};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;
	}
	//l-d

	asb={mabda.first+1,mabda.second-2};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;	
	}
	//d-r
	asb={mabda.first+2,mabda.second+1};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;
	}
	//d-l
asb={mabda.first+2,mabda.second-1};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;
	}
	//u-l
asb={mabda.first-2,mabda.second-1};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;
	}
	//u-r
	asb={mabda.first-2,mabda.second+1};
	if(asb.first>=0 && asb.second>=0 && !is_in_v(asb))
	{
		auto visited_new=visited;
		visited_new.push_back(asb);
		bool win=dfs();
		if(win)
		{
			return true;
		}
		mabda=asb;
	}
	return false;
	//finish	
}


	
//vector<vector<pair<int,int>>> map=	
	//{
		//{(0,0),(0,1),(0,2),(0,3),(0,4),(0,5),(0,6),(0,7)},
		//{(1,0),(1,1),(1,2),(1,3),(1,4),(1,5),(1,6),(1,7)},
		//{(2,0),(2,1),(2,2),(2,3),(2,4),(2,5),(2,6),(2,7)},
		//{(3,0),(3,1),(3,2),(3,3),(3,4),(3,5),(3,6),(3,7)},
		//{(4,0),(4,1),(4,2),(4,3),(4,4),(4,5),(4,6),(4,7)},
		//{(5,0),(5,1),(5,2),(5,3),(5,4),(5,5),(5,6),(5,7)},
		//{(6,0),(6,1),(6,2),(6,3),(6,4),(6,5),(6,6),(6,7)},
	//	{(7,0),(7,1),(7,2),(7,3),(7,4),(7,5),(7,6),(7,7)},
	//};
int main(void){
	dfs();
	
	
}

