// Room: /open/gsword/room/gsword1-1.c
inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG
����һ��ͨ���ؾ����С����С���ϳ�������̦���ƺ�������ͨ�У�
���Ծ�ľ���죬�������У�����������ˬ����ɽ�ϵĿ����������ʡ���˵
�ɽ��ɵĲؾ����ղ���ȫ��������ȫ�������ؼ�������ȴ�����ѽ��롣

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g5-13.c",
  "east" : "/open/gsword/room/g5-15.c",
]));

  setup();
}
