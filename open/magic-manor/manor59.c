#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "��ת���");
	set ("long", @LONG
����������������յĸо�ӿ������ͷ��ǰ����Ŀ����������
ͬ�ĵ�·����ÿ����·����ͷ����ʱ��Ʈ����ͬɫ����⣬����л�
�д���Щ���ɱ������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor64",
	"south"	: __DIR__"manor60",
	"east"	: __DIR__"manor62",
	"west"	: __DIR__"manor58",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
