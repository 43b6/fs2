// Room: /open/main/room/gy3.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
��һ̤�����������֣���ôེã�����߾�Ȼ������β�ķ���
����������Ȼ��������һ��С����������ǰ����������ܹ��˳�Ц
���һ�������ͬ�����ߣ�Ϊ�����ȼ�����գ�������������

LONG);

  set("objects", ([ /* sizeof() == 1 */
 //  "/open/main/npc/general.c" : 1,
]));
  set("outdoors", "/open/main");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"gy2.c",
]));

  setup();
}
