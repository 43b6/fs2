// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
�����ɽ����ڵ�����ƽʱ�����ĳ��� ,�㿴������λ�ɽ����������Ӻ����� ,
����һ�µĺ����� ,���ȫɽ ,�������ɽ����������ʢ ,�⿴������ ,���
���װ˾ų��� .����һ���������������� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/g2-14.c",
  "south" : "/open/gsword/room/g2-11.c",
  "north" : "/open/gsword/room/g2-9.c",
  "east" : "/open/gsword/room/g2-13.c",
]));

  setup();
}
