#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "С��");
	set ("long", @LONG
������㳡������һ��С��������С������ȥ�ƺ�����ô���۵�
��������С���ϣ������ƺ�������ϰ��㳡����ô�����ӣ�ֻ������
����ĸо���С����ǰ�����Կ���һ��ͤ�ӡ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor51",
	"west"	: __DIR__"manor35",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
