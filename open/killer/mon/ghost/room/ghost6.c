//written by acelan...../u/a/acelan/ghost/room/ghost6.c

inherit ROOM;

void create()
{
        set("short", "���ع���");
        set("long", @LONG
��ɱ��Ĺ԰��, ��Ȼ�������ֶ���, �ɼ�ɱ����ɱ����, ���ﻹ
�ǻ᲻����, �����ع��������������, ��ҵ���Ҳ��Щ, ֻ�ǲ�֪
���ع���������ס��Щԩ��������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost12.c",
       "south" : __DIR__"ghost3.c",
       "east"  : __DIR__"ghost7.c",
       "west"  : __DIR__"ghost5.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/god.c" : 1,
  "/open/killer/mon/ghost/npc/black5.c" : 2,
]));


   setup();
}
