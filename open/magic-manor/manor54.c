#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "С��");
	set ("long", @LONG
����ͤ�߹�����·��һת������һ�䣬����һ��С������ǰ��С
�����㼣�������ԣ����Ǻ�������������С���ı�����һ����С����
������֪��ͨ���η���������������һ��С����·��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor55",
	"east"	: __DIR__"manor58",
	"west"	: __DIR__"manor51",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
