namespace ElementsInCommon;

public class ElementsInCommonSearch
{
    public static int BruteForceSearch(int[] arr1, int[] arr2)
    {
        var count = 0;
        foreach (var elm1 in arr1)
        {
            foreach (var elm2 in arr2)
            {
                if (elm1 == elm2)
                {
                    count += 1;
                } else if (elm2 > elm1)
                {
                    break;
                }
            }
        }
        
        return count;
    }

    public static int OptimizedSearch(int[] arr1, int[] arr2)
    {
        var count = 0;
        var stepIndex = 0;
        foreach (var elm1 in arr1)
        {
            for (var index = stepIndex; index < arr2.Length; index++)
            {
                if (elm1 == arr2[index])
                {   
                    stepIndex = index + 1;
                    count += 1;
                    break;
                } else if (arr2[index] > elm1)
                {
                    stepIndex = index;
                    break;
                }
            }
        }
        return count;
    }
    
    
}