//room:/u/e/eva/village/room/room-45.c        made by eva
#include <room.h>
#include <ansi.h>
#include "/u/e/eva/village/village.h"

inherit ROOM;

void create ()
{
  set ("short", "ħ�����");
  set ("long", @LONG

    һ����ש�����ɵ���ͨ��, ���ڷ���һЩ�򵥵ļҾ߰���, ��
ħ����еı�׼סլ!

LONG);

  set("light_up", 1);
  set("no_magic", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"room-07",
]));
  set("no_fight", 1);
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
