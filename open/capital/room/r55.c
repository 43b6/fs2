// Room: /open/capital/room/r55.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����������Զ��ſڣ�һ������ɽѩľ�ƳɵĴ��ż�����������
��ʯʨ����ʾ����Զ�����������������Ը�
    �������ϵ��Ҷ��лʵ�������ĸ��֣���fl;[4D��Զ�fcm[4D��

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/general",
  "west" : "/open/capital/room/r54",
  "east" : "/open/capital/room/r56",
]));

  set("outdoors", "/open/capital");

  setup();
}
