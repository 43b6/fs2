#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ͥ԰");
	set ("long", @LONG
СС��ͥ԰��������ʽͥ԰�쾰����Сɽ��С�ţ���ˮ������ȥ
�ķ羰����˵���������������һ���˼��ɾ��㡣
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor70",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
