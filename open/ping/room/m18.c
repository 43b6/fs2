// Room: /open/ping/room/m18.c ~night~(С��)

inherit ROOM;

void create ()
{
  set ("short", "С�ص�");
  set ("long", @LONG


����ص�һ������ͨ������ɽ��·��,�ѵص�������ô����,����ɽ����Щɽ����,���û��
����ô������,��������ʶһ�·���ɽ���Ĵ���,�ͼ�������ȥ��!

LONG);

  set("objects", ([ /* sizeof() == 1 */
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"m19",
  "south" : __DIR__"m17",
]));

  setup();
}
