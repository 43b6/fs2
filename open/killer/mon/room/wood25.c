//written by acelan...../u/a/acelan/room/wood25.c

inherit ROOM;

void create()
{
        set("short", "���صĵص�");
        set("long", @LONG
�ߵ�����, �ص�����ת��, �ڻ谵�����ĵƹ���, ���Ȼ����ǽ
���ƺ�����ĳЩ����, ��ͼ��, Ӧ����ĳΪǰ�����������ľ�����\��
��, ���������Ѿ����˻�ȥ, ֻʣ��Щ�������Ա��ϵ�ͼ�ζ��ѡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood17.c",
       "west" : "/open/killer/mon/room/wood24.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc1.c":1,
   ]));
   set("no_clean_up", 0);

   setup();
}
