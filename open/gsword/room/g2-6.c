// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
�����ɽ����ڵ�����ƽʱ�����ĳ��� ,�㿴������λ�ɽ����������Ӻ����� ,
����һ�µĺ����� ,���ȫɽ ,�������ɽ����������ʢ ,�⿴������ ,���
���װ˾ų��� .������������ ,���Ӵ���� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/g2-7.c",
  "west" : "/open/gsword/room/g2-13.c",
  "south" : "/open/gsword/room/g2-18.c",
  "east" : "/open/gsword/room/g2-5.c",
]));

  setup();
}
