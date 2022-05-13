
List<List<int>> reverseRow(List<List<int>> m,int row)
{
    List<List<int>> mm = new List<List<int>>();
    foreach(var aux in m) 
        mm.Add(new List<int>(aux));

    for (int i=0;i<m[0].Count;i++)
    {
        int l = mm[row].Count-1;
        mm[row][i] = m[row][l-i];
    }
    return mm;
}

List<List<int>> reverseCol(List<List<int>> m,int col)
{
    List<List<int>> mm = new List<List<int>>();
    foreach(var aux in m) 
        mm.Add(new List<int>(aux));

    int l = m.Count-1;
    for (int i=0;i<m.Count;i++)
    {
        mm[i][col] = m[l-i][col];
    }
    return mm;
}
void printMatrix(List<List<int>> m)
{
    foreach(var mm in m){
        Console.WriteLine(string.Join(" ",mm));
    }
}

List<List<int>> inputMatrix = new List<List<int>>()
{
    new List<int>() {1,2,3,4},
    new List<int>() {0,0,0,0},
    new List<int>() {0,0,0,0},
    new List<int>() {0,0,0,0}
    
};


for (int i=0;i<3;i++)
    inputMatrix = reverseRow(inputMatrix,i);


printMatrix(inputMatrix);