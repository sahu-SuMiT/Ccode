
#include <iostream>
using namespace std;

int delete_from_array(int array[],int size,int delete_index){
    cout<<array[delete_index];
    for(int i=delete_index;i<size-1;i++){
        array[i]=array[i+1];
    }size--;
    cout<<" deleted from index "<<delete_index<<"\n";
    printf("size %d\n",size);
    return size;
}

int delete_duplicates(int array[],int size){
    
    for(int i=0; i<size ;i++){
        for(int j=i+1; j<size; j++){
            if(array[i]==array[j]){
                delete_from_array(array,size,j--);
                //j--;
                size--;
            }
        }
    }
    return size;
}
void print_array(int array[],int size){
    printf("Your array\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    cout<<"Enter size of array: ";cin>>n;
    int array[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    n=delete_duplicates(array,n);
    print_array(array,n);
    
    
}
