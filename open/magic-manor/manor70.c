#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ͥ԰С��");
	set ("long", @LONG
һ��С�͵�ʯ�ţ�ʯ���¿���������������ˮ������ˮ�л�����
�����������е���ˮ�����ţ�ʯ���Ǵ���ʯ���ģ���Ȼ�������µĴ�
�У��Բ���ʯ�ŷ�ʡ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor71",
	"south"	: __DIR__"manor69",
	"east"	: __DIR__"manor74",
	"west"	: __DIR__"manor73",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
