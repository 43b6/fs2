inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���Ķ��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к�������������ɽ�����ס�ң��ϱ߽��Ŷ������������
���ű��ߵ���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town06",
        "south"  : __DIR__"town18",
        "west"   : __DIR__"town11",
]));
        setup();
}
