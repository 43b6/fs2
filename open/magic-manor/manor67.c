#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�᷿�ߵ�");
	set ("long", @LONG
���͵��ߵ����ߵ��԰��ż������ԣ����ߵ������Ͼ���������ͨ
���᷿�ߵ������ߵ��Ĳ�Զ�����ɿ���һ����������ӣ������ǰ���
����ľ�����죬������ǹ�ɫ���㡣
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor41",
	"west"	: __DIR__"manor40",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
