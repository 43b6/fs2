inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���ı��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к����������Ƿ��ߵ꣬�ϱ���һ���õ꣬���߽��ű������
���������ߵ���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town02",
        "south"  : __DIR__"town14",
        "east"   : __DIR__"town09",
        "west"   : __DIR__"town07",
]));
        setup();
}
