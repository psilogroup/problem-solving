List<int> countingSort(List<int> arr,int size)
{
   List<int> fq = new List<int>();

   for(int i=0;i<size;i++) {
       fq.Add(0);
   }

   for(int i =0;i<arr.Count;i++) fq[arr[i]]++;

   return fq;
}

int n = Convert.ToInt32(Console.ReadLine().Trim());
List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

List<int> result = countingSort(arr,100);

Console.WriteLine(String.Join(" ",result));