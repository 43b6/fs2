// Room: /u/r/ranko/room/pa1.c
inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
����һ������������С·��·��ʯ�Ӳ��٣����ڽŵ׹ֲ����
�ģ���ʱ����ע��������ⱻ�赹�ˣ������Ӳݴ������ƺ�Ƿȱ��
������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v3.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
