# Codeforces

>简单的一个分类整理
>
>难度从0~5分类

**更新时间：2018年10月22日**


|题号|标题|类型|难度|提示|
|:---:|:---:|:----:|:---:|:---:|
|Educational Codeforces Round 52 (Rated for Div. 2) A|Vasya and Chocolate|水题|0|水题|
|Educational Codeforces Round 52 (Rated for Div. 2) B|Vasya and Isolated Vertices|二分+图的概念|1.5|先枚举所有可能存在顶点个数所需要的边，再用二分找到对于当前边数所能构成的顶点最多的完全图，用总定点减去这个值就是最多会剩下的孤立顶点数目。最少孤立顶点直接让每个边都连上两个顶点然后拿总顶点数一减，小于0就是0，否则就输出减之前的结果|
|Codeforces Round #515 (Div. 3) A|Vova and Train|水题|0.5|找到掩盖的区间，计算当中被遮挡住的信标，最后用总数减去即可|
|Codeforces Round #516 (Div. 2, by Moscow Team Olympiad) A|Make a triangle!|水题|0|水题|
|Codeforces Round #516 (Div. 2, by Moscow Team Olympiad) B|Equations of Mathematical Magic|打表找规律|1|不难发现，规律是2的(n二进制当中的1的个数)次方即为答案|
|Codeforces Round #516 (Div. 2, by Moscow Team Olympiad) C|Oh Those Palindromes|找规律|1|..... 一遍sort就是答案|
|Codeforces Round #516 (Div. 2, by Moscow Team Olympiad) D|Labyrinth|01BFS|1.5|一种只带两个权值的bfs，使用双端队列维护，左右前进的点放在队尾，上下前进的点放在队头|
|Codeforces Round #517 (Div. 2) A|Golden Plate|水题|0.5|水题|
|Codeforces Round #517 (Div. 2) B|Curiosity Has No Limits|暴力|1.5|题目的数据范围不大，暴力枚举所有情况最后把第一个符合的情况输出就好|
|Codeforces Round #517 (Div. 2) C|Cram Time|贪心+暴力|1.5|找到第一个可以包括所有时间的值，之后向下贪心优先第一天取即可|
|Codeforces Round #517 (Div. 2) A|Diverse Substring|思维|0.5|想偏了其实不太好做的，过程很简单|
|Codeforces Round #517 (Div. 2) B|Vasya and Books|模拟|0.5|怎么操作都行|