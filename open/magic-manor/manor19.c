#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "����ˮ��");
	set ("long", @LONG
ˮ���г�����һ������������������������ĺ���ˮ����Ϣ����
ˮ���������Ϸ�һ���Ҷ����š�����ˮ�󡱣����һ���ׯ��������
�֣������ԵöԴ˸������֮���ӣ�͸��ˮ�󴰻����⿴��ȥ������
������һ������������ˮ����ˮ������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor03",
	]));

	set("light_up", 1);

	setup();
}
