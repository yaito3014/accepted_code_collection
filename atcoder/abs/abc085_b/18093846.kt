// URL: https://atcoder.jp/contests/abs/submissions/18093846
// Date: Sat, 14 Nov 2020 12:22:52 +0000
// Language: Kotlin (1.3.71)
fun main() {
  val n = readLine()!!.toInt()
  val ans = (1..n).map { readLine()!!.toInt() }.toSet().size
  println(ans)
}
