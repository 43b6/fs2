//written by acelan...../u/a/acelan/ghost/room/ghost16.c

inherit ROOM;

void create()
{
        set("short", "ĹѨ");
        set("long", @LONG
ĹѨ�ڹ��߻谵, ����ɭɭ, �������ܿտտ���, һ������, ��
������ȴ��ʱ�и¸����촫��, ƫƫ����ʲô������������, ��ʱ��
��ë���Ȼ, ȫ����������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost23.c",
       "south" : __DIR__"ghost10.c",
       "east"  : __DIR__"ghost17.c",
       "west"  : __DIR__"ghost15.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black3.c" : 1,
  "/open/killer/mon/ghost/npc/black4.c" : 1,
]));
   setup();
}
