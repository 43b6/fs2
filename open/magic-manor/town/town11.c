inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���ı��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к������������ڷ��ס�ң��ϱ��Ǵ�����ס�ң������Ƕ���
���������ǽ��ű��ߵ���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town05",
        "south"  : __DIR__"town17",
        "east"   : __DIR__"town12",
        "west"   : __DIR__"town10",
]));
        setup();
}
