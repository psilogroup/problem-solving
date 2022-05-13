string TimeConversion(string s)
{
    bool pm = false;
    bool am = false;
    string amPmString = s.Substring(8,2);
    string mmss = s.Substring(3,5);
    int hh = int.Parse(s.Substring(0,2));
    pm = (amPmString == "PM");
    am = (amPmString == "AM");
    if (pm) hh += 12;
    if (am && hh >= 12) hh -= 12;
    hh = Math.Abs(hh);
    if (hh == 24) hh = 12;
   string result = $"{hh.ToString().PadLeft(2,'0')}:{mmss}";
   Console.WriteLine(result);
    return result;
}

TimeConversion("12:40:22AM");