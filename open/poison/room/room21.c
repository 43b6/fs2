// Room: /open/poison/room/room21
inherit ROOM;
#include <ansi.h>
#include <room.h>
void create ()
{
  set ("short", "�η�");
  set ("long", @LONG
����տյ����ģ������Ź���ʱ������һƬ���ţ�����
�������κ�һ˿����������ǽ���Ϲ����˸�ʽ�������̾ߣ�
�������а߰߾�Ѫ�����������ħ�����������ĵط��ɡ�
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room22.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/wine.c" : 1,
]));
  create_door("west",HIY "��ɫ����"NOR, "east", DOOR_CLOSED);
  set("need_key", ([ /* sizeof() == 1 */
  "west" : 1,
]));

  setup();
}
