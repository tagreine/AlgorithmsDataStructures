namespace BinarySearch;
class Program
{
    static void Main(string[] args)
    {
        var dataCollection = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 10};
        var searchTarget = BinarySearchDemo.SearchArray(dataCollection, 12);
        Console.Write(searchTarget);
    }
}

