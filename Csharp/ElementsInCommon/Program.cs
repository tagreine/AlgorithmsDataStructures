namespace ElementsInCommon;
class Program
{
    static void Main(string[] args)
    {
        var intArray1 = new int[] {5, 7, 8, 9, 10, 19, 35, 40};
        var intArray2 = new int[] {1, 2, 3, 6, 7, 19, 17, 35, 41, 55};

        var countCommonElements = ElementsInCommonSearch.OptimizedSearch(intArray2, intArray1);
        
        Console.Write(countCommonElements);

    }
}

