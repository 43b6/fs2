#include <room.h>

inherit ROOM;

void create()
{
	set("short","����С��");
          set("long",@LONG
����һ��С·������ͨ�����³���ǰ��ס�Ķ��¾ӣ���������
ͨ�������꣬���ڸ�����³�Ĺ�ϵ��ѩ���ɵ��ӽ����������ڶ�
�¾��Աߣ������³�ļ����Ծ�ס�ڶ��¾ӣ��Ա���ҹ׷˼���³�
��Ӣ�ݡ�
LONG);
        set("exits", ([
	"south":__DIR__"ducu_room_in",
	"north":__DIR__"ducu_live1",
        ]) );
	set("light_up",1);
        setup();
}
