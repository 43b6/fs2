// Room: /u/e/eiei/room/troom_0.c
inherit ROOM;

void create ()
{
  set ("short", "���ų���");
  set ("long", @LONG
    ������ѩ���ɵ��������ţ��ɴ�����ȥ�����Կ���
    һƬ�����͵����֣����ҿ����ǿ����ſڵĹ�ϵ������
    �Ŀ����ȴ�����Ҫ�ö��ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room17.c",
  "east" : __DIR__"troom_1.c",
]));
  set("outdoors", "/open/snow/room");

  setup();
}
