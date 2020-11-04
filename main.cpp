#include <iostream>
#include <stdlib.h>
using namespace std;
#define random(x) rand()%(x)


// 顺序表的静态分配——静态数组
//#define MaxSize 10  //定义顺序表最大长度
//typedef struct {
//    int data[MaxSize];    //用静态数组存放数据元素
//    int length; //顺序表当前的长度
//}SqList;
//
//void InitList(SqList &L){
//    for (int i = 0; i < MaxSize; ++i) {
//        L.data[i] = 0;//避免出现脏数据
//    }
//    L.length = 0;
//}
//
//int main() {
//    SqList list; //声明一个顺序表
//    InitList(list); //初始化顺序表
//    for (int i = 0; i < MaxSize; ++i) {
//        cout << list.data[i] << endl;
//    }
//    return 0;
//}

//顺序表的动态分配 ——动态数组
//#define InitSize 10 //初始表长
//typedef struct {
//    int* data; //指向顺序表的第一个数据元素
//    int MaxSize;
//    int length;
//}SeqList;
//
//void InitList(SeqList &L){
//    L.data = (int*)malloc(InitSize*sizeof(int));
//    L.length = 0;
//    L.MaxSize = InitSize;
//}
//
//void IncreaseSize(SeqList &L,int addLength){
//    int *p = L.data;
//    L.data = (int *)malloc((L.MaxSize + addLength)* sizeof(int));
//    for (int i = 0; i < L.length; ++i) {
//        L.data[i] = p[i];
//    }
//    L.MaxSize += addLength;
//    free(p);
//}
//
//int main(){
//    SeqList L;
//    InitList(L);
//    for (int i = 0; i <L.MaxSize ; ++i) {
//        L.data[i] = 2333;
//        L.length++;
//    }
//    for (int j = 0; j <L.length ; ++j) {
//        cout << L.data[j] <<endl;
//    }
//    cout << L.length << endl;
//
//    IncreaseSize(L,5);
//    for (int k = L.length; k <L.MaxSize ; ++k) {
//        L.data[k] = 666;
//        L.length ++;
//    }
//    for (int j = 0; j <L.length ; ++j) {
//        cout << L.data[j] <<endl;
//    }
//    cout << L.length << endl;
//
//    return 0;
//}

//顺序表的插入和删除
//#define MaxSize 10
//typedef struct{
//    int data[MaxSize];
//    int length;
//}SeqList;
//
//void InitList(SeqList &L){
//    for (int i = 0; i < MaxSize; ++i) {
//        L.data[i] = 0;
//        L.length = 0;
//    }
//}
///**
// *
// * @param L 顺序表
// * @param i 插入顺序表的位序
// * @param e 插入元素
// */
//bool ListInsert(SeqList &L, int i, int e){
//    if (i<1 || i>L.length+1){
//        return false;
//    }
//    if(L.length >= MaxSize){
//        return false;
//    }
//
//    for (int j = L.length; j >= i ; j--) {
//        L.data[j] = L.data[j-1];
//    }
//    L.data[i-1] = e;
//    L.length++;
//    return true;
//}
//
//bool ListDelete(SeqList &L,int i,int &e){
//    if(i<1 || i>L.length){
//        return false;
//    }
//    e = L.data[i-1];
//    for (int j = i; j <L.length ; j++) {
//        L.data[j-1] = L.data[j];
//    }
//    L.length--;
//    return true;
//}
//
//int main(){
//    SeqList L;
//    InitList(L);
//    for (int i = 0; i < 5; ++i) {
//        L.data[i] = 2333;
//        L.length++;
//    }
//    //在L的位序3(L.data[2])处插入元素666
//    ListInsert(L,3,666);
//    ListInsert(L,2,555);
////    for (int j = 0; j < L.length; ++j) {
////        cout << L.data[j] << endl;
////    }
//    if(ListInsert(L,5,69)){
//        cout << "插入成功" <<endl;
//    } else{
//        cout << "插入失败" <<endl;
//    };
////    for (int j = 0; j < L.length; ++j) {
////        cout << L.data[j] << endl;
////    }
//
//    int e = -1;
//    if (ListDelete(L,2,e)){
//        cout << "已删除第二个元素，删除元素值为" << e << endl;
//    }else{
//        cout << "删除位序不合法" << endl;
//    }
//    if (ListDelete(L,3,e)){
//        cout << "已删除第二个元素，删除元素值为" << e << endl;
//    }else{
//        cout << "删除位序不合法" << endl;
//    }
//    if (ListDelete(L,3,e)){
//        cout << "已删除第二个元素，删除元素值为" << e << endl;
//    }else{
//        cout << "删除位序不合法" << endl;
//    }
//    for (int j = 0; j < L.length; ++j) {
//        cout << L.data[j] << endl;
//    }
//
//    return 0 ;
//}




