// Java program to rearrange array such that
// odd indexed elements are greater.

import java.util.Arrays;

class GFG
{
	// Utitlity function to Swap two variables
	public static void swap(int[] arr, int i, int j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// method to rearrange array such that
	// odd indexed elements are greater.
	public static void Rearrage(int[] arr, int n)
	{
		// Common code for odd and even lengths
		for (int i = 0; i < n - 1; i = i + 2) {
			if (arr[i] > arr[i + 1])
				swap(arr, i, i + 1);
		}

		// If length is odd
		if ((n & 1) > 0) {
			for (int i = n - 1; i > 0; i = i - 2)
				if (arr[i] > arr[i - 1])
					swap(arr, i, i - 1);
		}
	}

	// Driver Method
	public static void main(String[] args)
	{
		int[] arr = { 500,600,4,3,5,2,100};

		System.out.println("Before rearranging");
		System.out.println(Arrays.toString(arr));

		Rearrage(arr, arr.length);	

		System.out.println("After rearranging");
		System.out.println(Arrays.toString(arr));
	}
}
/* This code is contributed by Mr. Somesh Awasthi */

