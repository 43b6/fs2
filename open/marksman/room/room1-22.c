#include <ansi.h>
#include <room.h>
inherit ROOM;
#include <marksman.h>
void create ()
{
  set ("short", "������");
  set ("long", @LONG
����������ס������ƹ滮�ɶ��칤�Ĵ��԰��������಻��
������ʱ��ˡ�����������Ľ����ֻ�����Ρ�룬��¥������
���չ��ϱ��������������������ɸ��ܣ�����������������棬�ʻ�
��ͷ������Կ���һȺȫ����װ����ʿ�ر����Լ���λ�ӣ����ƺ���
��һ�ȴ���(open door)��
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "enter" : (: look_door,     "enter" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room1-21",
  "enter" : __DIR__"room1-23",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/marksman/npc/guard" : 2,
]));

  setup();
}
