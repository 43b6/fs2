#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "ˮ���");
	set ("long", @LONG
һ��ͨ��ˮ��������Ҫ�����ĵ�·��ˮ�������ﴫ����ˮ֮��Ϣ
�Ѿ�������Ũ��������һ����Ϊ���������ˣ�Ҳ�����ܲ�ס
��ˮ����������Ϯ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor24",
	"south"	: __DIR__"manor04",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
