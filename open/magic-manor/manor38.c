#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ɽׯ�ߵ�");
	set ("long", @LONG
ɽׯ�ߵ���������һ������������������˵�·�����࣬���Ļ�
ɢ�����������㣬�е�������΢�紵����ʹ�����ߵ��ϲ����ŵ�����
�㣬���˾���Ϊ֮һ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor37",
	"south"	: __DIR__"manor39",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
