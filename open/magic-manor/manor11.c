#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ת����");
	set ("long", @LONG
��δ��������ſ��Ϸ�����һ���Ҷ���š�ת���ᡱ�������
���֣�������δ����ǰ�����������̵�ӡ�󣬶�������ҵ�������
�Ǿ���˽��еġ�Ī���ӡ���
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor09",
	]));

	set("objects", ([ /* sizeof() == 2 */
	__DIR__ "npc/modau-zi" : 1,
	]));

	set("light_up", 1);

	setup();
}
