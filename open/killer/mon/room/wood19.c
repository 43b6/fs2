//written by acelan...../u/a/acelan/room/wood19.c

inherit ROOM;

void create()
{
        set("short", "������ľ");
        set("long", @LONG
������ɱ��ɭ�ֵ�����, ���������һ����ľ, ��ľ�ı�����һ
�����, ����ֱ��ͨ����ľ���Ϸ����ײ�����������������, �й�
Ī���Ŀ־�ͻȻ��������, Ī���ѹ����Ȼ�ĳ��������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "up" : "/open/killer/mon/room/wood20.c",
       "down" : "/open/killer/mon/room/wood18.c",
       "north" : "/open/killer/mon/room/wood26.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
