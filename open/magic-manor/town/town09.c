inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���ı��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к����������ǵ��ߵ꣬�ϱ���һ���㳡�����߽��ű������
�����Ǳ��ߵ���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town03",
        "south"  : __DIR__"town15",
        "east"   : __DIR__"town10",
        "west"   : __DIR__"town08",
]));
        setup();
}
