public class Quick {

    public static void main(String[] args) {
        int data[] = {66, 0, -71, 34, 5, -10, 500, 975};

        Descending_sort descendingSort = new Descending_sort();
        descendingSort.sort(data, 0, data.length - 1);
        System.out.println("내림차순");
        for(int i=0; i<data.length; i++){
            System.out.print(i + " = " + data[i] + " | ");
        }
        System.out.println();

        Ascending_sort ascendingSort = new Ascending_sort();
        ascendingSort.sort(data, 0, data.length - 1);
        System.out.println("오름차순");
        for(int i=0; i<data.length; i++){
            System.out.print(i + " = " + data[i] + " | ");
        }
    }
}
