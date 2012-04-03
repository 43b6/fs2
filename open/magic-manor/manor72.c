#include <ansi.h>
#include <room.h>

inherit ROOM;

void create ()
{
	set ("short", "ׯԺ����");
	set ("long", @LONG
�������ıؾ�֮·��һ������ĺ�ɫ����������ǰ�����ȴ�����
��ǧ�꺮����������ɣ���ƽʱ�ǿ����������ɿ����ģ������е���
�����ӵ����Ǻ����ƿ������ŵġ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor02",
	"south"	: __DIR__"manor71",
	]));

	create_door("north",HIR"��Ԫ������"NOR,"south",DOOR_CLOSED);
	set("light_up", 1);

	setup();
	replace_program(ROOM);

}
