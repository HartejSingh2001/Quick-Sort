class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
       if(low<high)
       {
           int pivot=partition(arr,low,high);
           quickSort(arr,low,pivot-1);
           quickSort(arr,pivot+1,high);
       }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[low];
        int i=low,j=high;
        int temp;
        while(i<j)
        {
            while(arr[i]<=pivot)
            {
                i++;
            }
            while(arr[j]>pivot)
            {
                j--;
            }
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }// while loop finished
        temp=arr[j];
        arr[j]=arr[low];
        arr[low]=temp;
        return j;
    }// function end
};// class end
