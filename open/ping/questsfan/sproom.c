// Room: /u/d/dhk/questsfan/sproom
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;36m��[2;37;0m��[1;33m��[2;37;0m��");
  set ("long", @LONG

  �� [1;33m�� �� �� �� �� �� �� �� �� �� �� ��

     �� �� �� �� · �� �� �� �� �� ̾ �� [2;37;0m��

����������Χֻ�м򵥵������Ʒ�����ڴ˶�������
����һλ[1;36m��������[1;31m��[1;36m��ȳ���[2;37;0m��[1;33mʥ��[2;37;0m���ڴ���������
��֮����
LONG);

  set("no_magic", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/u/d/dhk/obj/good.c" : 1,
  __DIR__"npc/sky.c" : 1,
]));
  set("light_up", 1);
  set("no_fight", 1);

  setup();
}
