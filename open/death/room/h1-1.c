// Room: /open/death/room/h1-1
inherit ROOM;

void create ()
{
  set ("short", "��һ��--����");
  set ("long", @LONG
�����ǵ�һ����ع�������Ͻ�����ж����ı����ع�����������
�ұ�ǽ��д�š���Ҫ����˹أ���Ҫ�������ơ������ǽ��д�š��ֻ�
��������ת�������������㿴�˲����ֻ�����..........
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"h1-6",
]));
  set("light_up", 1);

  setup();
}
