// Room: /u/r/ranko/room/v3.c
inherit ROOM;

void create ()
{
  set ("short", "����������");
  set ("long", @LONG
�����Ǹ�����������룬���Խ��Ŵ��еĴ�·��������������
����һ��С·���˴���һ����ʯ���ɵ�ˮ�����Ǵ�����ˮ����Դ֮
һ�����������ڴ˵��Ŷӵȴ���ˮ��
LONG);
  

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/obj/well.c" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"pa4.c",
  "west" : __DIR__"v2-5.c",
  "north" : __DIR__"pa1.c",
  "east" : __DIR__"v2-4",
]));

  setup();
}
