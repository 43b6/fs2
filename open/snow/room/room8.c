#include <room.h>

inherit ROOM;

void create()
{
	set("short","����");
          set("long",@LONG
������ѩ���ɵ���������ͷ��װ�ο�������һ����ʷ�ˣ�����
������ѩ���ɵĸ��ݵأ�����Ľ��������ٶ��꣬�ഫѩ����
��ɽ��ʦ���꿪��ʱ�ƺ��н���һЩ��������֮��ġ�
LONG);
        set("exits", ([
	"east":__DIR__"inner_room",
	"south":__DIR__"room6",
	"north":__DIR__"room9",
        ]) );
	set("light_up",1);
        setup();
}
