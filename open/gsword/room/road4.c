#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "ƽ̨");
        set("long", @LONG
   
��ǰ�ǿ�Լ�����ʯ�������������ɽ֮�䣬��������,��������
����һ��Ծ�����߸����£�ʯ���ѵ��˾�ͷ����ǰ��һ���޼ʵ�ʯ�ף�
�����ɽ���Ӧ��Զ�ˡ�

LONG
        );

        set("exits", ([
                "south":__DIR__"road1",
               "up":__DIR__"road6",
        ]) );
        set("outdoors","/open/gsword");
setup();

}
