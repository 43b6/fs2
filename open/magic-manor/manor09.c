#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����");
	set ("long", @LONG
����������ȣ��ϱ���ͨ��һ�����ң��ϱߵ��Ǿ����ᣬ���ߵ�
��ת���ᣬ�������߿���ͨ����һ�����ȣ��������Եľ�����ʵ��
ȴ�ֲ�ʧ���š�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor11",
	"south"	: __DIR__"manor14",
	"east"	: __DIR__"manor08",
	"west"	: __DIR__"manor10",
	]));

	set("light_up", 1);

	setup();
}
