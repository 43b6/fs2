#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIC"��������"NOR);
	set ("long", @LONG
����������Щ��������������ڿ��л������������������ŷ���
��ۼ�����Ⲣ����������������ҫ������������������ĵ���֮
�У����������������֮���þ���ɽׯ���Ե�׳����
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor25",
	"south"	: __DIR__"manor02",
	]));

	set("light_up", 1);

	setup();
}
