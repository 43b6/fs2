// Room: /u/r/ranko/room/pa1.c
inherit ROOM;

void create ()
{
  set ("short", "С·");
  set ("long", @LONG
����һ������������С·��·��ʯ�Ӳ��٣����ڽŵ׹ֲ����
�ģ���ʱ����ע��������ⱻ�赹�ˣ������Ӳݴ������ƺ�Ƿȱ��
����������ͨ��ũ�������ͨ��ɹ�ȳ���
 
LONG);
 
 
 
 

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"f1.c",
  "south" : __DIR__"pa1.c",
  "north" : __DIR__"pa3.c",
  "east" : __DIR__"pl1.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
