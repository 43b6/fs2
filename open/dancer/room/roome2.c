// Room: /open/dancer/room/roome2.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
ҹ��С�������ȣ������ǽ�����������ĵ��ܣ��ߵ���
�����ŵ������㣬��������ȿ����ӵ������������ң���
�����ǻ�԰�����л�԰С���ɹ��ͻ���



LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"roome1",
  "east" : __DIR__"roome3",
  "south" : __DIR__"roomes1",
]));
 set("objects", ([ /* sizeof() == 1 */
 "/open/dancer/npc/ggirl.c" : 2,
]));

  set("light_up", 1);

  setup();
}
