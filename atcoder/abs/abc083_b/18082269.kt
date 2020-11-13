// URL: https://atcoder.jp/contests/abs/submissions/18082269
// Date: Fri, 13 Nov 2020 16:19:55 +0000
// Language: Kotlin (1.3.71)
fun main() {
  val (n, a, b) = readLine()!!.split(" ").map { it.toInt() }
  println((0..n).filter { "$it".map { "$it".toInt() }.sum() in a..b }.sum())
}
