#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","��Ѩ�ڶ���,���ھ��󶼲��,������û�������ĵ�ͼ����֮ǰ,��ò�Ҫ�󴳴˴�,�������ʯ��(wall)�ƺ��е�Ź֡�\n");

        set("exits", ([
          "west":__DIR__"hole17",
          "east":__DIR__"hole18",
          "south":__DIR__"hole16",
        ]) );
        setup();
}
void init()
{
        add_action("do_look","l");
            add_action("do_look","look");
            add_action("do_key","push");
}
int do_look(string str)
{
         if(str!="wall") return 0;
         tell_object(this_player(),"�㷢��ǽ����һ������(key)��\n");
          return 1;
}
int do_key(string str)
{
         if(str!="key") return 0;
        tell_object(this_player(),"�����������һ�������ƶ���ʯ�ڡ�\n");
          tell_object(this_player(),"����������ҡ�\n");
this_player()->move("/open/gblade/room/room26.c");
         return 1;
}
