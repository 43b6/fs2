//用来拷贝两个目录的档案使用，目前仅给admin以上使用,以免产生不避要的问题 by bss
inherit F_CLEAN_UP;
void create()
{
        seteuid(getuid());
}
int main(object me, string arg)
{
        string dira,dirb;
        int i;

        if(!arg) return notify_fail("cp_dir 原来目录 目标目录。\n");

        if(sscanf(arg,"%s %s",dira,dirb)!=2)
                return notify_fail("cp_dir 原来目录 目标目录。\n");

        if(file_size(dira)!=-2){
                write("没有"+dira+"这个目录!!!\n");
                return 1;
        }
        i=sizeof(dira);
        printf("dira=%s\n",dira);
        if(dira[i]=='/') dira=dira[0..i-1];
        printf("dira=%s\n",dira);

        if(TEMP_D->cp_dir(dira,dirb))
        {
                write(dira+"->"+dirb+" !!! ok.\n");
                log_file("static/CPDIR",sprintf("%s(%s)拷贝%s到%s在%s。\n",
                        me->query("name"),me->query("id"),dira,dirb,ctime(time())));
        }
        else
        {
                write("拷贝两目录失败了!!\n");
        }
        return 1;
}
int help(object me)
{
        write(@HELP
指令格式 : cp_dir <欲拷贝的目录> <目标目录>

这个指令可以完全拷贝两个目录的档案,包括子目录及子目录里的档案
目标目录若为原本不存在的目录的话不用事先建立, 系统会帮你建立
ex:
我想拷贝/open/ping下面所有的东西到/backup/ping里,我就下这个指令就可以了
cp_dir /open/ping /backup/ping

目前因为仍在测试阶段,所以
1.只给admin以上使用
2.你在用的时候会看到一大堆cp a->b的讯息,目录大的话就会跑好几页
  可能会有些不方便不过也可以趁此看看你到底cp了那些东西
3.若有人使用发现了bug,要赶快跟我说喔!!!
在此特别感谢arthur教我使用递回写这个指令

                                           bss@2000/06/17
HELP
);
    return 1;
}
