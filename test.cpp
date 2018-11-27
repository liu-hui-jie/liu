#include <iostream>
#include <stdio.h>
using namespace std;
int  main()
{
    printf("name is wangzhenpeng!!!\n");
    return 0;
t push

        在使用git commit命令将修改从暂存区提交到本地版本库后，只剩下最后一步将本地版本库的分支推送到远程服务器上对应的分支了，如果不清楚版本库的构成，可以查看我的另一篇，git 仓库的基本结构。

    git push的一般形式为 git push <远程主机名> <本地分支名>  <远程分支名> ，例如 git push origin master：refs/for/master ，即是将本地的master分支推送到远程主机origin上的对应master分支， origin 是远程主机名，

    第一个master是本地分支名，第二个master是远程分支名。

}
