//written by acelan...../u/a/acelan/ghost/room/ghost27.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, С��
������ֻ������Ϊֹ, ������ʬ��ɢ�����ص������, ��������һ
�������޵�С��, ������ͦ����ġ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost20.c",
       "east"  : __DIR__"ghost28.c",
       "west"  : __DIR__"ghost26.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
