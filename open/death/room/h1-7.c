// Room: /open/death/room/h1-7
inherit ROOM;

void create ()
{
  set ("short", "��һ��--ͨ��");
  set ("long", @LONG
���߽�����Ϸ���Զ��������������ҽ������ϵ������㣬��
�û��ɣ���������....ֻ�����ԵĹ��䶼��������Ķ���Ц�ţ����ϵ�
����·���˵:���ٺ� ! �������ˣ���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"h1-2",
  "east" : __DIR__"h1-6",
]));
  set("light_up", 1);

  setup();
}
