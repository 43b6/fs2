#include <room.h>
#include <ansi.h>
inherit SHOP;

void create()
{
        seteuid(getuid());
        set("short", "�Ʒ��̵�");
        set("long", @LONG
���ڰ����˸�ʽ�����Ķ������̵���ո�ʽ�����Ķ�����Ҳ����
�����ס��������Ҫ������ˣ�Ҳ������������Ҫ�Ķ����أ������
����������Щ��ô(list)������(buy)�����й���(value)��
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
	"south" : __DIR__"town26",
]));
        set("light_up", 1);
        setup();
}