//顺序表的查找：按位查找
//静态数组按位查找 7 49 73 58 30 72 44 78 23 9
//#define MaxSize 10
//typedef struct{
//    int data[MaxSize];
//    int length;
//}SeqList;
//
//void InitList(SeqList &L){
//    for (int i = 0; i < MaxSize; ++i) {
//        L.data[i] = 0;
//        L.length = 0;
//    }
//}
//int GetElem(SeqList &L, int i){
//    if (i<1||i>L.length){
//        return -1;
//    }
//    return L.data[i-1];
//}
//
//int main(){
////    srand((int)time(0)); //产生随机数种子
//    SeqList L;
//    InitList(L);
//    for (int i = 0; i <MaxSize ; ++i) {
//        L.data[i] = random(100);
//        L.length ++;
//    }
//    cout << "列表元素如下：" << endl;
//    for (int j = 0; j <L.length; ++j) {
//        cout<< L.data[j] << ' ';
//    }
//    cout << endl;
//
//    cout << "顺序表位序为3的元素为："<< GetElem(L,3) ; // 顺序表按位查找
//    return 0;
//}

//动态数组按位查找
//#define InitSize 10
//typedef struct{
//    int* data;
//    int length;
//    int MaxSize;
//}SeqList;
//
//void InitList(SeqList &L){
//    L.data = (int *)malloc(sizeof(int)*InitSize);
//    L.length = 0;
//    L.MaxSize = InitSize;
//}
//int GetElem(SeqList L, int i){
//    if (i < 1||i>L.length){
//        return -1;
//    }
//    return L.data[i-1];
//}
//
//int main(){
//    SeqList L;
//    InitList(L);
//    for (int i = 0; i < L.MaxSize; ++i) {
//        L.data[i] = random(100);
//        L.length++;
//    }
//    cout << "原始列表：" << endl;
//    for (int j = 0; j < L.length; ++j) {
//        cout << L.data[j] << " ";
//    }
//    cout << endl;
//    cout << "顺序表位序为4的元素为："<< GetElem(L,4)<<endl ; // 顺序表按位查找
//    cout << "顺序表位序为0的元素为："<< GetElem(L,0)<<endl ; // 顺序表按位查找
//    cout << "顺序表位序为11的元素为："<< GetElem(L,11)<<endl ; // 顺序表按位查找
//}


//顺序表的查找：按值查找位序
//#define InitSize 10
//typedef struct{
//    int* data;
//    int length;
//    int MaxSize;
//}SeqList;
//
//void InitList(SeqList &L){
//    L.data = (int*)malloc(sizeof(int)*InitSize);
//    L.length = 0;
//    L.MaxSize = InitSize;
//}
//int LocateElem(SeqList L, int e){
//    for (int i = 0; i < L.length; ++i) {
//        if(L.data[i] == e){
//            return i+1;
//        }
//    }
//    return 0;
//}
//
//int main(){
//    SeqList L;
//    InitList(L);
//    for (int i = 0; i <InitSize ; ++i) {
//        L.data[i] = random(100);
//        L.length++;
//    }
//    cout << "原始列表："<< endl;
//    for (int j = 0; j <L.length ; ++j) {
//        cout << L.data[j] << " ";
//    }
//    cout << endl;
//    int e = 30;
//    if (LocateElem(L,e) != 0){
//        cout <<"元素位序查找成功, 位序为："<< LocateElem(L,e) <<endl;
//    } else{
//        cout << "元素位序查找失败。"<<endl;
//    }
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~链表~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//单链表的定义

