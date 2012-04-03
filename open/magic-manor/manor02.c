#include <ansi.h>
#include <room.h>

inherit ROOM;

void create ()
{
	set ("short", "����");
	set ("long", @LONG
���ɴ�������������ͨ�����ɽׯ��������߿���ͨ�����ɽ
ׯ�ĸ������ң������ߵķ��������ͨ���������ң���һ����Ϊ��Ҫ
�Ĵ��ã��������Ҳ�Ƚ�ɭ��Щ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor01",
	"south"	: __DIR__"manor72",
	"east"	: __DIR__"manor03",
	"west"	: __DIR__"manor07",
	]));

	set("item_desc", ([ /* sizeof() == 1 */
	"south" : (: look_door,     "south" :),
	]));

	create_door("south",HIR"��Ԫ������"NOR,"north",DOOR_CLOSED);
	set("light_up", 1);

	setup();
	replace_program(ROOM);

}
