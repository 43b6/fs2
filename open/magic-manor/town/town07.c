inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ�������ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к����������������꣬�ϱ��������ţ������Ǳ������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town01",
        "south"  : __DIR__"town13",
        "east"   : __DIR__"town08",
]));
        setup();
}
