#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�������");
	set ("long", @LONG
�����г�����һ������������������������ĺ��Ż����Ϣ����
�����������Ϸ�һ���Ҷ����š�������ᡱ�����һ���ׯ��������
�֣������ԵöԴ��������֮���ӣ�͸�����ᴰ�����⿴��ȥ������
������һ���������������Ļ�������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor07",
	]));

	set("light_up", 1);

	setup();
}
