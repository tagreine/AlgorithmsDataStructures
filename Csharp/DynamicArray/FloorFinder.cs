namespace DynamicArray;

public static class FloorFinder
{
    public static void DisplayBuildInfo(List<bool> building)
    {
        Console.WriteLine($"Number of floors in the building: { building.Count }");
    }
    public static void FindFloor(List<bool> building)
    {
        var sqrtFloor = Math.Sqrt(building.Count);
        var jump = (int) sqrtFloor;
        var start = 0;
        while (true)
        {
            if (building[jump - 1] == false)
            {
                start = jump;
                jump += jump;
            }
            else
            {
                for (var i = start; i < jump - 1; i++)
                {
                    if (!building[i]) continue;
                    Console.WriteLine($"Floor is: {i}");
                    break;
                }
                break;
            }
        }
    }
}