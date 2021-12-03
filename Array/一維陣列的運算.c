#include <stdio.h>

//將list陣列(有n個元素) 所有元素輸出到螢幕
void arrayPrint(int list[],int n){
    
    int i;
    for(i=0;i<n;i++){
        printf("%d, ",list[i]);
    }
    
}

//將list2陣列複製到list1陣列,兩個陣列都有n個元素
void arrayCopy(int list1[],int list2[],int n){
    int i;
    for(i=0;i<n;i++){
        list1[i]=list2[i];
    }
}
/*
函式: list陣列有n個元素,將value插入位置i
    從倒數第二個資料開始(list[n-2]) , 到插入點為止(list[i]),重複:
        每個元素往下移一個位置
    將新值value寫入插入點list[i]
函示結束    
*/
void arrayInsert(int list[],int n,int value,int i){
    
    int index;
    for(index=n-1;index>i;index--){
        list[index]=list[index-1];
    }
    list[i]=value;
    
}

/*
函式:在list陣列(有n個元素),將位置i的資料刪除
    從刪除點的下一個資料(list[i+1]),到最後一個資料為止(list[n-1]),重複:
        每個元素往上移一個位置
    將填充值0寫入最後一個位置(list[n-1])
函示結束
*/
void arrayDelete(int list[],int n,int i){
    int index;
    for(index=i;index<n-1;index++){
        list[index]=list[index+1];
    }
    list[n-1]=0;
}
int main()
{
    
    int myList[8]={0,1,2,3,4,5,6,7};
    int yourList[8];
    
    //輸出
    arrayPrint(myList,8);
    printf("\n");
    //複製
    arrayCopy(yourList,myList,8);
    arrayPrint(yourList,8);
    printf("\n");
    //插入
    arrayInsert(myList,8,999,4); //myList有8個元素,資料999插入4號位置
    arrayPrint(myList,8);
    printf("\n");
    //刪除
    arrayDelete(myList,8,2);   //myList有8個元素,刪除2號位置的值
    arrayPrint(myList,8);
    printf("\n");
    return 0;
}


