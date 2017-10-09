public class Ascending_sort {
    public void sort(int[] data, int x, int y){
        int left = x;
        int right = y;
        int pivot = data[(x+y)/2];

        do{
            while(data[left] < pivot){
                left++;
            }
            while(data[right] > pivot){
                right--;
            }
            if(left <= right){
                int temp = data[left];
                data[left] = data[right];
                data[right] = temp;
                left++;
                right--;
            }
        }while (left <= right);

        if(x < right){
            sort(data, x, right);
        }
        if(y > left){
            sort(data, left, y);
        }
    }
}
