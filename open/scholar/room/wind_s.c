inherit ROOM;

void create ()
{
  set ("short", "���÷�");
  set ("long", @LONG
��֪���ǲ������ŵĹ�ϵ���ܾ�����һ�����ӱ������߹�����
�岻��Ȼ�Ĳ����ţ��ѵ��������йֶ����𣿵��ǳ����鱾���⣬��
Ҳû��������ֵĶ����ˡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"wind",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_wind.c" : 1,
]));

  setup();
}
