// bcheck.c
// By LinaSi-Inverse-( 1999 )

inherit F_CLEAN_UP;
#include <ansi.h>

int main(object me, string arg)
{
    object ob;
    string Nbow;
    if( !arg ) return notify_fail("[ָ���ʽ]��bcheck <��>\n");
    if(sscanf(arg, "%s",Nbow) !=1 )
    return notify_fail("[ָ���ʽ]��bcheck <��>\n");
    if( me->query("family/family_name") != "������")
    return notify_fail("�㲻�������ɵ��ˡ�\n");
    if( !ob = present(Nbow, me) )
    return notify_fail("������û����ѹ� ...��\n");
    if( ob->query("skill_type") != "archery" )
    return notify_fail("������ǲ��ǹ� .....��\n");
    if(ob->query("arrow/id") != "none")
    write("ʣ�������" HIC + ob->query("arrow/amount") + NOR "֧"
    +ob->query("arrow/name")+ "(" +ob->query("arrow/id")+ ")\n" );
    else  write("����"+ob->query("name")+"��û���κι���\n");

return 1;
}
int help (object me)
{
        write(@HELP
[ָ���ʽ]��bcheck <bow>

[���ָ��]��holdup, unhold
HELP
);
        return 1;
}

