#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "�ߵ�");
	set ("long", @LONG
һ����򵥵����ߵ�������ͨ���������͸��������Χ�ľ���
Ҳ�����ˣ���������СС�ߵ�����΢��Ϣһ��Ҳ��һ��������뷨��
�����ǻ��������Ҳ���Ըо�������Ļ�֮��Ϣ�������
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor22",
	"east"	: __DIR__"manor07",
	"west"	: __DIR__"manor09",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
