// Room: /u/r/ranko/room/v2.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����̤�ڸ������·�ϣ�����Ĵ���ʱͶ�Ժ�����۹⣬��
�����������ķÿͲ���̫��Ӧ�������ǹ��������ס��Ѱ��ũ�ᣬ
��Զ����ȥ��ɿ���һƬƬ�����͵ĵ��Ｐ�ٽ���ɹ�ȳ���
    ������ϱ���һ��ҩ�̣�����������������ʱ��������ץҩ��
���ˡ�
 
LONG);

  set("light_up", 1);
  set("outdoors", "/u/r/ranko/room");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"sh5.c",
  "west" : __DIR__"v2-8.c",
  "east" : __DIR__"v2-6.c",
]));

  setup();
}
