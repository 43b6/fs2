//written by acelan...../u/a/acelan/room/wood10.c

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
       "west"  : "/open/killer/mon/room/wood9.c",
       "east"  : "/open/killer/mon/room/wood11.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
