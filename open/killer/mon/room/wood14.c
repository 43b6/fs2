//written by acelan...../u/a/acelan/room/wood14.c

inherit ROOM;

void create()
{
        set("short", "��ɽ��ɭ��");
        set("long", @LONG
��������ɭ�ֵı�Ե, һ�ô�����ס�����ȥ·, �������洫��
����ĽŲ���, �ƺ�����ͨ��, ���þ��˸��ַ���ȴ��Ȼ�޷���ȥ,
����, Ҳ��Ӧ�����������ڡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood9.c",
        "north" : "/open/killer/memory/hr1.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc3.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
