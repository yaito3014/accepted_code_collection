// URL: https://codeforces.com/contest/1431/submission/98383924
// Date: Sat, 14 Nov 2020 14:09:16 +0000
// Language: Kotlin
﻿fun main() = (1 .. readLine()!!.toInt()).forEach {
    println(readLine()!!.replace("vv", "w").count { it == 'w' })
  }
