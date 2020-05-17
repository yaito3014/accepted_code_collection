// URL: https://atcoder.jp/contests/abc168/submissions/13357384
// Date: Sun, 17 May 2020 17:11:06 +0000
// Language: C (GCC 9.2.1)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int readidx;
  int writeidx;
  int size;
  int* buf;
  int bufsize;
} FIFO;

void fifo_init(FIFO* fifo, int bufsize) {
  if (fifo == NULL) return;
  fifo->readidx = 0;
  fifo->writeidx = 0;
  fifo->size = 0;
  fifo->buf = (int*)malloc(sizeof(int) * bufsize);
  fifo->bufsize = bufsize;
}

void fifo_destory(FIFO* fifo) {
  if (fifo == NULL) return;
  free(fifo->buf);
}

void fifo_enqueue(FIFO* fifo, int v) {
  if (fifo == NULL) return;
  if (fifo->size == fifo->bufsize) return;
  fifo->buf[fifo->writeidx] = v;
  ++fifo->size;
  if (++fifo->writeidx == fifo->bufsize) fifo->writeidx = 0;
}

void fifo_dequeue(FIFO* fifo, int* v) {
  if (fifo == NULL) return;
  if (fifo->size == 0) return;
  *v = fifo->buf[fifo->readidx];
  --fifo->size;
  if (++fifo->readidx == fifo->bufsize) fifo->readidx = 0;
}

int main() {
  int N, M, i, **graph, *ans, A, B, v, to;
  FIFO fifo;
  bool ok;
  scanf("%d %d", &N, &M);
  graph = (int**)malloc(sizeof(int*) * N);
  for (i = 0; i < N; ++i) {
    graph[i] = (int*)malloc(sizeof(int) * 2);
    graph[i][0] = 0;
    graph[i][1] = 2;
  }
  for (i = 0; i < M; ++i) {
    scanf("%d %d", &A, &B);
    --A, --B;
    if (graph[A][1] - 2 == graph[A][0]) {
      int size = graph[A][1];
      graph[A] = realloc(graph[A], sizeof(int) * size * 2);
      graph[A][1] = size * 2;
    }
    graph[A][graph[A][0] + 2] = B;
    graph[A][0]++;
    if (graph[B][1] - 2 == graph[B][0]) {
      int size = graph[B][1];
      graph[B] = realloc(graph[B], sizeof(int) * size * 2);
      graph[B][1] = size * 2;
    }
    graph[B][graph[B][0] + 2] = A;
    graph[B][0]++;
  }
  ans = (int*)calloc(N, sizeof(int));
  ans[0] = 1;
  fifo_init(&fifo, M);
  fifo_enqueue(&fifo, 0);
  while (fifo.size != 0) {
    fifo_dequeue(&fifo, &v);
    for (i = 0; i < graph[v][0]; ++i) {
      to = graph[v][i + 2];
      if (ans[to] != 0) continue;
      ans[to] = v + 1;
      fifo_enqueue(&fifo, to);
    }
  }
  fifo_destory(&fifo);

  ok = true;
  for (i = 0; i < N; ++i) {
    if (ans[i] != 0) continue;
    ok = false;
    break;
  }
  if (!ok)
    puts("No");
  else {
    puts("Yes");
    for (i = 1; i < N; ++i) printf("%d
", ans[i]);
  }

  free(ans);
  for (i = 0; i < N; ++i) free(graph[i]);
  free(graph);
  return 0;
}
