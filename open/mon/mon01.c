inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "�ƾ�é��");
        set ("long", @LONG 
����һ�������ס��é�ݣ���ͷ�İ���ֻʣһ�Ų��Ƶ����Ӻͼ�
��С���ӡ�����������˻�������Ϣһ�£��ɴ���ԶԶ��ȥ���Կ���
һƬѩ�׵ĳ���ɽ��Ҳ��ʧΪһ�����ͷ羰�ĺõط���
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "out" : __DIR__"mon02",
        "east" : __DIR__"mon60",
]));
        setup();
}

