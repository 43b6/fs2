// Room: /open/main/room/f10.c

inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
������һ����֪��������С���ϣ�����ס��һЩ�Դ�ɭ
��Ϊ����ɢ�����������Ǹߴ����ľ��Զ�������������ˮ
��������ʮ�ֵ��徲��
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/poison/room/room4",
  "north" : "/open/poison/room/room3",
  "east" : "/open/poison/room/road2",
  "southwest" : "/open/poison/room/road4",
]));
  set("outdoors", "/open/main");

  setup();
}
