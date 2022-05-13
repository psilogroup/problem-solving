void miniMaxSum(List<int> arr)
 {
        Int64 maxNum = 0;
        Int64 minNum = 0;
        Int64 min = 0;
        Int64 max = 0;
        maxNum = arr.Max();
        minNum = arr.Min();
        min = arr
        .Where(n => n != maxNum)
        .Select(x => (long)x)
        .Sum();

    max = arr
        .Where(n => n != minNum)
        .Select(x => (long)x)
        .Sum();
        
        Console.WriteLine($"{min} {max}");
        
}

List<int> nums = new List<int>{
    256741038, 
    623958417, 
    467905213, 
    714532089, 
    938071625
};

miniMaxSum(nums);