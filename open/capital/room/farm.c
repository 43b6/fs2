// Room: /open/capital/room/farm
inherit ROOM;

void create()
{
  set ("short", "С�㳡");
  set ("long", @LONG
����ǹ��������ĵط����м��и��㳡���м���é�����ڹ㳡����
���м�ܴ��ľ�Ʒ���������ǰ��������ǰ����ʿ����Ѳ�ߣ���ž���
�����ĵط��ˡ��㳡���м���ʿ��æµ�İ������ݡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier1" : 2,
  ]));

  set("light_up", 1);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/foodh",
  "east" : "/open/capital/room/r46",
]));

  setup();
}
int valid_leave(object me,string dir)
{

   if( (dir=="north") && (present("soldier",environment(me))) )
   return notify_fail("������������:���!���ﲻ��������ĵط�!!\n");


   return ::valid_leave(me,dir);
}
