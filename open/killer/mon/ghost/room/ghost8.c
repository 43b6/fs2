//written by acelan...../u/a/acelan/ghost/room/ghost8.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰С��");
        set("long", @LONG
����һ����Ĺ԰�е�С��, ��ͨ�˴�, ����ͨ��������Ĺ, ��С
�������ľ�ͷ, ��һ���ô�ķ�Ĺ, ��������С������רΪ�Ǹ���Ĺ
���ٵ�, ����������һ��С��Ĺ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost14.c",
       "east"  : __DIR__"ghost9.c",
       "west"  : __DIR__"ghost7.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
