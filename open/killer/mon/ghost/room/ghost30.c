//written by acelan...../u/a/acelan/ghost/room/ghost30.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��������ȴ���������, ��������Ϊ
С������Ϊֹʱ, ���Ȼ���ö�����Լ����Щʲô����, ��һ���ŷ�
��, С���������޵������Ŷ������졣
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost31.c",
       "west"  : __DIR__"ghost29.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
