// Room: /open/ping/room/soldier4
inherit ROOM;

void create ()
{
  set ("short", "��Ӫ");
  set ("long", @LONG
���߽���һ�����ص�������,���۵�¯�������е���,���,
������صİ���,���л�����һ��̴ľ��,������˱�Ȼ������
����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"soldier3",
]));
  set("objects", ([
      "/open/ping/npc/general.c" : 1,
     ]) );
  set("light_up", 1);

  setup();
}
