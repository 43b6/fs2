#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�����");
	set ("long", @LONG
һ��ͨ������������Ҫ�����ĵ�·�����������ﴫ���Ļ�֮��Ϣ
�Ѿ�������Ũ��������һ����Ϊ���������ˣ�Ҳ�����ܲ�ס
�ǻ�����������Ϯ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor23",
	"south"	: __DIR__"manor08",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
