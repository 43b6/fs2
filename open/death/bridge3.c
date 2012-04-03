// Room: /open/death/bridge3.c

inherit ROOM;

void create ()
{
  set ("short", "�κ���β");
  set ("long", @LONG
�����Ѿ����κ��ŵ���β�ˣ�����ǰ�߾�Ҫ�����Ź��ˣ����Ź�ǰ��
�˺ó��Ķ��飬������������������ˣ�һ���ǻ��ǳ��ϣ����ظ��۹��
������һ�־��������Ѿ�����������ʹ�ߴ������ģ����һ�֣���������
���ֹ»�Ұ������û�ط�ȥ��ֻ�����ظ������ġ�
LONG);
  set("no_auc",1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bridge2",
  "north" : __DIR__"gate",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}
