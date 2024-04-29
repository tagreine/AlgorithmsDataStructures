
namespace LinearSearch;
class Program
{
    static void Main(string[] args)
    {
        var dataCollection = new[] { 1, 2, 4, 100, 5, 3, 10 };
        var targetSearch = LinearSearchDemo.SearchArray(dataCollection, 2);
        Console.Write($"index of target is: {targetSearch}");
    }
}

