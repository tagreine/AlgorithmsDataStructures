

namespace DynamicArray;

internal static class Program
{
    private static void Main(string[] args)
    {
        /*
        var testCase = new List<bool>()
        {
            false,
            false,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true,
            true
        };
        
        FloorFinder.DisplayBuildInfo(testCase);
        FloorFinder.FindFloor(testCase);
        */

        var solution = new Solution1();
    }
}

public class Solution1
{
    public int MaxArea(int[] height) {
        int endPoint = height.Length - 1;
        int startPoint = 0;
        int endPointHeight = height[endPoint];
        int startPointHeight = height[startPoint];
        int w;
        int h;
        int res = 0;
        int tmp;
        if (endPoint == 1)
        {
            return 0;
        } 
        else if (endPoint == 2)
        {
            return endPointHeight > startPointHeight ? startPointHeight : endPointHeight;
        }
        else 
        {
            while (startPoint != endPoint)
            {
                w = endPoint - startPoint;
                h = endPointHeight > startPointHeight ? startPointHeight : endPointHeight;
                tmp = w * h;
                if (res < tmp)
                {
                    res = tmp;
                }
                
                
                if (endPointHeight > startPointHeight){
                    startPoint++;
                }
                else
                {
                    endPoint--;
                }
                endPointHeight = height[endPoint];
                startPointHeight = height[startPoint];
            }
            return res;
        }

    }
}

