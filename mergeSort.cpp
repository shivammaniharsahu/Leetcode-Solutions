#include<bits/stdc++.h>
using namespace std;

void merge(int *Arr, int start, int mid, int end) {
	int temp[end - start + 1];
	int i = start, j = mid+1, k = 0;
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k++; 
			i++;
		}
		else {
			temp[k] = Arr[j];
			k++; 
			j++;
		}
	}
	while(i <= mid) {
		temp[k] = Arr[i];
		k++; 
		i++;
	}
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}

void mergeSort(int *Arr, int start, int end) {

	if(start < end) {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}
int main()
{
	int arr[100],n,i;
	cout<<"enter the size and elements of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
	cout<<"sorted array:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
