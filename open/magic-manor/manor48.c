#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "���᷿");
	set ("long", @LONG
һ��ɾ�������᷿���᷿���������һ���Ľ��������ϰ���һ
յ�͵ƣ����������䷿�䣬�����һ�Ի���һ��С���������Կ�����
��ķ羰��ΪԶ�������ı����ṩ��һ�����ʵ���Ϣ������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor45",
	]));

	set("light_up", 1);

	setup();
}
