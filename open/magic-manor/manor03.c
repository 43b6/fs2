#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�������");
	set ("long", @LONG
�������õ���������ȣ������ǵ���ˮ�����ؾ�֮·�����ߵķ�
����ͨ������ˮ�󣬾���������ȿ��Եִ��������߳�������
����һ���ߵ����������ȴ����ľ�������г���������������ڟ
���������������������ӵĸо���
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor19",
	"east"	: __DIR__"manor04",
	"west"	: __DIR__"manor02",
	]));

	set("light_up", 1);

	setup();
}
