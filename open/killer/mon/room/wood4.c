//written by acelan...../u/a/acelan/room/wood4.c

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
       "north" : "/open/killer/mon/room/wood9.c",
       "west"  : "/open/killer/mon/room/wood3.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
