inherit ROOM;
#include <ansi.h>
void create ()
{
set("short", "���ϲ�");
set("long",@LONG
�����ˮѹ��������������һ����ÿ��һ������������Ѫ��ʧ�˴��
����ǰ��һ������ĵ��Σ��ƺ�����ͨ������ĺ��ף���Զ��ԣ�ˮѹҲ��
�������ı䡣
LONG);
set("exits",([
"east":__DIR__"sea_a03",
"westdown":__DIR__"sea03",
]));
setup();
}
int valid_leave(object me,string dir)
{
int sk;
me=this_player();
sk=me->query_skill("force");
if(present("octopus",environment(me)))
{
tell_object(me,"�㱻��צ���������������\n");
return 0;
}
if(me->query_temp("put_water")!=1)
{
call_out("sea01",2,me);
return 0;
}
if(dir=="east")
{
if(sk<75)
{
me->start_busy(2);
tell_object(me,HIW"һ��ǿ���ѹ��ʹ�����޷�������\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N����ǿ���������ʹ��ˮѹ������ѹ������\n"NOR,me);
return 1;
}
}
if(dir=="westdown")
{
if(!present("dragon_stone",me))
{
message_vision("һ��ǿ���ˮѹ��$N�޷�ǰ����\n",me);
return 0;
}
if(sk<100)
{
me->start_busy(2);
tell_object(me,HIW"һ�ɸ���ǿ���ѹ��ʹ�����޷�������\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N����ǿ���������ʹ��ˮѹ������ѹ������\n"NOR,me);
return 1;
}
}
}
int sea01(object me)
{
me=this_player();
if (me->query_temp("put_water")!=1)
{
tell_object(me,HIB"\n\n���ڶ������������ʧ�ˣ�һ˲��ǿ���ˮѹ���㼷��ˮ�棡\n\n"NOR);
me->move(__DIR__"sea01");
}
else
{
tell_object(me,HIY"����������������ֶ���������\n"NOR);
me->add("force",-100);
COMBAT_D->report_status(me,1);
}
}