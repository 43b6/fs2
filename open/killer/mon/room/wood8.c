//written by acelan...../u/a/acelan/room/wood8.c

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
       "west"  : "/open/killer/mon/room/wood7.c",
       "south" : "/open/killer/mon/room/wood3.c",
       "east"  : "/open/killer/mon/room/wood9.c",
   ]));
   setup();
}
