#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�ߵ�");
	set ("long", @LONG
һ����򵥵����ߵ�������ͨ��ˮ�����͸��������Χ�ľ���
Ҳ�����ˣ���������СС�ߵ�����΢��Ϣһ��Ҳ��һ��������뷨��
������ˮ�������Ҳ���Ըо��������ˮ���������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor21",
	"east"	: __DIR__"manor05",
	"west"	: __DIR__"manor03",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

  setup();
}
