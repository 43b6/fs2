#include <room.h>

inherit ROOM;

string do_look();

void create()
{
           set("short","��Ѩ");
          set("long",@LONG
Ѩ���ڶ���, ���ھ��󶼲��, ������û�������ĵ�ͼ����֮ǰ,
��ò�Ҫ�󴳴˴�,�������ʯ���ƺ��е�Ź֡�
LONG);

        set("exits", ([
          "west":__DIR__"hole19",
          "east":__DIR__"hole20",
          "north":__DIR__"hole15",
        ]) );
	set("search_desc", ([
	    "wall" :	(: do_look :),
	    "ʯ��" :	(: do_look :),
	]) );
        setup();
}
void init()
{
	add_action("do_key","push");
}

string do_look()
{
         return "�㷢��ǽ����һ�����ţ������и�Կ��(key)�ף�\n"+
	        "Ҳ�����ѹѹ��(push)��\n";
}
int do_key(string str)
{
         if(str!="key") return 0;
        tell_object(this_player(),"�����������һ�������ƶ���ʯ�ڡ�\n");
          tell_object(this_player(),"����������ҡ�\n");
        this_player()->move(__DIR__"hole26");
         return 1;
}
