#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�����");
	set ("long", @LONG
һ��ͨ������������Ҫ�����ĵ�·�����������ﴫ���Ľ�֮��Ϣ
�Ѿ�������Ũ��������һ����Ϊ���������ˣ�Ҳ�����ܲ�ס
�ǽ�����������Ϯ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor63",
	"west"	: __DIR__"manor59",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
