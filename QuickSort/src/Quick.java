public class Quick {

    public static void main(String[] args) {
        int data[] = {66, 0, -71, 34, 5, -10, 500, 975};

        Quick quick = new Quick();
        quick.sort(data, 0, data.length - 1);
        for(int i=0; i<data.length; i++){
            System.out.println(i + "번째 = " + data[i]);
        }
    }

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
