// URL: https://atcoder.jp/contests/abc001/submissions/4429895
// Date: Sat, 02 Mar 2019 08:26:46 +0000
// Language: C# (Mono 4.6.2.0)
class Program {
	static void Main(System.String[] args){
		int m = int.Parse(System.Console.ReadLine());
      	int vv = 0;
      	if(m<100)vv=0;
      	else if(m<=5000)vv=m/100;
      	else if(m<=30000)vv=m/1000+50;
      	else if(m<=70000)vv=(m/1000-30)/5+80;
      	else vv = 89;
      	System.Console.WriteLine("{0:D02}",vv);
    }
}
