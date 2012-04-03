// holdup.c
// By LinaSi-Inverse-( 1999 )
#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object obj, ob;
        string Narrows, Nbow;

        me = this_player();

        if( !arg ) return notify_fail("[�÷�]: holdup <����> with <��>\n");
        if(sscanf(arg, "%s with %s",Narrows,Nbow) !=2 )
        return notify_fail("[�÷�]: holdup <����> with <��>\n");
        if( !obj = present(Narrows, me) )
        return notify_fail("������û�����ֹ��� ...��\n");
        if( me->query("family/family_name") != "������")
        return notify_fail("�㲻�������ɵ��ˡ�\n");

        if( !ob = present(Nbow, me) )
        return notify_fail("������û����ѹ� ...��\n");
        if( obj->query("type")!="is_arrows")
        return notify_fail("�������..�ǲ��Ǽ���\n");
        if( ob->query("skill_type") != "archery")
        return notify_fail("�������..�ǲ��ǹ���\n");

        if( obj->query("class") && obj->query("class") != me->query("class") )
        return notify_fail("��������"+to_chinese(obj->query("class"))+"ְҵר�õļ�����\n");
        if( obj->query("no_class") && me->query("class")
        &&  obj->query("no_class") == me->query("class") )
        return notify_fail("���ְҵ����ʹ������ļ�����\n");

        if( ob->query("arrow/id") != "none"
         && ob->query("arrow/name") != obj->query("name") )
        return notify_fail("�����Ѿ��������ֹ����ˡ�\n");

        message_vision("$NѸ�ٵؽ�"+obj->query("name")+"����"+ob->query("name")+"�ϡ�\n",me);

        if( ob->query("arrow/id")=="none" ) {
        ob->set("bow/attack",ob->query("weapon_prop/damage"));
        ob->set("weapon_prop/damage",
        obj->query("weapon_prop/damage")+ob->query("weapon_prop/damage"));
        }

        ob->set("arrow/id",obj->query("id"));
        ob->set("arrow/path",base_name(obj));
        ob->set("arrow/amount",obj->query_amount()+ob->query("arrow/amount"));
        ob->set("arrow/name",obj->query("name"));

        if( me->query_temp("weapon") == ob )
        me->set_temp("apply/damage",ob->query("weapon_prop/damage"));

        destruct(obj);
        return 1;
}
int help(object me)
{
  write(@HELP
[ָ���ʽ]��holdup <id>

[���ָ��]��unhold, bcheck
HELP
    );
    return 1;
}

