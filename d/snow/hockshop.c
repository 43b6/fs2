// Room: /d/snow/hockshop.c

#include <room.h>

inherit HOCKSHOP;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ��ǵ���");
  set ("long", @LONG
����һ���еȹ�ģ�ĵ��̣��ϾɵĹ�̨�Ϸ���һ��ľ��(sign)����
��Ĺ��߲��Ǻ����������ĳ��ڱ�һ����ɫ�������ţ������С�����Ī
�롱��������������һ��ľ����(door)ͨ����֡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"mstreet3",
  "east" : __DIR__"hockshop2",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "west" : (: look_door,     "west" :),
  "sign" : "�����̲����ۺ�ͯ�����ۣ���ӭ�ݹˣ����Ա��ܡ�
���Ŀ���������䵱(pawn)������(sell)���ֻ��ͭǮ���������ƽ���Ʊ
һ��ͨ�á�
",
]));

  setup();
}
