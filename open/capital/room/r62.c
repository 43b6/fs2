// Room: /open/capital/room/r62.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����ǳ����׸���ͨ���լ�أ�ס���Աߵ��ǵ����ة�࣬������
������Զ��ϣ����Էֿ�����ס����ϸ��������, ��ͷ�ƺ���һ����
�������Ļ�԰, �����л�����������ζ��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"rich",
  "west" : __DIR__"r60",
  "east" : __DIR__"r63",
]));
  set("outdoors", "/open/capital");

  setup();
}
