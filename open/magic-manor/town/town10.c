inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���ı��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к�����������һ����ͨ����լ���ϱ���һ���㳡��������Ȼ
���ű����������Ҳ�ǽ��ű��ߵ���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town04",
        "south"  : __DIR__"town16",
        "east"   : __DIR__"town11",
        "west"   : __DIR__"town09",
]));
        setup();
}
