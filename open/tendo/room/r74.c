// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","���εص�");
        set("long", @LONG
�ߵ�����ǵص��ľ�ͷ�ˣ���������Ҹ���һ���η����û�б�
�Ķ���������ͷ��ǽ(wall)�ͱ�ĵط���ǽ��ɫ�е㲻ͬ��������--
��������Ϊ�ص��Ĺ�ϵ��!!�����ҵĻ����˸����ʹ�����ȷ�����
�Ʋ⡣
LONG);
set("exits", ([
	"north":__DIR__"r73",
	"west":__DIR__"r77",
	"east":__DIR__"r80",
]));
  setup();
}
void init()
{
        add_action("do_push","push");
}

int do_push(string str)
{
        object who;
        who = this_player();

        if(str!="wall"){return 0;}
        tell_object(who,"�����������һ��ǽ����ǽȴ���ٵ�ת��һȦ��Ҳ��������ת"+"�˽�ȥ��\n");
        who->move("/open/tendo/room/r81");
        tell_room(this_object(),"�㿴����ͷ��ǽ��"+who->query("name")+"һ��֮��"
				+"ת����һȦ����"+who->query("name")+"Ҳ��ǽ��"+
				"ת�˽�ȥ��\n");
        return 1;
}
