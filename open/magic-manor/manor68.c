#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�黨԰");
	set ("long", @LONG
�黨԰�е�һ��һľ���������ѵ�һ�������Ʒ�֣��������黨
԰�г��������������ÿһ������ľ��������д��̡������ޱȣ���
�����ѵ�һ���Ļ�԰��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor52",
	"south"	: __DIR__"manor53",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
