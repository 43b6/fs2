// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
�����ɽ����ڵ�����ƽʱ�����ĳ������㿴������λ�ɽ�����������
������������һ�µĺ����������ȫɽ���������ɽ����������ʢ���⿴
�����ƣ�������װ˾ų��ˡ�����һ������ͨ���ɽ��ڲ���

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/g4-1.c",
  "west" : "/open/gsword/room/g2-9.c",
  "south" : "/open/gsword/room/g2-13.c",
  "east" : "/open/gsword/room/g2-7.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc/spy.c" :1, ]));
  setup();
}
