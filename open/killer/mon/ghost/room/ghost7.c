//written by acelan...../u/a/acelan/ghost/room/ghost7.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, С��
�򱱲��ϵ�����, ������һ�����ع���, ��������һ���ô�ķ�Ĺ,
��֪����ʲô���������档
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost13.c",
       "south" : __DIR__"ghost4.c",
       "east"  : __DIR__"ghost8.c",
       "west"  : __DIR__"ghost6.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
