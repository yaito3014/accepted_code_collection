// URL: https://atcoder.jp/contests/abs/submissions/18070722
// Date: Thu, 12 Nov 2020 23:07:16 +0000
// Language: Kotlin (1.3.71)
fun main() {
  fun readInts() = readLine()!!.split(" ").map { it.toInt() }
  val (a, b) = readInts()
  println("${if (a * b % 2 == 1) "Odd" else "Even"}")
}
