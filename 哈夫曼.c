void heapify(Heap H,int i)
{
    if(H==NULL)
        return;
    while(i*2<=H->size)
    {
        int min=i*2;
        if(i*2+1<=H->size)
        {
            if(*(H->data[right(i)]) < *(H->data[min]))
                min=i*2+1;
        }
        if(*(H->data[i]) < *(H->data[min]))
            break;
        else
        {
            swap(H->data[i],H->data[min]);
            i=min;
        }
    }
}
