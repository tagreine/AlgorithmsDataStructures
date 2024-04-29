namespace LinearSearch;

public class LinearSearchDemo
{
    public static int SearchArray(int[] dataCollection, int target)
    {
        for (var index=0; index < dataCollection.Length; index++)
        {
            if (dataCollection[index] == target)
            {
                return index;
            }
        }
        return -1;
    }
}