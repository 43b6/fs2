inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ�������ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к�������������������ϱ߽��ŷ���̯���������������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town19",
        "south"  : __DIR__"town31",
        "east"   : __DIR__"town26",

]));
        setup();
}
