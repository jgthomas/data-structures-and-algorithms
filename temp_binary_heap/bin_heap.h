#ifndef BIN_HEAP_H
#define BIN_HEAP_H

typedef struct BinHeap {
        void *array;
        int len;
}
BinHeap;

BinHeap *heapsort_init(void *data,
                       size_t data_size,
                       size_t elem_size,
                       bool (*compare)(void *x, void *y));

BinHeap *make_heap(void);
BinHeap *heap_init(void *data);
void heap_delete(BinHeap *heap);

void heapify(BinHeap *heap,
             size_t elem_size,
             bool (*compare)(void *x, void *y));

void bubble_up(BinHeap *heap,
               size_t elem_size,
               int child_index,
               bool (*compare)(void *x, void *y));

void sink_down(BinHeap *heap,
               size_t elem_size,
               int index,
               bool (*compare)(void *x, void *y));

void heap_delete_element(BinHeap *heap,
                         void *value,
                         size_t elem_size,
                         bool (*equal)(void *x, void *y),
                         bool (*compare)(void *x, void *y));

void heap_print_array(BinHeap *heap,
                      size_t elem_size,
                      void (*print_ptr)(void *data));

void heap_display(BinHeap *heap,
                  size_t elem_size,
                  void (*print_ptr)(void *data));

void heap_insert(BinHeap *heap,
                 size_t elem_size,
                 void *data,
                 bool (*compare)(void *x, void *y));

void heap_add_data(BinHeap *heap,
                   void *data,
                   size_t data_size,
                   size_t elem_size,
                   bool (*compare)(void *x, void *y));

int left_child_idx(int pos);
int right_child_idx(int pos);
int parent_node(int pos);

#endif
