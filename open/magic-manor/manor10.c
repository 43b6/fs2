#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����");
	set ("long", @LONG
����������ȣ��ϱ���ͨ��һ�����ң��ϱߵ���ʥ���ᣬ���ߵ�
�ǻ����ᣬ�������߿���ͨ����һ�����ȣ��������Եľ�����ʵ��
ȴ�ֲ�ʧ���š�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor12",
	"south"	: __DIR__"manor13",
	"east"	: __DIR__"manor09",
	]));

	set("light_up", 1);

	setup();
}
