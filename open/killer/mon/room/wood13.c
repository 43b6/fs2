//written by acelan...../u/a/acelan/room/wood13.c

inherit ROOM;

void create()
{
        set("short", "��ɽ��ɭ��");
        set("long", @LONG
��������, �Ѿ�����ɭ�ֵı�Ե, �޷���ǰ����, ����������
����������һ���ص����, ��ȴ�޷�����, ��һ��Ŭ��֮��, �����
����, ��Ѱ��·��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood7.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
