// URL: https://atcoder.jp/contests/abc184/submissions/18403351
// Date: Wed, 25 Nov 2020 11:07:23 +0000
// Language: C (GCC 9.2.1)
#include <stdio.h>
#include <stdlib.h>

struct deque {
  int* ptr;
  size_t size;
  size_t capacity;
  size_t left;
  size_t right;
};

void make_deque(struct deque* q) {
  if (q == NULL) return;
  q->ptr = NULL;
  q->size = 0;
  q->capacity = 0;
  q->left = 0;
  q->right = 0;
}

/*
void deque_show(struct deque* q) {
  printf("[que]");
  int sz = q->size, p = q->left;
  for (int i = 0; i < sz; ++i) {
    printf("%2d, ", q->ptr[p]);
    p = p == q->capacity - 1 ? 0 : p + 1;
  }
  puts("");
  printf("[que_]");
  for (int i = 0; i < q->capacity; ++i)
    printf("%2d, ", q->ptr[i]);
  puts("");
}
*/

int deque_extend(struct deque* q) {
  if (q == NULL) return -1;
  size_t cap = q->capacity * 2 + 1;
  int* p = (int*)malloc(sizeof(int) * cap);
  if (p == NULL) return -1;
  
  for (int i = 0; i < q->size; ++i) {
    p[i] = q->ptr[q->left];
    q->left = q->left == q->capacity - 1 ? 0 : q->left + 1;
  }
  q->left = 0;
  q->right = q->left + q->size;
  q->ptr = p;
  q->capacity = cap;
  return 0;
}

int deque_push_back(struct deque* q, int v) {
  if (q == NULL) return -1;
  if (q->size == q->capacity)
    if(deque_extend(q))
      return -1;
  q->ptr[q->right] = v;
  q->right = q->right == q->capacity - 1 ? 0 : q->right + 1;
  q->size++;
  return 0;
}

int deque_push_front(struct deque* q, int v) {
  if (q == NULL) return -1;
  if (q->size == q->capacity)
    if(deque_extend(q))
      return -1;
  q->left = q->left == 0 ? q->capacity - 1 : q->left - 1;
  q->ptr[q->left] = v;
  q->size++;
  return 0;
}

int deque_pop_back(struct deque* q) {
  if (q == NULL || q->size == 0) return -1;
  q->right = q->right == 0 ? q->capacity - 1 : q->right - 1;
  q->size--;
  return q->ptr[q->right];
}

int deque_pop_front(struct deque* q) {
  if (q == NULL || q->size == 0) return -1;
  int res = q->ptr[q->left];
  q->left = q->left == q->capacity - 1 ? 0 : q->left + 1;
  q->size--;
  return res;
}

void free_deque(struct deque* q) {
  if (q == NULL) return;
  make_deque(q);
}

int main(void) {
  struct deque q, t[26];
  int i, h, w, *m, e;
  char* g;
  scanf("%d %d ", &h, &w);
  g = (char*)malloc(sizeof(char) * (h * w + 26));
  if (g == NULL) goto err;
  for (i = 0; i < h; ++i) scanf("%s ", g + i * w);
  for (i = 0; i < 26; ++i) {
    make_deque(t + i);
    g[h * w + i] = '.';
  }
  m = (int*)malloc(sizeof(int) * (h * w + 26));
  if (m == NULL) goto err;
  make_deque(&q);
  for (i = 0; i < h * w; ++i) {
  	m[i] = -1;
    if (g[i] == 'S') {
      m[i] = 0;
      if (deque_push_back(&q, i)) goto err;
    } else if (g[i] == 'G') {
      e = i;
    } else if ('a' <= g[i] && g[i] <= 'z') {
      if (deque_push_back(t + (g[i] - 'a'), i)) goto err;
    }
  }
  for (i = 0; i < 26; ++i)
    m[h * w + i] = -1;
  while (q.size) {
    int c = deque_pop_front(&q);
    
    /*
    for (i = 0; i < h * w; ++i) {
      if (m[i] == -1)printf(" .");
      else printf("%2d", m[i]);
      if (i % w == w - 1) puts("");
    }
    for (i = 0; i < 26; ++i) printf(" %c", 'a' + i);
    puts("");
    for (i = 0; i < 26; ++i)
      m[h*w+i]+1?printf("%2d", m[h*w+i]):printf(" .");
    puts("\n");
    */
    
    if (c >= h * w) {
      struct deque* d = t + c - h * w;
      int sz = d->size, p = d->left;
      for (i = 0; i < sz; ++i) {
        if (m[d->ptr[p]] == -1) {
          m[d->ptr[p]] = m[c] + 1;
          if (deque_push_back(&q, d->ptr[p])) goto err;
        }
        p = p == d->capacity - 1 ? 0 : p + 1;
      }
      continue;
    }
    if (c % w != 0 && m[c - 1] == -1 && g[c - 1] != '#') {
      m[c - 1] = m[c] + 1;
      if (deque_push_back(&q, c - 1)) goto err;
    }
    if (c % w != w - 1 && m[c + 1] == -1 && g[c + 1] != '#') {
      m[c + 1] = m[c] + 1;
      if (deque_push_back(&q, c + 1)) goto err;
    }
    if (c >= w && m[c - w] == -1 && g[c - w] != '#') {
      m[c - w] = m[c] + 1;
      if (deque_push_back(&q, c - w)) goto err;
    }
    if (c + w < h * w && m[c + w] == -1 && g[c + w] != '#') {
      m[c + w] = m[c] + 1;
      if (deque_push_back(&q, c + w)) goto err;
    }
    if (g[c] < 'a' || 'z' < g[c]) continue;
    if (m[h * w + g[c] -'a'] != -1) continue;
    m[h * w + g[c] -'a'] = m[c];
    if (deque_push_front(&q, h * w + g[c] -'a')) goto err;
  }
  
  printf("%d\n", m[e]);
  
  for (i = 0; i < 26; ++i)
    free_deque(t + i);
  free_deque(&q);
  free(m);
  free(g);
  return EXIT_SUCCESS;
  
err:
  for (i = 0; i < 26; ++i)
    free_deque(t + i);
  free_deque(&q);
  free(m);
  free(g);
  return EXIT_FAILURE;
}
