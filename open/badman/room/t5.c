// Room: /open/badman/room/t5.c

inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG
ǰͷ�ƺ���һ����ߣ���֪���ǲ��ǳ��ڿ쵽�ˣ��㲻���ӿ�
�˽Ų�������һ���뿪���������Ż�ĵص�������Ŀռ����ȸ�
�ſ���һ�㣬�ԵñȽϺ��ߡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/t4",
  "north" : "/open/badman/room/t6",
]));

  setup();
}
