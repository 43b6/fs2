inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���Ķ��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к����������Ƕ�������ϱ߽��Ŷ����š�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town12",
        "south"  : __DIR__"town24",

]));
        setup();
}
