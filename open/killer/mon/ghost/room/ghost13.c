//written by acelan...../u/a/acelan/ghost/room/ghost13.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, С��
�򱱲��ϵ�����, ������һ�����Ĺ, �������ƺ�����ڣ, ��������
��һ��С��Ĺ, �������������µġ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost20.c",
       "south" : __DIR__"ghost7.c",
       "east"  : __DIR__"ghost14.c",
       "west"  : __DIR__"ghost12.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