typedef struct LNode{
    int data;
    struct LNode* next;
}LNode, *LinkList;

//初始化一个不带头节点的单链表
bool InitListWithNoHead(LinkList &L){
    L = NULL;
    return true;
}
//判断不带头节点的单链表是否为空：
bool IsNoHeadEmpty(LinkList L){
    return (L==NULL);
}

//初始化一个带头节点的单链表
bool InitListWithHead(LinkList &L){
    L = (LNode*)malloc(sizeof(LNode));
    if (L==NULL){
        return false; //内存不足，分配失败
    }
    L->next = NULL;
    return true;
}
//判断带头节点的单链表是否为空：
bool IsHeadEmpty(LinkList L){
    return (L->next==NULL);
}

//2.3.2_1_单链表的插入删除

//按位序插入（带头节点）
/**
 *
 * @param L 带头节点的链表
 * @param i 链表插入节点的位置
 * @param number 新插节点数据
 * @return
 */
bool ListInsertWithHeadByOrder(LinkList &L,int i,int data){
    if(i<1){
        return false;
    }
    LNode* p = L;// p指向当前扫描到的结点
    int j = 0;//注意：p从第零个结点（头节点）开始扫描
    while(p!=NULL && j<i-1){ //循环找到第i-1个结点
        p = p->next;
        j++;
    }
    if(p == NULL){ //i>length不合法
        return false;
    }
    LNode *s = (LNode*)malloc(sizeof(LNode));
    s->data = data;
    s->next = p->next;//顺序不能颠倒
    p->next = s;//顺序不能颠倒
    return true;
}
//按位序插入（不带头节点）
bool ListInsertWithNoHeadByOrder(LinkList L, int i ,int data){
    if (i<1){
        return false;
    }
    if (i==1){
        LNode *s = (LNode*)malloc(sizeof(LNode));
        s->data = data;
        s->next = L;
        L = s;
    }
    LNode *p = L;
    int j = 1;//注意：p从第一个结点（数据结点）开始扫描
    while (p!=NULL && j<i-1){
        p = p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode*)malloc(sizeof(LNode));
    s->data = data;
    s->next = p->next;
    p->next = s;
    return true;
}

//指定结点的后插操作
/**
 *
 * @param p 指定结点p
 * @param data 待插入数据
 * @return
 */
bool InsertNextNode(LNode *p,int data){
    if (p==NULL){ //用于在指定结点的后插操作中判定插入位置是否合法
        return false;
    }
    LNode* s = (LNode*)malloc(sizeof(LNode));
    if(s==NULL){//内存空间分配失败
        return false;
    }
    s->data = data;
    s->next = p ->next;
    p->next = s;
    return true;
}
bool ListInsertWithHeadByOrder_1(LinkList &L, int i,int data){
    if (i<1)
        return false;

    LNode* p = L;
    int j = 0;
    while (p!=NULL && j<i-1){
        p = p->next;
        j++;
    }
    return InsertNextNode(p,data);
}

bool ListInsertWithNoHeadByOrder_1(LinkList L, int i ,int data){
    if (i<1)
        return false;
    if (i==1){
        LNode* s = (LNode*)malloc(sizeof(LNode));
        s->data = data;
        s->next = L;
        L = s->next;
    }
    LNode* p = L;
    int j = 1;
    while(p!=NULL && j<i-1){
        p = p->next;
        j++;
    }
    return InsertNextNode(p,data);
}

