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
	"south":__DIR__"room8",
	"north":__DIR__"room20",
        ]) );
	set("light_up",1);
        setup();
}
