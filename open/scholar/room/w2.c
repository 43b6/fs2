// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ͨ�����ż�ı����һ���ߵ����ߵ�������������
������ĵ���ͼ��������ϲ��һ�߿���ͼ��һ�߻�����
������ս���ϣ���ָ���ű�ʿ����ս��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"w3.c",
  "east" : __DIR__"w1.c",
]));

  setup();
}
