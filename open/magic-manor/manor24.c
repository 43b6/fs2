#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIC"ˮ����"NOR);
	set ("long", @LONG
ˮ��������Χ�����˱����İ�Χ�������ˮ����Ϊ���ı�����
��ʱ���������Ϯ�������ǹ��������ˣ������ܲ�ס������ı���
��Ϯ�������в����˱�����������Ѱ�ҵ�һ������ˮ�ı�����п�
�������汻�������ĸ�������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor21",
	"enter"	: __DIR__"water/water01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
