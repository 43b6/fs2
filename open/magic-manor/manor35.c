#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�㳡С��");
	set ("long", @LONG
������㳡������һ��С��������С������ȥ�ƺ�����ô���۵�
���ӣ���ȴ����ͨ�˴С����ǰ�����������ľ�����㲻����
����ǰȥ��һ����
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor36",
	"west"	: __DIR__"manor27",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
