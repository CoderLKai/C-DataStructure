void initHeap(Heap H,Node data[],int n)
{
    H->data=(HuffmanTree*)malloc(sizeof(HuffmanTree)*(n+1));
    H->capacity=H->size=n;
    for(int i=1;i<=n;i++)
    {
        H->data[i]=(HuffmanTree)malloc(sizeof(HTNode));
        H->data[i]->value=data[i].value;
        H->data[i]->weight=data[i].weight;
        H->data[i]->rchild=H->data[i]->lchild=NULL;
        H->data[i]->depth=1;
    }
    for(int i=n/2;i>=1;i--)
    {
        heapify(H,i);
    }
}
