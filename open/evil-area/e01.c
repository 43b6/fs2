#include <ansi.h>
inherit ROOM;

void create()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",@LONG
һ���޴��ˮ女���������ǰ, ˮ������������, ��������, ��
��ν֮�˼����; ����ˮ��, ��������, ����Թ�����һ��ˮ�Ƶ�ǿ
��, ���Ӳ��Ҫ����ˮ��ڵ���, ���п��ܻᱻǿ���ˮѹ������ͨ
���⡣
LONG);
	set("exits",([
"north":__DIR__"e00",
"south":__DIR__"e02",
]));
	set("no_transmit",1);
	setup();
}

int valid_leave(object me,string dir)
{
	me=this_player();
	if(dir=="south")
	{
		if(!me->query_temp("evil/w_enter"))
		{
			message_vision(HIR"
$N����ǿ��ͨ��ˮ奣������������һ����

"HIY"$N��ǿ���ˮѹ������ͨ���⣡\n"NOR,me);
		me->move(__DIR__"e00");
		return notify_fail("\n�����صĵ����ڵ��ϣ��ĵװ��Ժ�ʹ...\n");
		}
	message_vision(HIC"$Nȫ��������һ��ǳ��ɫ������������������ˮ��ڡ�\n"NOR,me);
	return 1;
	}
return 1;
}