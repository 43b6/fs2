// Room: /open/killer/room/ru0.c
inherit ROOM;
void create ()
{
  set ("short", "����");
  set ("long", @LONG
������ͨ����������̳�����ĳ��ȣ������ƺ���һЩ���أ�����ҪС��һ�㡣
�����ܵ���⣬�ƺ�Ҳ���������ɱ���������ⲻ��һ���˸ý����ĵط���
ǰ�����Ǵ�˵�еĳ���ɱ��Ҷ��ɱ���Ӽ����ÿ��˵ĵط���
�䱸�ǳ���ɭ�ϣ�����ò�Ҫ���������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"ru1.c",
  "down" : __DIR__"floorm.c",
]));
  set("light_up", 10);
  setup();
}