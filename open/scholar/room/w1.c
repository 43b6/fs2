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
  "west" : __DIR__"w2.c",
  "east" : __DIR__"r20.c",
]));

  setup();
}
