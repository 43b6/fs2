// Room: /u/r/ranko/room/v2.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����̤�ڸ������·�ϣ�����Ĵ���ʱͶ�Ժ�����۹⣬��
�����������ķÿͲ���̫��Ӧ�������ǹ��������ס��Ѱ��ũ�ᣬ
��Զ����ȥ��ɿ���һƬƬ�����͵ĵ��Ｐ�ٽ���ɹ�ȳ���
    �����Ǵ峤�ļң��峤�Ǹ��������˵��ˣ����������ѵĻ���
����ȥ�ݷô峤һ�£�Ҳ�����ܰ�æ��
 
LONG);

  set("light_up", 1);
  set("outdoors", "/u/r/ranko/room");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"v5.c",
  "west" : __DIR__"v2-7.c",
  "east" : __DIR__"v2-5.c",
]));

  setup();
}
