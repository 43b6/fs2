//written by acelan...../u/a/acelan/ghost/room/ghost33.c

inherit ROOM;

void create()
{
        set("short", "�ڷ����ܲ�");
        set("long", @LONG
�����Ǻڷ�����ܲ�, �ڷ���Աһ������ɫľȻ, �������Ĳ���
��, ���ܿյ�����, ����ǽ�϶��˼���ǧ�ź���, ����������������
, �����ڷ��鲢����ԣ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost34.c",
       "west"  : __DIR__"ghost32.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
