// URL: https://atcoder.jp/contests/abs/submissions/18077167
// Date: Fri, 13 Nov 2020 09:56:40 +0000
// Language: Kotlin (1.3.71)
@ExperimentalStdlibApi
fun main() {
  readLine()
  println(readLine()!!
            .split(" ")
            .map { it.toInt() }
            .fold(0, Int::or)
            .countTrailingZeroBits())
}
