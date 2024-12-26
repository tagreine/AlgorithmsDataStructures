namespace BinarySearch;

public class BinarySearchDemo
{
    public static int SearchArray(int[] dataCollection, int target)
    {
        int left = 0;
        int right = dataCollection.Length - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (dataCollection[mid] == target)
                return mid;

            if (dataCollection[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
}