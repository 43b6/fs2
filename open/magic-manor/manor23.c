#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIR"������"NOR);
	set ("long", @LONG
����������Χ�����˻���İ�Χ�����ȵĻ�����ʱ���������Ϯ
�������ǹ��������ˣ������ܲ�ס������Ļ�����Ϯ�������в���
�˻��棬������Ѱ�ҵ�һ�����ƻ�ı�����п��������汻�����
��ĸ�������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor22",
	"enter"	: __DIR__"fire/fire01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
