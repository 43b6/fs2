#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIG"ľ����"NOR);
	set ("long", @LONG
ľ��������Χ���������ٵİ�Χ�����ٲ��ϵ�����Χ������������
�����˿��µļ�̲���ʱ�ĳ������������˹�����������û�п��Կ���
����ı��ðȻ�����������ǳ�����Σ����
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor60",
	"enter"	: __DIR__"wood/wood01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
