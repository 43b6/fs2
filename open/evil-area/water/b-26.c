inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
��������ש���̵صĵ�·�ϣ����Ը�ʽһ������������������
��һ��ľ�Ƶķ��ݣ�����ԼԼ�У����������һЩ��Թ�Ŀ���������
���Ǵ�ľ���ڴ������ģ�������ͨ�������ڡ�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-24",
"enter":__DIR__"b-47",
]));
	setup();
}

int valid_leave(object me, string dir)
{
	if( dir == "enter" )
	{
		if( !me->query_temp("evil/water/ask-mission-4") )
			return notify_fail("����ͻȻ��������λа�顫

а������ȵ�������˭�����Ҵ��˵ء���Ĳ��ͷ�����\n");

		if( !present("evil-foods",me) )
			return notify_fail("����ͻȻ��������λа�顫

а������ȵ��������˵ȣ����ý��롫\n");

		message_vision("����ͻȻ��������λа�顫

а��������$N������$N���е�ʳ��˵����ԭ�����ͷ���...��ȥ��!!\n",me);
	}
	return 1;
}
 