#include <ansi.h>
inherit ROOM;
void create ()
{
set("short", "�");
set("long",@LONG
�����ˮѹ��������������һ����ÿ��һ������������Ѫ��ʧ�˴��
��������������һƬ���ţ�����һ�ɲ��䣬Ҳû���κ�Ŀ�����ȷ��λ�ã�
������С����·��
LONG);
set("exits",([
"north":__DIR__"sea02",
"south":__DIR__"sea_a07",
"east":__DIR__"sea_a08",
"west":__DIR__"sea_a10",
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
if(dir=="north"||dir=="west"||dir=="south"||dir=="east")
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
me->add("force",-100);
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

void init()
{
object me;
me=this_player();
	if(present("octopus",environment(me)))
	return ;
if(me->query("class")!="killer")
	{
	if(random(10)<4)
	  {
	  object mob;
	  message_vision("��$N��ǰͻȻһֻ��צ���㵲ס��ȥ·��\n",me);
	  mob=new(__DIR__"octopus");
	  mob->move(environment(me));
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	}
if(random(10)<1)
	{
	  object mob;
	  message_vision("��$N��ǰͻȻһֻ��צ���㵲ס��ȥ·��\n",me);
	  mob=new(__DIR__"octopus");
	  mob->move(environment(me));
	  mob->command("kill "+getuid(me));
	  return ;
	  }
}