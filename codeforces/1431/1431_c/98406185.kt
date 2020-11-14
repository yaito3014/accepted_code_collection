// URL: https://codeforces.com/contest/1431/submission/98406185
// Date: Sat, 14 Nov 2020 23:29:04 +0000
// Language: Kotlin
﻿fun main() {
  val t = readLine()!!.toInt()
  (1..t).forEach {
    val (n, k) = readLine()!!.split(" ").map { it.toInt() }
    val a = readLine()!!.split(" ").map { it.toInt() }
    val ans = (1 .. n / k).map {
      a.slice(n - it * k .. n - it * k + it - 1).sum()
    }.max()
    println(ans)
  }
}
