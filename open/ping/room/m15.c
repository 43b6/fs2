// Room: /open/ping/room/m15.c ~night~(С��)

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
  "up" : __DIR__"m16",
  "south" : __DIR__"m14",
]));

  setup();
}
