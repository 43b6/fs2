// /u/j/judd/room/r21.c
inherit ROOM;

void create ()
{
  set ("short", "���ö���");
  set ("long", @LONG
���ϱ߾���ͨ������ͼ��ݵ�Ψһ��·��ֻ��������һ��������
�ɵĵ�·��ֻҪ���Ż����ߣ����ܵ������ŵ��Ĵ�ͼ���֮һ������
ͼ��ݣ��������ͨ�����ڡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"r25.c",
  "north" : __DIR__"r18.c",
]));
  set("light_up", 1);

  setup();
}
