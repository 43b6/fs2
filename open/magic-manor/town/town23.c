#include <room.h>
#include <ansi.h>
inherit BANK;

void create()
{
        seteuid(getuid());
        set("short", "�Ʒ�Ǯׯ");
        set("long", @LONG
�����Ʒ�����һ���ľ�������Ǯׯ������Է��ĵ��������Ǯ��
��Ǯ��Ҳ���Խ����ϵ���Ǯ������Ϊ������һ���ܷ���ĵط�������
����һЩ��Ǯ�����⡣
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
	"south" : __DIR__"town29",
]));
        set("light_up", 1);
        setup();
}
