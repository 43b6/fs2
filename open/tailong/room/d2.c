inherit ROOM;

void create ()
{
  set ("short", "�յ�");
  set ("long", @LONG
��������ǰ�Ŀյأ��������ȫ���ǲ軨��Ʒ�ֺܶ࣬����
Ŀ���ڸ����㿴����������һ�����ڿ��飬Ӧ�þ�������Ҫ�ҵ�
�Ǹ����˰ɡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"d1",
  "north" : __DIR__"d3",
]));

  set("no_transmit",1);
  setup();
}
