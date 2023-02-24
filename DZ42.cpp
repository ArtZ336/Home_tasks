QueuePriority::~QueuePriority()
{
    delete[]Wait;
    delete[]Pri;
}

QueuePriority::QueuePriority(int m)
{
    MaxQueueLength = m;
    Wait = new int[MaxQueueLength];
    Pri = new int[MaxQueueLength];
    QueueLength = 0;
}

void QueuePriority::Clear()
{ 
    QueueLength = 0;
}

bool QueuePriority::IsEmpty()
{
    return QueueLength == 0;
}

bool QueuePriority::IsFull()
{
    return QueueLength == MaxQueueLength;
}
int QueuePriority::GetCount()
{
    return QueueLength;
}

void QueuePriority::Add(int c, int p)
{
    p = ClientComing(1);
    if (!IsFull())
    {
        Wait[QueueLength] = c;
        Pri[QueueLength] = p;
        QueueLength++;
    }
}
int QueuePriority::Extract()
{  
    if (!IsEmpty())
    {
        int max_pri = Pri[0];
        int pos_max_pri = 0;
        for (int i = 1; i < QueueLength; i++)
        {
            if (max_pri<Pri[i] && i++>i)
            {
                max_pri = Pri[i];
                pos_max_pri = i;
            }
        }
        int temp1 = Wait[pos_max_pri];
        int temp2 = Pri[pos_max_pri];
        for (int i = pos_max_pri; i < QueueLength - 1; i++)
        {
            Wait[i] = Wait[i + 1];
            Pri[i] = Pri[i + 1];
        }
        QueueLength--; 
        return temp1;
    }
    else return -1;
}
void QueuePriority::sort()
{
    int max, temp, temp2;
    for (int i = 0; i < QueueLength - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < QueueLength; j++)
        {
            if (Wait[j] > Wait[max])
                max = j;
        }
        if (max == i)
            continue;
        temp = Pri[i];
        Pri[i] = Pri[max];
        Pri[max] = temp;

        temp2 = Wait[i];
        Wait[i] = Wait[max];
        Wait[max] = temp2;

    }
}
class QueueStat
{
    time_t* InTimeArray;
    time_t* OutTimeArray;
    int MaxQueueLength;            
    int QueueLength;          
public:
    QueueStat(int m);     
    ~QueueStat();       
    void Add(time_t InTime, time_t OutTime);   
    double Extract();                     
    void Clear();          
    bool IsEmpty();             
    bool IsFull();              
    int GetCount();             
};
void main()
{
    time_t CurTime;
    srand(time(0));
    QueuePriority QUP(25);    
    QueueStat Stat(25);
    for (int i = 0; i < 5; i++) 
    {
        QUP.Add(rand() % 5 + 1, 0);
    }
    QUP.sort();                   

    for (int i = 0; i < 5; i++) 
    {
        CurTime = time(NULL);
        Sleep(QUP.Extract() * 1000);  
        Stat.Add(CurTime, time(NULL));
    }
}
