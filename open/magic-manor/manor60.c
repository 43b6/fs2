#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ľ���");
	set ("long", @LONG
һ��ͨ��ľ��������Ҫ�����ĵ�·��ľ�������ﴫ����ľ֮��Ϣ
�Ѿ�������Ũ��������һ����Ϊ���������ˣ�Ҳ�����ܲ�ס
��ľ����������Ϯ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor59",
	"south"	: __DIR__"manor61",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
