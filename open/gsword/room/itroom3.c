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
  set("exits", ([ /* sizeof() == 2 */
   "west":__DIR__"suking10",
   "south":__DIR__"itroom4.c",
  ]));
  setup();
}
