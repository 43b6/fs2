// Room: /u/r/ranko/room/pa1.c
inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
����һ������������С·��·��ʯ�Ӳ��٣����ڽŵ׹ֲ����
�ģ���ʱ����ע��������ⱻ�赹�ˣ������Ӳݴ������ƺ�Ƿȱ��
����������ͨ��ũ�������ͨ��ɹ�ȳ�������������һ������
����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/child.c" : 2,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f8.c",
  "south" : __DIR__"pa2.c",
  "east" : __DIR__"pl8.c",
]));

  setup();
}
