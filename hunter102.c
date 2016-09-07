//Rextester.Program.Main is the entry point for your code. Don't change it.
//Compiler version 4.0.30319.17929 for Microsoft (R) .NET Framework 4.5

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace Rextester
{
    public class Program
    {
       public static void Main(string[] args)
        {
           int num=int.Parse(Console.ReadLine());
           int [] a=new int[10];
           int t=num,i=0,first,sum=0,n,sum1=0,j;
           while(t!=0)
           {
               a[i++]=t%10;
               t/=10;
           }
           n=i;
           first=a[n-1];
           
           for(i=n-1;i>=0;i--)
           {
               sum=0;
               for(j=n-1;j>=i;j--)
               {
               sum=sum+a[j];
               
               
           }
               sum1+=sum;
           }
           Console.WriteLine(sum1+"\n");
          
    }
}
}
