//written by acelan...../u/a/acelan/room/wood6.c

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
       "west"  : "/open/killer/mon/room/wood5.c",
       "east"  : "/open/killer/mon/room/wood7.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
