// Room: /open/death/room/h1-5
inherit ROOM;

void create ()
{
  set ("short", "��һ��--������");
  set ("long", @LONG
��վ�����������ȥ�����������Ӷ��Ǻ��к͵�ʿ��ÿ���˶���
��ͷ����ͷ�󺹵ĳ�д�ž��ģ�ֻ��ǽ��д�ţ�����ǰɮ������ʱ����
��ˮ�����©�����ߣ����󵽴˴���д���ģ�������ǰ��©�ߣ��ٷ���
���������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"h1-6",
  "south" : __DIR__"h1-9",
]));
  set("light_up", 1);

  setup();
}
