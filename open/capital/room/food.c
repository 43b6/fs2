// Room: /open/capital/room/food
inherit ROOM;

void create ()
{
  set ("short", "����ʳ��");
  set ("long", @LONG
������һ�����Ĵ�ʳ�ã���˵�ϰ�͸�ͨ����죬���л���ѵ���
������֥���ͬ�ϡ���Ĵ����Ȼû��������ô�õ����գ����������
��Ѽ����ȴ���ܻʵۼ���ٹ����ǵ�ϲ�����������ʳ����Ȼ�ǹ�����
�ۻ���͵ĳ���������Ҫ��û�������������ӣ����Ǳ��������ûȤ��
�á�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"h10",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/redwaiter" : 1,
]));
  set("light_up", 1);

  setup();
}
