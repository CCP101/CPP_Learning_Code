//ϡ����󡢹�ϣ�����������ؼ�·����prim��kruskal��dijstra��Floyd��B��������������ϣ�����򡢻�������
//���ص�ʨ�ӣ�2019.11.30
//��Ϊʨ�ӵ�ʱ������������ޣ�����������һЩ��©�ĵط������������ָ������ָ�л��ף��ҿ���˳�� 

//�������ݽṹ
typedef struct LNode{
	int data;
    struct LNode *next;
} *LinkList,LNode;

//���������ݽṹ 
typedef struct BTNode{
	int data;
	struct BTNode* l;//����  
	struct BTNode* r;//�Һ��� 
}BTNode,*BiTree; 

//�����ֵܱ�ʾ���Ķ��������ݽṹ 
typedef struct BTNode{
	int data;
	struct BTNode* firstchild;//��һ������  
	struct BTNode* nextbrother;//��һ���ֵ� 
}BTNode,*BiTree; 

//ϡ�����ת�õ����ݽṹ
typedef struct {//��Ԫ�� 
	int row, col;
	DataType value;
}Triple;
typedef struct{
	Triple data[MAXSIZE + 1]; // һά����
	int rows, cols, nums;  //����������������ͷ���Ԫ�ظ���
}TSMatrix; 

//��ϣ�����ݽṹ
typedef enum Stat{//���ڱ�ʾÿ��Ԫ�ص�״̬
    Empty,     //�գ���ǰû��ֵ
    Valid,     //��Ч����ǰ��ֵ��Ч
    Invalid    //�ǿյ���Ч����ʾ��ǰ��㱻ɾ��
}Stat;
typedef struct HashElem{//��ϣ���Ԫ�ؽṹ��
    KeyType key;
    ValueType value;
    Stat stat;
}HashElem;
typedef struct HashTable{ //��ϣ��
    HashElem data[HashMaxSize];
    size_t size;                 //��ǰ��Ч��Ԫ�ظ���
    HashFunc hashfunc;
}HashTable;

//�����������ݽṹ
typedef struct hfmTreeNode{/*����Huffman Tree�ڵ�*/
    int symbol;/*����symbol��¼�ڵ�洢���ַ�*/
    struct hfmTreeNode *left;/*left, rightָ�������ӽڵ�*/
    struct hfmTreeNode *right;
} hfmTreeNode, *phTreeNode;
//��������ݽṹ�Ķ��巽ʽǧ����𣬾Ͳ������������


// �ؼ�·����prim��kruskal��dijstra��Floyd
//�й�ͼ���㷨���������ڽӱ�Ҳ�������ڽӾ��� ���涼�������ӣ����඼���� 
//Ȼ���ҿ��ؼ�·�����ٽӱ��һ�㣬prim��kruskal�� dijstra��Floyd���ٽӾ����һ�� 

//ʹ���ڽӱ� 
struct ArcNode {//����
    int start;    //��β�Ķ�����±�
    int end;    //��ͷ�Ķ�����±� ���м�ͷ��һ��
    int weight; //����Ȩ��
    ArcNode * next; //��һ����
};
struct Vnode {//ͷ���
    ArcNode * firstarc;  //��һ�������ڸøö���Ļ�
    string data;
};
//ʹ���ٽӾ��� 
typedef struct{
	int fromvex, tovex;//�������������յ�
	int weight;	//�ߵ�Ȩ��
}Edge;
typedef struct{        
    char vertex[VertexNum]; //�����         
    int edges[VertexNum][VertexNum]; //�ڽӾ���,�ɿ����߱�         
    int n,e;//ͼ�е�ǰ�Ķ������ͱ���         
}MGraph; 
int dist[VertexNum][VertexNum],path[VertexNum][VertexNum]={0};//Floyd�����һ�� 


//B��������������ϣ�����򡢻�������
typedef struct node{//B����B��������� 
    int keynum; //���ؼ��ָ���
    KeyType key[MAXM]; //�ؼ������飬key[0]��ʹ�� 
    struct node *parent;//˫�׽��ָ��
    struct node *ptr[MAXM];//���ӽ��ָ������ 
}BTNode,*BTree;

//����ѽṹ��
typedef struct binary_heap
{
    int *binHeap;      //����ָ��̬����ռ��ָ��
    int maxSize;       //�����������󳤶�
    int len;           //����ѳ��ȵı���
}BinaryHeap,*BinHeap;


//ϣ������ 
//�ð��������Ҫ���ݽṹ 


//��������
typedef struct node{//��̬�����ʾ�������¼ 
	int key[d];//��¼�ļ�ֵ ��dΪ�ӹؼ���ĸ�����������λ�����и�ʮ��3���ؼ��룩 
	int next;//�α꣬��ʾ��һ����ֵ��Node����������±� 
}Node;
struct QueueNode{//��������Ķ��� 
	int front;
	int rear;};
QueueNode q[m];//����m���ƣ�����m�ֿ��ܣ�����Ҫ��m������ 

