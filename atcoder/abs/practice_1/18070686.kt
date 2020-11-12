// URL: https://atcoder.jp/contests/abs/submissions/18070686
// Date: Thu, 12 Nov 2020 23:00:37 +0000
// Language: Kotlin (1.3.71)
fun main() {
  fun readInt() = readLine()!!.toInt()
  fun readInts() = readLine()!!.split(" ").map { it.toInt() }
  val a = readInt()
  val (b, c) = readInts()
  val s = readLine()
  println("${a + b + c} $s")
}
