// Room: /u/r/ranko/room/v2.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����̤�ڸ������·�ϣ�����Ĵ���ʱͶ�Ժ�����۹⣬��
�����������ķÿͲ���̫��Ӧ�������ǹ��������ס��Ѱ��ũ�ᣬ
��Զ����ȥ��ɿ���һƬƬ�����͵ĵ��Ｐ�ٽ���ɹ�ȳ���
    ������һ���꣬�����ڿʵĻ��������Ǻ�һ���衣
 
LONG);
 
 
 
 
  
 
 
 

  set("light_up", 1);
  set("outdoors", "/u/r/ranko/room");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"sh3.c",
  "west" : __DIR__"v3.c",
  "east" : __DIR__"v2-3.c",
]));

  setup();
}
