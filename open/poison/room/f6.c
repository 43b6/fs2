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
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f5.c",
  "south" : __DIR__"f3.c",
  "east" : __DIR__"f7.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
