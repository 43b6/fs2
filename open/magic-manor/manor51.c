#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����ͤ");
	set ("long", @LONG
�����ε�ͤ�ӣ���Χ�ķ���ͤ��Ϊ���ģ�������ͤ�ӵ���������
����������ͤ�е��ˣ����������о���������Χ�������ڴˣ����Ը�
���������������صĵط����������ڴ˶�ڟ��һ�ᣬ�������������
�澰һ����
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor52",
	"east"	: __DIR__"manor54",
	"west"	: __DIR__"manor36",
	]));

	set("light_up", 1);

	setup();
}