//指定结点的前插操作：本质是：后插+交换两个结点内的数据
bool InsertPriorNode(LNode* p, int data){
    if (p==NULL)
        return false;
    LNode* s = (LNode*)malloc(sizeof(LNode));
    s->next = p ->next;
    p->next = s;
    s->data = p->data;
    p->data = data;
    return true;
}
//按位删除（带头结点）
/**
 *
 * @param L 待操作链表
 * @param i 待删除结点位序
 * @param data 待删除结点的数据
 * @return
 */
bool ListDeleteWithHeadNode(LinkList &L,int i, int &data){
    if(i<1)
        return false;
    LNode* p = L;
    int j = 0;
    while (p!=NULL && j<i-1){
        p = p->next;
        j++;
    }
    if(p==NULL)
        return false;
    LNode* q = p->next;
    data = q->data;
    p->next = q->next;
    free(q);
    return true;
}

//按位删除（不带头结点）
bool ListDeleteWithNoHeadNode(LinkList &L, int i,int &data){
    if(i<1)
        return false;
    if (i==1){
        LNode* q =L;
        data = q->data;
        L = q->next;
        free(q);
    }
    LNode *p = L;
    int j = 1;
    while(p!=NULL && j<i-1){
        p = p->next;
        j++;
    }
    if(p == NULL)
        return false;
    LNode* q = p ->next;
    data = q->data;
    p->next = q->next;
    free(q);
    return true;
}
//指定结点的删除（带头结点)
bool DeleteNode_WithHeadNode (LinkList &L,LNode *p){
    if(p==NULL)
        return false;
    if(p->next != NULL){//p结点不是最后一个结点
        LNode *q = p->next;
        p->data = q->data;
        p->next = q->next;
        free(q);
    }
    if(p->next == NULL){//p为最后一个结点，只能遍历前驱结点找到p的上一个结点
        LNode *s = L;
        while(s->next != p){
            s = s->next;
        }
        s->next = NULL;
        free(p);
    }
    return true;
}
//指定结点的删除（不带头结点)
bool DeleteNode_WithNoHeadNode(LinkList &L,LNode *p){
    if (p == NULL)
        return false;
    if (p->next !=NULL){ //p不是最后一个结点
        LNode* q = p->next;
        p->data = q->data;
        p->next = q->next;
        free(q);
    }
    if(p->next == NULL){ //p是最后一个结点
        if (L == p){//p既是第一个也是最后一个结点
            L = NULL;
            free(p);
        }else{
            LNode *s = L;
            while (s->next != p)
                s = s->next;
            s->next = NULL;
            free(p);
        }
    }
    return true;
}

//2.3.2_2 单链表的查找
//按位查找,并返回第i个元素（带头结点）
LNode *GetElem(LinkList L,int i){
    if (i<0)//i = 0时返回空的头结点
        return NULL;
    LNode* p = L;
    int j = 0;
    while(p!=NULL && j<i){
        p = p->next;
        j++;
    }
//    if (p==NULL)
//        return NULL;
    return p; //不需要考虑i值过大，因为i过大的时候也会返回p
}
//按位查找,并返回第i个元素（不带头结点）
LNode* GetElem_WithNoHead(LinkList L,int i){
    if(i<1)
        return NULL;
    LNode* p = L;
    int j = 1;
    while(p!=NULL && j<i){
        p = p->next;
        j++;
    }
    return p;
}

//按值查找(带不带头结点都适用)
LNode* LocateElem(LinkList L, int data){
    LNode* p = L;
    while(p->data!=data && p!=NULL)
        p = p->next;
    return p;
}

//求单链表长度（带头节点）
int LengthWithHead(LinkList L){
    int len = 0;
    LNode* p = L->next;//区别点
    while(p!=NULL){
        len++;
        p = p->next;
    }
    return len;
}
//求单链表长度（不带头节点）
int LengthWithNoHead(LinkList L){
    int len = 0;
    LNode* p = L;//区别点
    while(p!=NULL){
        len++;
        p = p->next;
    }
    return len;
}

