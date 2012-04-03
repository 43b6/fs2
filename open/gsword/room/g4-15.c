// Room: /open/gsword/room/g4-15.c
inherit ROOM;

void create ()
{
  set ("short", "̫�͵�");
  set ("long", @LONG
һ����Ĵ��������Ŵ��ë̺�����װ��˰��Ŵ��Σ�Ӧ���Ǳ�
�ֽϸ���֮���У���������Ҫ�¹����������Ἧ���ڵܵ�̫�͵��һ��
һ�ȵ����ڱ����ᣬҲ���ڴ˾��С�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g6-1.c",
  "east" : "/open/gsword/room/g4-11.c",
]));

  set("objects", ([ /* sizeof() == 1 */
         "/daemon/class/swordsman/cutegirl" :1,
]));

  set("light_up", 1);

  setup();
}
