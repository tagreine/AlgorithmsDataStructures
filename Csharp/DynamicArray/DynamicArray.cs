
namespace DynamicArray;

public class DynamicArray<T>
{
    private T[] array;
    private int count = 0;
    public DynamicArray(int initialLength)
    {
        array = new T[initialLength];
    }

    public void Add(T val)
    {
        if (count > array.Length - 1)
        {
            array = DoubleArray(array);
        }
        array[count] = val;
        count++;
    }

    private T[] DoubleArray(T[] arr)
    {
        var copy = new T[2 * arr.Length];
        for (var index = 0; index < arr.Length; index++)
        {
            copy[index] = arr[index];
        }

        return copy;
    }
    
    public void PrintArray()
    {
        foreach (var item in array)
        {
            Console.WriteLine(item);
        }
    }
    
}
