#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�����");
	set ("long", @LONG
һ��ͨ������������Ҫ�����ĵ�·�����������ﴫ������֮��Ϣ
�Ѿ�������Ũ��������һ����Ϊ���������ˣ�Ҳ�����ܲ�ס�Ƿ�
ɳ��ʯ��������Ϯ��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor65",
	"south"	: __DIR__"manor59",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
