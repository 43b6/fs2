inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ���Ķ��ߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к����������Ƕ����ţ��ϱ߽���һ�����ݡ��������������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town24",
        "west"   : __DIR__"town29",
        "south"  : __DIR__"town36",

]));
        setup();
}
