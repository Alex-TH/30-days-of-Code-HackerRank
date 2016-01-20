using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        string line = Console.ReadLine();
        char[] delimiters = new char[] {' ','!','[',',','?','.','\\','_','\'','@','+',']'};
        string[] array = line.Split(delimiters, StringSplitOptions.RemoveEmptyEntries);
        Console.WriteLine(array.Length);
        foreach(string s in array){
            Console.WriteLine(s);
        }
                                    
    }
}
