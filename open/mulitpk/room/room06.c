// Room: /u/o/ookami/pkroom/room06.c
inherit ROOM;

void create ()
{
  set ("short", "�᳡����");
  set ("long", @LONG
�����ǻ᳡������, ��Ŀ��ȥ, ֻ��һƬ�տ���ƽ��, ����������
���˷���ƽ����ѧ, �����ִ����һ�ϸ���, ��ƽ��������Ҳ�����˽�
�ŵĸо�

LONG);

  set("light_up", 1);
  set("no_auc", 1);
        set("no_transmit", 1);
  set("pkroom", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"room02.c",
  "west" : __DIR__"room05",
  "south" : __DIR__"room10",
  "east" : __DIR__"room07.c",
]));

  setup();
}
