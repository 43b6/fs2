#include <room.h>
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
    �����ǶμҵĴ�����, �ƺ�����������, �ҳ���������, ֻ��ǽ��
������������һ��һ��������(box), ����֮��, Ҳû�б�Ķ����ˡ�

    ������һ������(door)��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"np3",
]));

  create_door("north","����","south",DOOR_LOCKED);

  set("item_desc", ([ /* sizeof() ==  */
  "north" : (: look_door,     "north" :),
  "door" :  (: look_door,     "north" :),
  "box" : "һ��СС���µ�ͭ����, ��ͷ�ƺ���Щ������\n",
  ]));

  set("search_desc", ([ /* sizeof() == 1 */
  "box" : "�������������һ��, ������ͷװ��������(firecracker)��\n����Ҫ�Ļ�����(take)һЩ�߰ɡ�\n",
  ]));

  set("need_key", ([ /* sizeof() == 1 */
  "east" : 1,
]));

  setup();
}

void init()
{
        add_action("do_take","take");
}
int do_take(string str)
{
        object me=this_player();
        object fire=new(PING_OBJ"fire");
        if(str != "firecracker")
          write("��Ҫ����������ʲô����?\n");
        else
        {
          write("��С��������ó�һ�����̴��뻳�\n");
          fire->move(me);
        }
        return 1;
}


