// Room: /u/r/ranko/room/f1.c
inherit ROOM;

void create ()
{
  set ("short", "ũ��");
  set ("long", @LONG
һ��Ƭ�����͵���غ�ب������ǰ�������ĵ��뼸��������ѹ
���������档��Զ���������ũ����æ���ո���������ƺ��Ǹ�
���ꡣ�����ͯ�����ո���������������ȥ����Ĳ����ֺ�����
����ʱ�ɹ���ֻ����𸣬��������˻������
    �����߿ɻص�С·�ϡ�
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f2.c",
  "north" : __DIR__"f8.c",
  "east" : __DIR__"pa2.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
