// Room: /u/d/devils/school5.c

inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
�㿴����λ��ʦ�ڴ˲���,��ʦ�׺���:���ҵ�"��������޼���ȭ",
��ʦ�Ҵ��һ��:����"���������Ӱ����"�������!..........
�����㾪�������Ͼ�������书֮ʱ,һ�����ǹ�ͻȻ������ʦ,��λ��
ʦ�ŵ���Ķ���,ֻʣ����ڵ���.......
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"school2",
  "east" : __DIR__"school6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainee" : 2,
]));

  set("outdoors", "/open/wu");
  setup();
}
