#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "С��");
	set ("long", @LONG
��С������һͷ�߹������ƺ�����������һ���أ�ǰ��ֻʣһС
����·����ǰ����·;�ƺ����м�������գ��ڴ˵ص���Ҳ�������
�о��ˡ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor59",
	"west"	: __DIR__"manor54",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
