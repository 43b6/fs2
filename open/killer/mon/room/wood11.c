//written by acelan...../u/a/acelan/room/wood11.c

inherit ROOM;

void create()
{
        set("short", "ɭ�ֵ�С��");
        set("long", @LONG
������ɭ�ֵĶ���, ��һ������Ҷ���ɵ�С����ǰ����, �ƺ���
�Դ����߳���Ƭ�ֲ���ɭ�֡�������ľ����, ��������, ǿ��ӭ�洵
��, ����������˸������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood15.c",
       "west"  : "/open/killer/mon/room/wood10.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
       "/open/killer/mon/npc/spy5.c":1,
   ]));
        setup();
 }
