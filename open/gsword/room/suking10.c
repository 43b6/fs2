// Room: /u/s/smore/room/suking/suking9.c

inherit ROOM;
void create ()
{
  set ("short", "���л�԰");
  set ("long", @LONG
���������д󽫾��İ��Ļ�԰,�����˸����ռ������滨���,
ֻ������ܰ��,�Ż�����,��ȴ����ôһ��������,����������
�Ļ�԰��,���������ɷ���,�ƺ���Щ����.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/suking9",
    "south":__DIR__"itroom2.c",
   "east":__DIR__"itroom3.c",
]));
  setup();
}
