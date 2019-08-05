// URL: https://atcoder.jp/contests/abc136/submissions/6722247
// Date: Mon, 05 Aug 2019 04:18:08 +0000
// Language: Kotlin (1.0.0)
import java.util.Scanner
fun max(a:Int, b:Int):Int{
  return if(a<b)b else a
}
fun main(args:Array<String>){
  val reader = Scanner(System.`in`);
  var A = reader.nextInt()
  var B = reader.nextInt()
  var C = reader.nextInt()
  var ans = max(0, C-(A-B))
  println("$ans")
}
