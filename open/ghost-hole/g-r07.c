#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR"�ײķ�");
        set("long",@LONG
���￴��һ������, �о��ϻķ������, ���ϰ���
���������С��һ�Ĺײ�, ��������ħ����������Ϣ
�õ�, ������Ҳ����ѡ��һ���ײ�����Ϣ(g-rest).. 
LONG);
        set("exits",([
        "west":__DIR__"g-r04",
        ]));
        set("no_transmit",1);
        setup();
}
void init ()
{
add_action("do_rest","g-rest");
}

int do_rest()
{
object me=this_player();
int mkee,msen,mgin;
mgin=me->query("max_gin");
mkee=me->query("max_kee");
msen=me->query("max_sen");
if(me->query_temp("ghost-hole/village/take_a_rest"))
return notify_fail("�˵�һ��ֻ����һ�ιײ�,�㻹���ɼ��ΰ�!!\n");
message_vision(HIY"$Nѡ����һ���ײĺ�, �ͼ�æ�����˽�ȥ..\n"NOR,me);
me->set("gin",mgin);
me->set("kee",mkee);
me->set("sen",msen);
me->set_temp("ghost-hole/village/take_a_rest",1);
me->start_busy(1);
call_out("message",1,me);
return 1;
}
int message(object me)
{
me=this_player();
message_vision(HIR"$N����ɫͻȻתΪ����, ������ͻȻ�ظ��������״̬!!\n"NOR,me);
message_vision(HIY"$N�·����ѵ���ʬһ��, �ӹײİ��������˳���...!!\n"NOR,me);
return 1;
}