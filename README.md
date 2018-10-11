# Codeforces

>简单的一个分类整理
>
>难度从0~5分类

**更新时间：2018年10月4日**


|题号|标题|类型|难度|提示|
|:---:|:---:|:----:|:---:|:---:|
|Educational Codeforces Round 52 (Rated for Div. 2) A|Vasya and Chocolate|水题|0|水题|
|Educational Codeforces Round 52 (Rated for Div. 2) B|Vasya and Isolated Vertices|二分+图的概念|1.5|先枚举所有可能存在顶点个数所需要的边，再用二分找到对于当前边数所能构成的顶点最多的完全图，用总定点减去这个值就是最多会剩下的孤立顶点数目。最少孤立顶点直接让每个边都连上两个顶点然后拿总顶点数一减，小于0就是0，否则就输出减之前的结果|