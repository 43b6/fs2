inherit NPC;
#include <ansi.h>

void create()
{
        set_name("����",({"sea thief","thief"}));
        set("age",28);
        set("gender","����");
        set("attitude","aggressive");
        set("long","
�����У������������µ��ˣ������书��ǿ����������Ƚ���
��������Ͳ�ε�һȺ������ֻ����ɵ����ֹ�����\n");
	set("max_kee",1);
        setup();
}
void die()
{
object me,ob,obj,npc;
int i,j;

        ob = this_object();
        me = ob->query_temp("last_damage_from");

        message_vision(HIW"
\n$N���������ܵ���в����æ�ó��������ڤ������֮�������У�$n����
�ֿ죬����Ԧ��ȡ�����ڤ�����ߡ�\n\n"NOR,ob,me);
	new(__DIR__"tally")->move(me);

	::die();
}
