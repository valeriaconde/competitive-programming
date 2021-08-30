#include <iostream>
#include <vector>
#include <queue>

using namespace std; 

struct Node
{
    Node* parent;

		// COORDINATES X
		int X;

		//COORDINATES Y
		int Y;
};

Node* newNode(int x, int y, Node* parent)
{
    Node* node = new Node;
 
    node->parent = parent;
    node->X = x;
    node->Y = y;
 
    return node;
}

void iniVector(vector<vector<bool>> &visited, int num_filas, int num_columnas){
	for(int i=0; i<num_filas; i++){
		for(int j=0; j<num_columnas; j++){
			visited[i].push_back(false);
		}
	}
}

bool isSafe(vector<vector<int>> &laberinto_inicial, int num_filas, int num_columnas, int x, int y, vector<vector<bool>> &visited )
{
    if (x >= 0 && x < num_filas && y >= 0 && y < num_columnas && laberinto_inicial[x][y] == 1 && !visited[x][y])
        return true;
 
    return false;
}

void print(Node* child, vector<vector<int>> &laberinto_inicial){
	if(child->parent==NULL)
        return;

    print(child->parent, laberinto_inicial);
		laberinto_inicial[child->X][child->Y] = 5;
		//cout<<child->X<<" "<<child->Y<<endl;
}

bool lookup(vector<vector<int>> &laberinto_inicial, int num_filas, int num_columnas){
	queue<Node*> queue;
	Node* root = newNode(0,0,NULL);
	vector<vector<bool>> visited(num_filas);
	iniVector(visited, num_filas, num_columnas);
	 queue.push(root);
	int j=0;
	//cout<< "pushed_root"<<endl;
	while(!queue.empty()){
		Node* first = queue.front();
			 int x = first->X;
			 int y = first->Y;
		visited[x][y] = true;
		queue.pop();
		if(x==num_filas-1 && y==num_columnas-1){
			print(first, laberinto_inicial);
			return true;
			}
		if(isSafe(laberinto_inicial, num_filas, num_columnas, x, y+1, visited)){
			queue.push(newNode(x, y+1, first));
			}

		if(isSafe(laberinto_inicial, num_filas, num_columnas, x+1, y, visited)){
			queue.push(newNode(x+1, y, first));
			}

		if(isSafe(laberinto_inicial, num_filas, num_columnas, x, y-1, visited)){
			queue.push(newNode(x, y-1, first));
			}

		if(isSafe(laberinto_inicial, num_filas, num_columnas, x-1, y, visited)){
			queue.push(newNode(x-1, y, first));
		}
	}
	return false;
}


int main() {
  int num_filas, num_columnas;


	cout<<"Ingresa el numero de filas  y el numero de columnas: "<<endl;
	cin>>num_filas;
	cin>>num_columnas; 

	if (num_filas < 1 || num_columnas < 1) return 0;
		vector<vector<int>> laberinto_inicial(num_filas);


	for(int fila=0; fila<num_filas; fila++){
		for (int columna=0; columna<num_columnas; columna++){
			int numero;
			cin>>numero;
			 if (numero >  1 || numero < 0){
				cout<<"Dato incorrecto"<<endl;
				return 0;
			}
			laberinto_inicial[fila].push_back(numero);

		}
	}
	if(laberinto_inicial[0][0] == 0){
		cout<<"No hay un camino correcto"<<endl;
		return 0;
	}


	if (!lookup(laberinto_inicial,num_filas,num_columnas)){
		cout<<"No hay un camino correcto"<<endl;
		return 0;
	}
	cout<<endl;

	for(int i=0; i<num_filas; i++){
		for(int j=0; j<num_columnas; j++){
			if(i==0&&j==0){
				cout<<"1 ";
			}
			else if(laberinto_inicial[i][j]==5){
				cout<<"1 ";
			}else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}

}
