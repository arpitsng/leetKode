#include<iostream>
#include<queue>

using namespace std;

//left = 2*i
//right = 2*i + 1

class heap{ //max heap
public:
    int arr[100];
    int size;

    heap(){
        size = 0;
        arr[0] = -1; //no need but still
    }

    void insert(int data){
        size = size + 1;
        int index = size;
        arr[index] = data;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else return;
        }
    }

    void dlt(){
        if(size == 0){
            cout<<"nothing to delete: "<<endl;
        }

                            //replacing 1st index with last
        arr[1] = arr[size];
        size--;             //lasst node is now not accessible

        //placing root node to its correct posi
        int i = 1;
        while(i < size){
            int leftindex = 2*i;
            int rightindex = 2*i + 1;

            if(leftindex < size && arr[leftindex] > arr[i]){
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }

            else if(rightindex < size && arr[rightindex] > arr[i]){
                swap(arr[i], arr[leftindex]);
                i = rightindex;
            }

            else{ //everything at its correct place
                return;
            }
        }

    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


void heapify(int arr[], int n , int i){ // places the ith index value at itss correct posi so that the nodes below i becomes a heap
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]){ //<= coz of 1 based indexing
        largest = left;
    }

    if(right <= n && arr[largest] < arr[right]){ ///<= coz of 1 based indexing
        largest = right;
    }

    //if we updated the largest ie root
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); //i ko uske child k hisaab se shi kr diya ab agr 
    }
}

void heapSort(int arr[], int n){

    int size = n;

    while(size > 1){ // 1 coz of 1 based indexing 
        //s1: swap  Ist nd last index value
        swap(arr[1], arr[size]);
        size--; //discard last value;

        heapify(arr, size, 1);
    }
}

int main(){

    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(55);
    h.insert(33);
    h.insert(70);

    h.print();

    cout<<"after 2 deletion : "<<endl;
    h.dlt();
    h.dlt();
    h.print();

    int arr[] = {-1, 55, 22,45,11,44,4};
    int n = 7;

    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    cout<<"array after heapify: "<<endl;
    for( int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    heapSort(arr, 7);
    cout<<"array after heap sort: "<<endl;
    for( int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    //stl here
    priority_queue<int> pq; //max heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    // {
        //functions
    //     .top();
    //     .empty();
    //     .push(x);
    //     .pop();
    // }

    return 0;
}