// Room: /u/l/lotus/f2a.c
inherit ROOM;

void create ()
{
  set ("short", "¥�ݿ�");
  set ("long", @LONG
��¥��С���ǵķ��������, ������һ�ȴ�, ����Կ�������
�ľ�ɫ.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"f2b.c",
  "down" : __DIR__"tin4.c",
]));
  set("light_up", 1);

  setup();
}