//2.3.2_2单链表的创建
//尾插法创建带头结点的单链表_方法一:按位序插入(每次都需要从头遍历，时间复杂度高，不推荐)
//int main(){
//    LinkList L;
//    InitListWithHead(L);
//    int length = 0;
//    while(length<10){
//        ListInsertWithHeadByOrder(L,length+1,random(100)) ;
//        length++;
//    }
//    LNode *p = L->next;
//    while (p!=NULL){
//       cout << p->data << " ";
//       p = p->next;
//    }
//    cout << endl;
//    return 0;
//}

//尾插法创建带头结点的单链表_方法二：在指定结点后插入 :7 49 73 58 30 72 44 78 23 9
//int main(){
//    LinkList L ;
//    InitListWithHead(L);
//    LNode *r = L;
//    int length = 0;
//    while (length < 10){
//        InsertNextNode(r,random(100));
//        r = r->next;
//        length++;
//    }
//    LNode *p = L->next;
//    while (p!=NULL){
//       cout << p->data << " ";
//       p = p->next;
//    }
//    cout << endl;
//    return 0;
//}

//尾插法创建不带头结点的单链表_方法：在指定结点后插入
//int main(){
//    LinkList L;
//    InitListWithNoHead(L);
//    LNode *r = L;
//    int length = 0;
//    while (length < 10){
//        if(length == 0){
//            LNode *s = (LNode*)malloc(sizeof(LNode));
//            s->data = random(100);
//            s->next = NULL;
//            L = s;
//            r = s;
//        }else{
//            InsertNextNode(r,random(100));
//            r = r->next;
//        }
//        length++;
//    }
//    LNode *p = L;
//    while (p!=NULL){
//       cout << p->data << " ";
//       p = p->next;
//    }
//    cout << endl;
//
//    return 0;
//}
 //头插法建立带头结点的单链表：调用前插函数实现版
// int main(){
//    LinkList L;
//    InitListWithHead(L);
//    LNode *p;
//    int length = 0;
//    while(length<10){
//        if(length==0){
//            LNode* s = (LNode*)malloc(sizeof(LNode));
//            s->data = random(100);
//            s->next = NULL;
//            L->next = s;
//            p = s;
//        }else{
//            InsertPriorNode(p,random(100));//p结点不需要移动操作的原因是InsertPriorNode前插函数的实现本质是"后插+交换结点内数据"
//        }
//        length++;
//    }
//    LNode *q = L->next;
//    while (q!=NULL){
//       cout << q->data << " ";
//       q = q->next;
//    }
//    cout << endl;
//    return 0;
//}

//头插法建立带头结点的单链表：直接实现版
//int main(){
//    LinkList L;
//    L = (LNode*)malloc(sizeof(LNode));
//    L->next = NULL;
//
//    for (int i = 0; i <10 ; ++i) {
//        LNode* s = (LNode*)malloc(sizeof(LNode));
//        s ->data = random(100);
//        s->next = L->next;
//        L->next = s;
//    }
//    LNode *q = L->next;
//    while (q!=NULL){
//       cout << q->data << " ";
//       q = q->next;
//    }
//    cout << endl;
//    return 0;
//}
//头插法建立不带头结点的单链表：直接实现版
//int main(){
//    LinkList L;
//    L = NULL;
//
//    for (int i = 0; i <10 ; ++i) {
//        LNode* s = (LNode*)malloc(sizeof(LNode));
//        s ->data = random(100);
//        s->next = L;
//        L = s;
//    }
//    LNode *q = L;
//    while (q!=NULL){
//        cout << q->data << " ";
//        q = q->next;
//    }
//    cout << endl;
//    return 0;
//}

//2.3.3_双链表
//~~~~~
//1111

























































