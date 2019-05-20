#include <iostream>
#include <vector>
using namespace std;

class Graph{
	vector<int , vector<int> > adjList;
	int sze;
public:
	Graph(int n){
		sze = n+1;
		adjList.resize(sze);
	}

	void addEdge(int src, int dest){
		adjList[src].push_back(dest);
		adjList[dest].push_back(src);
	}

	void printAdjList(){
		for(int vtx = 1; vtx < sze ; ++vtx){
			const vector<int>&  
		}
	}
};

int main()
{
     Graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(4,3);
	g.addEdge(1,4);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(1,3);
	g.printAdjList();
	return 0;
     return 0;
}
