// Room: /u/f/funkcat/sample/j1
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
λ�ڵ��µ����ҡ����涼��������̦�Ĵ�ʯ�飬ͷ����ʱ����ˮ��
���������������Ǻڰ��Ӫ�����ң�������ֵ���ԶԶ�����Ľ�̸
���ƺ��������������ԣ��ѵ�...

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "up" : (: look_door,     "up" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"j2",
  "up" : __DIR__"wulaih2",
]));
   create_door("up","����","down");

  setup();
}
