// Room: /u/s/smore/room/suking/suking12.c

inherit ROOM;
#include <room.h>
void create ()
{
  set ("short", "��������");
  set ("long", @LONG
    ���߽���һ������ͨͨ�ķ���, ��û����������,Ҳû����
�����,���н����ľ���������˵ļ�򵥵�, Ȼ��ƽ���İ���
��,ȴ��ʧ�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/suking11+",
]));
   set("item_desc", ([ /* sizeof() == 1 */
       "west" : (: look_door,     "west" :),
        ]));
  create_door("west", "ľ����", "east", DOOR_CLOSED);
  set("objects",([
      "/open/gsword/mob/z_wife":1,
      ]));
  set("light_up", 1);

  setup();
}
