#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "�ɽ���ʯ��");
        set("long", @LONG
������ʯ����������һ�ᣬ������Χ�ľ�ɫҲ���˲�ͬ�ı仯����ϸ��
��������ľ�����У���������������͸¶��һ��ׯ�ϵ���Ϣ��ʯ������
һ����Ⱦ����������������        
LONG
        );

        set("exits", ([
                 "down":__DIR__"road6",
                "up":__DIR__"road8"
        ]) );
     set("light_up",1);
     set("outdoors","/open/gsword");
setup();

}
