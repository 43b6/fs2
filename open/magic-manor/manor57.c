#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIB"�����̨"NOR);
	set ("long", @LONG
�������������һ�����͵ļ�̨��������Զ�����£���̨���Ե�
���ƣ�ȴ��ʧ���Σ������ѳ�������̦�Ͳ�������������̨�Ͽ���һ
�ֻ�д�С��ͬ�İ��ۣ�ȴ��֪������Ϊ�Ρ�
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor56",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
