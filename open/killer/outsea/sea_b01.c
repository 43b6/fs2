#include <ansi.h>
inherit ROOM;
void create ()
{
set("short", "�");
set("long",@LONG
ˮѹԽ��Խǿ�ˣ�����̧�����������ʹ�࣬ÿ��һ������Ѫ�ͼ���
�½����������Ѿ���������ȥ�ˣ���ȱ����״̬�£����������˻��ŵĸ�
����
LONG);
set("exits",([
"north":__DIR__"sea_b06",
"south":__DIR__"sea_b10",
"east":__DIR__"sea03",
"west":__DIR__"sea_b02",
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
if(present("water_ninjia",environment(me)))
{
tell_object(me,"�㱻ˮ�̸�����������\n");
return 0;
}
if(me->query_temp("put_water")!=1)
{
call_out("sea01",2,me);
return 0;
}
if(dir=="west"||dir=="east"||dir=="north"||dir=="south")
{
if(!present("dragon_stone",me))
{
message_vision("һ��ǿ���ˮѹ��$N�޷�ǰ����\n",me);
return 0;
}
if(sk<100)
{
me->start_busy(2);
tell_object(me,HIW"һ��ǿ���ѹ��ʹ�����޷�������\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N����ǿ���������ʹ��ˮѹ������ѹ������\n"NOR,me);
me->add("force",-200);
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
	if(present("water ninjia",environment(me)))
	return ;
if(me->query("class")!="killer")
	{
	if(random(10)<4)
	  {
	  object mob;
	  if(random(5)>2)
	  {
	  mob=new(__DIR__"octopus");
 	  message_vision("��$N��ǰͻȻ"+mob->query("name")+"��ס��ȥ·��\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	  {
	  mob=new(__DIR__"w_ninjia");
	  mob->move(environment(me));
	  message_vision("��$N��ǰͻȻ"+mob->query("name")+"��ס��ȥ·��\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	  }
	}
if(random(10)<1)
	{
	  object mob;
	  if(random(5)>2)
	  {
	  mob=new(__DIR__"octopus");
 	  message_vision("��$N��ǰͻȻ"+mob->query("name")+"��ס��ȥ·��\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	  {
	  mob=new(__DIR__"w_ninjia");
	  mob->move(environment(me));
	  message_vision("��$N��ǰͻȻ"+mob->query("name")+"��ס��ȥ·��\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	}
}