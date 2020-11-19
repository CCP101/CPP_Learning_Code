//稀疏矩阵、哈希表、哈夫曼、关键路径、prim、kruskal、dijstra、Floyd、B树操作、堆排序、希尔排序、基数排序
//吃素的狮子，2019.11.30
//因为狮子的时间和能力都有限，所以难免有一些疏漏的地方，如有请务必指出，万分感谢！祝大家考试顺利 

//链表数据结构
typedef struct LNode{
	int data;
    struct LNode *next;
} *LinkList,LNode;

//二叉树数据结构 
typedef struct BTNode{
	int data;
	struct BTNode* l;//左孩子  
	struct BTNode* r;//右孩子 
}BTNode,*BiTree; 

//孩子兄弟表示法的二叉树数据结构 
typedef struct BTNode{
	int data;
	struct BTNode* firstchild;//第一个孩子  
	struct BTNode* nextbrother;//下一个兄弟 
}BTNode,*BiTree; 

//稀疏矩阵转置的数据结构
typedef struct {//三元组 
	int row, col;
	DataType value;
}Triple;
typedef struct{
	Triple data[MAXSIZE + 1]; // 一维数组
	int rows, cols, nums;  //矩阵的行数，列数和非零元素个数
}TSMatrix; 

//哈希表数据结构
typedef enum Stat{//用于表示每个元素的状态
    Empty,     //空，当前没有值
    Valid,     //有效，当前的值有效
    Invalid    //非空但无效，表示当前结点被删除
}Stat;
typedef struct HashElem{//哈希表的元素结构体
    KeyType key;
    ValueType value;
    Stat stat;
}HashElem;
typedef struct HashTable{ //哈希表
    HashElem data[HashMaxSize];
    size_t size;                 //当前有效的元素个数
    HashFunc hashfunc;
}HashTable;

//哈夫曼树数据结构
typedef struct hfmTreeNode{/*定义Huffman Tree节点*/
    int symbol;/*其中symbol记录节点存储的字符*/
    struct hfmTreeNode *left;/*left, right指向左右子节点*/
    struct hfmTreeNode *right;
} hfmTreeNode, *phTreeNode;
//编码的数据结构的定义方式千差万别，就不在这里举例了


// 关键路径、prim、kruskal、dijstra、Floyd
//有关图的算法，可以用邻接表，也可以用邻接矩阵 下面都给出例子，互相都可用 
//然后我看关键路径用临接表多一点，prim、kruskal、 dijstra、Floyd用临接矩阵多一点 

//使用邻接表 
struct ArcNode {//表结点
    int start;    //弧尾的顶点的下标
    int end;    //弧头的顶点的下标 ，有箭头的一方
    int weight; //弧的权重
    ArcNode * next; //下一条弧
};
struct Vnode {//头结点
    ArcNode * firstarc;  //第一条依附在该该顶点的弧
    string data;
};
//使用临接矩阵 
typedef struct{
	int fromvex, tovex;//生成树的起点和终点
	int weight;	//边的权重
}Edge;
typedef struct{        
    char vertex[VertexNum]; //顶点表         
    int edges[VertexNum][VertexNum]; //邻接矩阵,可看做边表         
    int n,e;//图中当前的顶点数和边数         
}MGraph; 
int dist[VertexNum][VertexNum],path[VertexNum][VertexNum]={0};//Floyd多加这一个 


//B树操作、堆排序、希尔排序、基数排序
typedef struct node{//B树和B树结点类型 
    int keynum; //结点关键字个数
    KeyType key[MAXM]; //关键字数组，key[0]不使用 
    struct node *parent;//双亲结点指针
    struct node *ptr[MAXM];//孩子结点指针数组 
}BTNode,*BTree;

//定义堆结构体
typedef struct binary_heap
{
    int *binHeap;      //定义指向动态数组空间的指针
    int maxSize;       //保存数组的最大长度
    int len;           //保存堆长度的变量
}BinaryHeap,*BinHeap;


//希尔排序 
//好吧这个不需要数据结构 


//基数排序
typedef struct node{//静态链表表示待排序记录 
	int key[d];//记录的键值 、d为子关键码的个数（比如三位数就有个十百3个关键码） 
	int next;//游标，表示下一个键值在Node数组里面的下标 
}Node;
struct QueueNode{//用于排序的队列 
	int front;
	int rear;};
QueueNode q[m];//比如m进制，就有m种可能，所以要有m个队列 

