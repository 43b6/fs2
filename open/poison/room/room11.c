// Room: /open/poison/room/room11
inherit ROOM;

void create ()
{
  set ("short", "˵����");
  set ("long", @LONG
���������Դ�����ѧ֪ʶ�ĵط�����ʱ���ڴ˵ر�����
�������Ծ�����ͽ�ĸ�����Ǩ���������ͽ��ѧ֮���ܣ���
�����Ƿ��ܴ��ڸ��������ѧ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room13",
  "north" : __DIR__"room12",
  "east" : __DIR__"road18",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/elder1" : 1,
]));

  setup();
}
