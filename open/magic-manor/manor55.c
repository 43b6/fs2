#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�ľ�");
	set ("long", @LONG
���ĵ�С��������΢���Ĺ��ߣ��ľ��Ĺ��߾������Ըߴ�Ĺ�ľ
���ڹ��ˣ��ڴ�΢���Ĺ�â�£������˼����ľ�����Ϣ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor56",
	"south"	: __DIR__"manor54",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
