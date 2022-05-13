int diagonalDifference(List<List<int>> arr)
    {
        int left = 0;
        int right = 0;
        int n = arr.Count-1;
        
        for (int i=0;i<arr.Count;i++)
           {
               left += (arr[i][i]);
               right += (arr[i][n-i]);
           }
            
        return Math.Abs(left-right);

    }

int n = Convert.ToInt32(Console.ReadLine().Trim());
List<List<int>> arr = new List<List<int>>();
for (int i = 0; i < n; i++)
{
    arr.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList());
}
int result = diagonalDifference(arr);

Console.WriteLine(result);