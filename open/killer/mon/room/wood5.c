//written by acelan...../u/a/acelan/room/wood5.c

inherit ROOM;

void create()
{
        set("short", "ɭ�ֵ�С��");
        set("long", @LONG
������ɭ�ֵ�����, ��һ������Ҷ���ɵ�С����ǰ����, �ƺ���
�Դ����߳���Ƭ�ֲ���ɭ�֡�������ľ����, ��������, ǿ��ӭ�洵
��, ����������˸������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood12.c",
       "east"  : "/open/killer/mon/room/wood6.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
       "/open/killer/mon/npc/spy5.c":1,
   ]));
        setup();
}
