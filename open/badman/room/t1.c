// Room: /open/badman/room/t1.c

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
������һ�������ĵص��У��������ֲ�����ָ����͹��ƽ��
����ʹ�㲻�ò�����ǽ�ڲ��������ƶ���ǰͷ��һƬ��ڣ���֪��
�����ص���ͨ���δ�....

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/main/room/F12",
  "north" : "/open/badman/room/t2",
]));

  setup();
}
