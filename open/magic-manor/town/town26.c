inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ�����ϱߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к������������Ʒ��̵꣬�ϱ߽���ˮ��̯���������������
���������������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town20",
        "south"  : __DIR__"town32",
        "east"   : __DIR__"town27",
        "west"   : __DIR__"town25",

]));
        setup();
}
