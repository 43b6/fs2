inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ�����ϱߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к������������Ʒ�Ǯׯ���ϱ߽��ŵ��̣������Ƕ��������
���������������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town23",
        "south"  : __DIR__"town35",
        "east"   : __DIR__"town30",
        "west"   : __DIR__"town28",

]));
        setup();
}