#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ʥ����");
	set ("long", @LONG
��δ��������ſ��Ϸ�����һ���Ҷ���š�ʥ���ᡱ�������
���֣�������δ����ǰ�����������̵�ӡ�󣬶�������ҵ�������
�Ǿ���˽��еġ��跽�桱��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor10",
	]));

	set("objects", ([ /* sizeof() == 2 */
	__DIR__ "npc/linfun-jen" : 1,
	]));

	set("light_up", 1);

	setup();
}
