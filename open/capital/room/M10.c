// Room: /open/capital/room/M10.c

inherit ROOM;

void create ()
{
  set ("short", "�ﲼ��˾");
  set ("long", @LONG
�ﲼ��˾, ר�Ź�����ڲ������ν��ײ��Լ��������۵����⣬��
��������ң����ｫ���ṩ����������Ѷ��
    ǽ�Ϲ���һ������(note)��

LONG);

set("item_desc", ([
"note" : "��...��û����ʦ��ʼдҮ, ������˼��  :P\n",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r58",
]));
  set("light_up", 1);

  setup();
}
