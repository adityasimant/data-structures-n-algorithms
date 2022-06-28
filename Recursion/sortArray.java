

//write a recursion prog to check if the array is sorted

public class sortArray {
    
    public static boolean sorted(int[] arr, int index){
        if(index == arr.length - 1){
            return true;
        }
        return arr[index] < arr[index + 1] && sorted(arr, index + 1);           
    }
    public static void main(String[] args) {

        int[] arr = {1,2,4,5,6,7,8};
        boolean dec = sorted(arr, 0);
        System.out.println(dec);
        
    }
    
}
