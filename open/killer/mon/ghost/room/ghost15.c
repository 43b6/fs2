//written by acelan...../u/a/acelan/ghost/room/ghost15.c

inherit ROOM;

void create()
{
        set("short", "ĹѨ");
        set("long", @LONG
ĹѨ�ڹ��߻谵, ����ɭɭ, �������ܿտտ���, һ������, ��
������ȴ��ʱ�и¸����촫��, ƫƫ����ʲô������������, ��ʱ��
��ë���Ȼ, ȫ����������
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost22.c",
       "east"  : __DIR__"ghost16.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
