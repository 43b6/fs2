// Room: /u/s/smore/room/suking/suking11+
inherit ROOM;
#include <room.h>
void create ()
{
  set ("short", "��������¥");
  set ("long", @LONG
�����ǽ������Ķ�¥, Ҳ�ǽ���ȫ��������ĵط�, ����
�����ͷ��˵�����, ���¿��Իص�������. ������������һ
��ľ��, Ҳ����������Ŵ���(open door).
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "down" : "/open/gsword/room/suking8+",
  "east" : "/open/gsword/room/suking12",
]));
  set("item_desc", ([ /* sizeof() == 1 */
    "east" : (: look_door,     "east" :),
    ]));
  create_door("east", "ľ����", "west", DOOR_CLOSED);
  set("light_up", 1);

  setup();
}
