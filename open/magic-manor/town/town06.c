inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�򳤵ļ�");
        set ("long", @LONG
�����ŵ�����������ӣ����е�һ�ж��Ե����ɻԻʣ���һ���
��լ������֮����Ȼ�򳤳Ʋ��ϴ󸻴�󣬵���ȴ��һ����˻�Ҫ
���еĶࡣ���㲻��С���򳤵�������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town12",
]));
        set("light_up", 1);
        setup();
}
