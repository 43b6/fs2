inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�ڷ�ļ�");
        set ("long", @LONG
���������˳��۵�һ������֮һ���ڷ�ļң�һ�俴����һ����
լû������һ�䷿�ӣ����еļҾ�Ҳ������ĺ����࣬�ŷŵ�Ҳ��Ȼ
����
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town11",
]));
        set("light_up", 1);
        setup();
}
