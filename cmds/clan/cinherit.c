// ��λָ�� cinherit.c by Chan 10/31/98
// �ṩ��������λ��!!!!
#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string str)
{
        object  ob;
        if( !str )
                return notify_fail("ָ���ʽ��cinherit <id>\n");
//�����ĳ�ʽ����bug,����Ҫ��λ�Ķ�����ͬһ�䷿��,���Ҳ���ob,���������µ�����by bss 2000,05,06
        if(!ob=present(str,environment(me)))
                return notify_fail("����û��"+str+"�����!!!\n");
        if( !ob = present(str, environment(me)) || !userp(ob)
         || !living(ob) || ob == me )
                return notify_fail("�벻Ҫ�ҿ���Ц��\n");
        if(ob==me) return notify_fail("��λ���Լ���\n");
       	if( !me->query("clan" ) )
		return notify_fail( "��û�м����κΰ��ɡ�\n" );
        if( me->query("clan/rank") > 1 )
	        return notify_fail("����Ȩʹ�ô�ָ�\n");
        if( ob->query("clan/id") != me->query("clan/id"))
                return notify_fail("����Ҫ��λ���˲��ǹ����ӡ�\n");
        if( ob->query("combat_exp") < 5000000)
                return notify_fail("�Է��Ľ�������������ʤ�δ�ְ��\n");

        ob->set("clan/passwd",me->query("clan/passwd"));
        ob->set("clan/title", me->query("clan/title"));
        ob->set("clan/rank",1);
        CLAN_D->change_clan_master( me->query("clan/id"), ob->query("id") );
        me->delete("clan/passwd");
        me->set("clan/rank", 5);
        me->set("clan/title", "���ɵ���");

	CHANNEL_D->do_channel(me, "ct",
		"\n\t�� -��"HIW+me->query("clan/title")+HIY"��֣�ص���������\n\t"+
		"������֮λ������"+HIC+ob->query("name")+HIY+"��\n"NOR);
        return 1;

}

int help(object me)
{
        write(@HELP

��ʽ˵��:cinherit <ID>

���ǽ�������λ���ø����������,�ǵ�����λ֮��Ҫ�Ѱ�������ת���°���!!!

HELP    );
        return 1;
}

