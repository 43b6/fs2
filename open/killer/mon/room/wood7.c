//written by acelan...../u/a/acelan/room/wood7.c

inherit ROOM;

void create()
{
        set("short", "��ɽɭ��");
        set("long", @LONG
���ƺ��о�������Ӱ�����ϻζ�, ��ȴ�ֿ������κζ���, ���
����������Լ��Ĵ��, һ����ǿ�紵��, ��Ӱ�ζ�, ��Ҷ�׷�, ��
�����������еĺ���, ������ӿ�Ų�, �뿪��Ƭ���µ����֡�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood13.c",
       "west"  : "/open/killer/mon/room/wood6.c",
       "south" : "/open/killer/mon/room/wood2.c",
       "east"  : "/open/killer/mon/room/wood8.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
