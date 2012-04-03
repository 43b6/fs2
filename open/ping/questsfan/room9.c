// Room: /u/d/dhk/questsfan/room9
inherit ROOM;

void create ()
{
  set ("short", "��վС��");
  set ("long", @LONG
����һ�����ͨ��ľ�Ʒ��ݣ��������ܰڷŵļҾߣ�
������Ϊ���ﲢ������һ��ס�ҡ���������ֻ������׳��
�ڴ�������죬�������ǵ�һ��һ��������ʾ���ǲ�����
ͨ�ˣ��ѵ���
LONG);

  set("outdoors", "/u/d");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wooder.c" : 1,
  __DIR__"npc/hunter.c" : 1,
  __DIR__"npc/farmer.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qroom/room5",
]));

  setup();
}
