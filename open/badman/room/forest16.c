// Room: /open/badman/room/forest16.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
���Ҳ����һ��Ƭ�����֣����ɶ��ߵ��������ӹ�����ֻ����
���������(bamboo)�ȶ��ߵ�ϡ���˵㣬Ҳ����������ǰ�ĵط�
��������࣬������ֵ������Ǹ������峺�ĺ�����
 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lake0",
  "east" : __DIR__"forest15",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "bamboo" : "һ����ϸ�������ӡ�
",
]));
  set("outdoors", "/open/badman");

  setup();
}
