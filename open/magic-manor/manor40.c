#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����");
	set ("long", @LONG
�Ӵ����߽������������߳��㣬���ö���������һ���ߵ���
�����õĿ�����Ϣ�ĵط���һֱ��ǰ����ȥ����һ��ͨ���ǿ��Խ���
ɽׯ�����ͨ����
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor39",
	"south"	: __DIR__"manor49",
	"east"	: __DIR__"manor67",
	"west"	: __DIR__"manor66",
	]));

	set("light_up", 1);

	setup();
}
