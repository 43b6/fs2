inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "������");
        set ("long", @LONG
�Ʒ�������һ���ľ߹�ģ�������꣬�����������ĸ�ʽ������˵
��Ӧ�о��У�ÿ��������Ʒ�ʿ�˵�Ǿ����б�֤������Ҳ���Կ�����
��չʾ������������������������ղصĲ���Ʒ��
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town07",
]));
        set("light_up", 1);
        setup();
}
