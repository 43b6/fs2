inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�����ļ�");
        set ("long", @LONG
���������˳��۵�һ������֮һ�������ļң����ӵĵĲ�������
��������࣬�����ϵ����ζ��Ǿ�����ʦ����̵ģ��Գ���ҵĺ���
�����ɣ���һ����Ǯ�˵��˼ҡ�
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town11",
]));
        set("light_up", 1);
        setup();
}
