#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ɽׯ�ߵ�");
	set ("long", @LONG
����ǰȥ����ɽׯ���ڲ��ˣ�ɽׯ���ߵ��������ǲ����������
���������Ļ�ɢ�����������㣬�е�������΢�紵����ʹ�����ߵ���
�����ŵ������㣬���˾���Ϊ֮һ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor72",
	"south"	: __DIR__"manor70",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
