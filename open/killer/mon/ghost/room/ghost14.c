//written by acelan...../u/a/acelan/ghost/room/ghost14.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰");
        set("long", @LONG
�����Ĺ����������, ����������Ѿ����൱��������, ������
�����������Ӳݵ����˶�û�С���˵���Ӳݴ���, ��������ȴʢ����
һЩ��֪����С��, ��׺����, εΪ��ۡ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost21.c",
       "south" : __DIR__"ghost8.c",
       "west"  : __DIR__"ghost13.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
