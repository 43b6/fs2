inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����");
        set ("long", @LONG
�Ʒ�����ϱߵ�·����·�����Ա������˸�ʽ�����ݲݣ�������
�ڴ�·�Ͼ��ø�����죬���ϵľ���Ҳ�Ǻ����У��������㻹��ʱ��
������к����������ǹ㳡���ϱ߽�����լ���������������������
�����������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town22",
        "south"  : __DIR__"town34",
        "east"   : __DIR__"town29",
        "west"   : __DIR__"town27",

]));
        setup();
}