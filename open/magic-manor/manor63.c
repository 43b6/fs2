#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIY"������"NOR);
	set ("long", @LONG
����������Χ����������Ľ�������ʵĽ�����ʱ����ײ������
�ޱȼ����������������һ���������ˣ������ܲ�ס�������������
Ϯ�������в������������������Ѱ�ҵ�һ�����ƽ�ı�����п�
�������汻��������������������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"west"	: __DIR__"manor62",
	"enter"	: __DIR__"gold/gold01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
