inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","��կ ����");
	set("long","��������կ�Ĵ��ţ��ſڴ�����������������������ϸ�Ѳ飬
����Ĳ����׷��ִ��ŵ�λ�ã����������ɽկ���Ϸ���������ʯ��
����ͷ���Եķǳ������ԣ��·����ھ��������ߣ����������붴����
�ò��ж���֮��...

			"+HIG+"<��կ>\n"NOR);
	set("exits",([
"west":"/open/main/room/s22",
]));
	setup();
}

void init()
{
add_action("do_enter","enter");
}

int do_enter()
{
object me = this_player();

	message_vision("$N�����������ƿ����ź����˽�ȥ��\n",me);
	me->move(__DIR__"r-02");
return 1;
}