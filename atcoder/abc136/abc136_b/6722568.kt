// URL: https://atcoder.jp/contests/abc136/submissions/6722568
// Date: Mon, 05 Aug 2019 04:46:02 +0000
// Language: Kotlin (1.0.0)
import java.util.Scanner
fun main(args:Array<String>){
  val reader = Scanner(System.`in`);
  var N = reader.nextInt()
  var ans = 0
  for(i in 1..N)
    if((i.toString().length)%2==1)
      ++ans
  println("${ans}")
}
