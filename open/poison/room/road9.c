// Room: /open/poison/room/road9
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
������������ǰ��һ����·�����Ӷ�ȥ��������һ��
֪���ĺ���·�߳����˸ߴ��Ұ�ݣ����ڴ�ʱ�������Բݴ�
���з���ɳɳ���죬���ĸ��ֲ����ĸо����˵��ƺ����˾�
������������뿪Ϊ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"road10",
  "southwest" : __DIR__"v1.c",
  "southup" : __DIR__"road8",
]));
  set("outdoors", "/open/poison");

  setup();
}
