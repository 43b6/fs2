#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����");
	set ("long", @LONG
���������ȣ��ϱ���ͨ��һ������ϱߵ�������󣬱��ߵ�
��������������߿���ͨ����һ�����ȣ��������Եľ�����ʵ��
ȴ�ֲ�ʧ���š�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor18",
	"south"	: __DIR__"manor15",
	"east"	: __DIR__"manor06",
	"west"	: __DIR__"manor04",
	]));

	set("light_up", 1);

	setup();
}
