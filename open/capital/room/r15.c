// Room: /open/capital/room/r15.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�����Ǳ��������ĵط�����Ҫ�ڴ˵ض������������ܵ�����Ҫ��
�˺���ͽ���Ƿǡ�
    �����Ĵ��ͨ���ʹ�����, Ҳ�������������ԣ������
    ��������ͨ�������µ�·��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
   "north":"/open/capital/room/chen_home",
  "west" : __DIR__"r14",
  "east" : __DIR__"D02",
]));

  set("gopath", "west");

  setup();
}
