#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "��������");
	set ("long", @LONG
�������õ����������ȣ������ǵ���������ؾ�֮·�����ߵķ�
����ͨ��������ᣬ�����������ȿ��Եִ�������ң��߳��������
����һ���ߵ�����������ȴ����ľ��������г���������������ڟ
���������������������ӵĸо���
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor20",
	"east"	: __DIR__"manor02",
	"west"	: __DIR__"manor08",
	]));

	set("light_up", 1);

	setup();
}
