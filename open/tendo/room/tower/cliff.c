#include <room.h>
inherit ROOM;
void create()
{
        set("short", "�ͱ�");
	set("long", @LONG
����һƬ�ͱڵ����·�����������ط�ֻ��һƬ�ͱڣ����Ը�����
�����ڴ˶�����������Ҳ��һƬ���ߵľ����ͱ��ϴ������������٣�
���ͱ���Ҳ�������˸߹���ͷ���Ӳ�(brush)��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south"  : "/open/tendo/room/tower/cave2",
]));
	set("outdoors", 1);
	setup();
}
void init()
{
        add_action("enter_brush", "enter" );
}
int enter_brush(string str)
{
    if(str!="brush")
      {
       write("��Ҫ��ȥ���ﰡ��\n");
        return 0;
      }
      else
      {
       write("[1;32m�㲦���˲ݴԣ����˽�ȥ��[0m\n");
        say("[1;32m"+this_player()->query("name")+"�����˲ݴԣ�����ɳɳ����[0m\n");
       this_player()->move("/open/tendo/room/tower/room5a");
       say("[1;32m�ݴԷ���ɳɳ����"+this_player()->query("name")+"�����˲ݴԣ����˽�����[0m\n");
       return 1;
}
}


