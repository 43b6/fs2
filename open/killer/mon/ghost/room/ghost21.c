//written by acelan...../u/a/acelan/ghost/room/ghost21.c

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
       "north" : __DIR__"ghost28.c",
       "south" : __DIR__"ghost14.c",
       "west"  : __DIR__"ghost20.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
