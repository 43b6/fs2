#include <room.h>

inherit ROOM;

void create()
{
        set("short","����");
         set("long","����һ����������������Ƶķ���,Ȼ�������Ѿ�������,�ɵ��ϵĻҳ�����֪��,��������,�������˽�����\n");

        set("exits", ([
          "north":__DIR__"hole6",
        ]) );
        setup();
}
