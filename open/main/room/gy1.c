inherit ROOM;

void create ()
{
  set ("short", "ɳĮ��ͷ");
  set ("long", @LONG
��������������ɳĮ�ľ�ͷ��������ɳ�������۾�
�޷������ǰ��������Ȼ����������̸���������ƺ���Щ
���������������š�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"d7.c",
/*
  "east" : "/open/island/room/port",
*/
]));
  set("outdoors", "/open/main");

  setup();
}

