#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
        string key, chinz;
 
        seteuid(geteuid());
    if(wizhood(me)!="(admin)" && wizhood(me)!="(manager)") 
          return notify_fail("ֻ�м��ܹ����߲���ͨ�����ܡ�\n");
         if( !arg || arg=="" )
                return notify_fail("ָ���ʽ��skillpass <���ܴ���> <��������>\n"
);
 
        if(sscanf(arg,"%s %s",key,chinz)==2){
                F_SKILL_D->add_translate(key,chinz);
                write("skill "+key+" pass\n");
                return 1;
        }
 
 
        return 0;
}
 
int help()
{
        write ( @HELP
ָ���ʽ��skillpass <���ܴ���> <��������>
 
HELP
        );
        return 1 ;
}
