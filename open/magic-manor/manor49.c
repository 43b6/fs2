#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ɽׯ����");
	set ("long", @LONG
ׯ�Ϻ�ΰ�Ĵ��ţ��������������ǰ�����ŵ���������һ���ƽ
���ˣ���Ȼ����ֻ���͹�״�����ˣ��������ر��������ɽׯ���ˣ�
���ŵ������ǻὫ���������ġ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor40",
	"south"	: __DIR__"manor50",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
