#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", YEL"������"NOR);
	set ("long", @LONG
����������Χ��������ǽ�İ�Χ���������Ե���ǽ�ᳯ��������
�����ƶ��������������ذ�Χ��ֱ��������������ŲŰ��ݣ�������
��������ǽ��������Ѱ�ҵ�һ���������ı�����п��ܱ�����ķ�
ɳ��ʯ����û��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor64",
	"enter"	: __DIR__"soil/soil01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
