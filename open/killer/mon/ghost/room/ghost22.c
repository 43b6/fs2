//written by acelan...../u/a/acelan/ghost/room/ghost22.c

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
       "south" : __DIR__"ghost15.c",
       "east"  : __DIR__"ghost23.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black3.c" : 2,
]));
   setup();
}
