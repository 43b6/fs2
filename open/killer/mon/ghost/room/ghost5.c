//written by acelan...../u/a/acelan/ghost/room/ghost5.c

inherit ROOM;

void create()
{
        set("short", "Ĺ԰");
        set("long", @LONG
������ʮ����Ĺ��һ��, ���ڵش�ƫԶ, �ټ��Ϸ�ˮ�����Ǻ���
��, �������ﲢû�����з�Ĺ������Ұ�ݼ���, �Ҽ���߻谵, ����
�Ŵ���������, ���Ի��ǲ�Ҫ�����ĺá�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost2.c",
       "east"  : __DIR__"ghost6.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
